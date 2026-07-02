#include "EslonCodeEditorLibrary.h"

#include "Dom/JsonObject.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraphNode_Comment.h"
#include "EdGraphSchema_K2.h"
#include "Engine/Blueprint.h"
#include "Interfaces/IPluginManager.h"
#include "K2Node.h"
#include "K2Node_EditablePinBase.h"
#include "K2Node_FunctionEntry.h"
#include "K2Node_FunctionResult.h"
#include "K2Node_IfThenElse.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/ScopedSlowTask.h"
#include "ScopedTransaction.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

namespace EslonCodeEditor
{
	static constexpr int32 CommentWidth = 260;
	static constexpr int32 CommentHeight = 96;
	static const TCHAR* GeneratedMarker = TEXT("@EslonCodeGenerated");

	static void AddDiagnostic(
		FEslonCodeEmitReport& Report,
		EEslonCodeDiagnosticSeverity Severity,
		const FString& Message,
		const FString& FunctionName = FString(),
		int32 Line = 0)
	{
		FEslonCodeDiagnostic Diagnostic;
		Diagnostic.Severity = Severity;
		Diagnostic.Message = Message;
		Diagnostic.FunctionName = FunctionName;
		Diagnostic.Line = Line;
		Report.Diagnostics.Add(Diagnostic);
	}

	static FString NormalizeTypeName(const FString& TypeName)
	{
		FString Result = TypeName;
		Result.TrimStartAndEndInline();
		return Result;
	}

	static bool IsWildcardType(const FEdGraphPinType& PinType)
	{
		return PinType.PinCategory == UEdGraphSchema_K2::PC_Wildcard;
	}

	static FEdGraphPinType MakePinType(const FString& TypeName)
	{
		FString Normalized = NormalizeTypeName(TypeName);
		FEdGraphPinType PinType;
		PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
		PinType.ContainerType = EPinContainerType::None;

		if (Normalized.StartsWith(TEXT("TArray<")) && Normalized.EndsWith(TEXT(">")))
		{
			const FString InnerTypeName = Normalized.Mid(7, Normalized.Len() - 8);
			PinType = MakePinType(InnerTypeName);
			PinType.ContainerType = EPinContainerType::Array;
			return PinType;
		}

		if (Normalized.Equals(TEXT("bool"), ESearchCase::IgnoreCase) || Normalized.Equals(TEXT("boolean"), ESearchCase::IgnoreCase))
		{
			PinType.PinCategory = UEdGraphSchema_K2::PC_Boolean;
		}
		else if (Normalized.Equals(TEXT("int"), ESearchCase::IgnoreCase) || Normalized.Equals(TEXT("int32"), ESearchCase::IgnoreCase))
		{
			PinType.PinCategory = UEdGraphSchema_K2::PC_Int;
		}
		else if (Normalized.Equals(TEXT("int64"), ESearchCase::IgnoreCase))
		{
			PinType.PinCategory = UEdGraphSchema_K2::PC_Int64;
		}
		else if (Normalized.Equals(TEXT("float"), ESearchCase::IgnoreCase))
		{
			PinType.PinCategory = UEdGraphSchema_K2::PC_Float;
		}
		else if (Normalized.Equals(TEXT("double"), ESearchCase::IgnoreCase))
		{
			PinType.PinCategory = UEdGraphSchema_K2::PC_Double;
		}
		else if (Normalized.Equals(TEXT("Name"), ESearchCase::IgnoreCase) || Normalized.Equals(TEXT("FName"), ESearchCase::IgnoreCase))
		{
			PinType.PinCategory = UEdGraphSchema_K2::PC_Name;
		}
		else if (Normalized.Equals(TEXT("String"), ESearchCase::IgnoreCase) || Normalized.Equals(TEXT("FString"), ESearchCase::IgnoreCase))
		{
			PinType.PinCategory = UEdGraphSchema_K2::PC_String;
		}
		else if (Normalized.Equals(TEXT("Text"), ESearchCase::IgnoreCase) || Normalized.Equals(TEXT("FText"), ESearchCase::IgnoreCase))
		{
			PinType.PinCategory = UEdGraphSchema_K2::PC_Text;
		}
		else if (Normalized.StartsWith(TEXT("/")))
		{
			if (UObject* TypeObject = LoadObject<UObject>(nullptr, *Normalized))
			{
				if (UBlueprint* BlueprintType = Cast<UBlueprint>(TypeObject))
				{
					PinType.PinCategory = UEdGraphSchema_K2::PC_Object;
					PinType.PinSubCategoryObject = BlueprintType->GeneratedClass ? BlueprintType->GeneratedClass : BlueprintType->SkeletonGeneratedClass;
				}
				else if (UClass* ClassType = Cast<UClass>(TypeObject))
				{
					PinType.PinCategory = UEdGraphSchema_K2::PC_Object;
					PinType.PinSubCategoryObject = ClassType;
				}
				else if (UScriptStruct* StructType = Cast<UScriptStruct>(TypeObject))
				{
					PinType.PinCategory = UEdGraphSchema_K2::PC_Struct;
					PinType.PinSubCategoryObject = StructType;
				}
				else if (UEnum* EnumType = Cast<UEnum>(TypeObject))
				{
					PinType.PinCategory = UEdGraphSchema_K2::PC_Enum;
					PinType.PinSubCategoryObject = EnumType;
				}
			}
		}

		return PinType;
	}

	static FString LiteralToPinDefault(const TSharedPtr<FJsonObject>& NodeObject)
	{
		if (!NodeObject.IsValid())
		{
			return FString();
		}

		const TSharedPtr<FJsonObject>* MetaObject = nullptr;
		if (!NodeObject->TryGetObjectField(TEXT("meta"), MetaObject) || !MetaObject || !MetaObject->IsValid())
		{
			return FString();
		}

		const TSharedPtr<FJsonValue> Value = (*MetaObject)->TryGetField(TEXT("value"));
		if (!Value.IsValid())
		{
			return FString();
		}

		switch (Value->Type)
		{
		case EJson::Boolean:
			return Value->AsBool() ? TEXT("true") : TEXT("false");
		case EJson::Number:
			return FString::SanitizeFloat(Value->AsNumber());
		case EJson::String:
			return Value->AsString();
		default:
			break;
		}

		return FString();
	}

	static bool GraphHasGeneratedMarker(const UEdGraph* Graph)
	{
		if (!Graph)
		{
			return false;
		}

		for (UEdGraphNode* Node : Graph->Nodes)
		{
			if (const UEdGraphNode_Comment* Comment = Cast<UEdGraphNode_Comment>(Node))
			{
				if (Comment->NodeComment.Contains(GeneratedMarker))
				{
					return true;
				}
			}
		}

		return false;
	}

	static UEdGraphNode_Comment* CreateCommentNode(UEdGraph* Graph, const FString& Text, int32 X, int32 Y, int32 Width = CommentWidth, int32 Height = CommentHeight)
	{
		UEdGraphNode_Comment* Comment = NewObject<UEdGraphNode_Comment>(Graph);
		Graph->AddNode(Comment, true, false);
		Comment->CreateNewGuid();
		Comment->NodePosX = X;
		Comment->NodePosY = Y;
		Comment->NodeWidth = Width;
		Comment->NodeHeight = Height;
		Comment->NodeComment = Text;
		return Comment;
	}

	template <typename NodeType>
	static NodeType* CreateK2Node(UEdGraph* Graph, int32 X, int32 Y)
	{
		NodeType* Node = NewObject<NodeType>(Graph);
		Graph->AddNode(Node, true, false);
		Node->CreateNewGuid();
		Node->PostPlacedNewNode();
		Node->AllocateDefaultPins();
		Node->NodePosX = X;
		Node->NodePosY = Y;
		return Node;
	}

	template <typename NodeType>
	static NodeType* FindFirstNode(UEdGraph* Graph)
	{
		for (UEdGraphNode* Node : Graph->Nodes)
		{
			if (NodeType* TypedNode = Cast<NodeType>(Node))
			{
				return TypedNode;
			}
		}
		return nullptr;
	}

	static void FindNodesOfClass(UEdGraph* Graph, TArray<UK2Node_FunctionResult*>& OutNodes)
	{
		for (UEdGraphNode* Node : Graph->Nodes)
		{
			if (UK2Node_FunctionResult* ResultNode = Cast<UK2Node_FunctionResult>(Node))
			{
				OutNodes.Add(ResultNode);
			}
		}
	}

	static void AddUserPinIfMissing(UK2Node_EditablePinBase* Node, const FString& PinName, const FString& TypeName, EEdGraphPinDirection Direction)
	{
		if (!Node || PinName.IsEmpty() || Node->FindPin(FName(*PinName)))
		{
			return;
		}

		Node->CreateUserDefinedPin(FName(*PinName), MakePinType(TypeName), Direction, false);
	}

	static UEdGraphPin* FindPlanPin(UEdGraphNode* Node, const FString& PlanPinName, EEdGraphPinDirection Direction)
	{
		if (!Node)
		{
			return nullptr;
		}

		if (UK2Node* K2Node = Cast<UK2Node>(Node))
		{
			if (PlanPinName == TEXT("exec"))
			{
				return K2Node->GetExecPin();
			}
			if (PlanPinName == TEXT("then") || PlanPinName == TEXT("true"))
			{
				return K2Node->GetThenPin();
			}
		}

		if (UK2Node_IfThenElse* BranchNode = Cast<UK2Node_IfThenElse>(Node))
		{
			if (PlanPinName == TEXT("false"))
			{
				return BranchNode->GetElsePin();
			}
			if (PlanPinName == TEXT("condition"))
			{
				return BranchNode->GetConditionPin();
			}
		}

		if (UEdGraphPin* Pin = Node->FindPin(FName(*PlanPinName), Direction))
		{
			return Pin;
		}

		return Node->FindPin(FName(*PlanPinName));
	}

	static bool AddMemberVariable(UBlueprint* TargetBlueprint, FName VariableName, const FString& TypeName, const FString& DefaultValue, FEslonCodeEmitReport& Report)
	{
		if (!TargetBlueprint)
		{
			AddDiagnostic(Report, EEslonCodeDiagnosticSeverity::Error, TEXT("No target Blueprint was provided."));
			return false;
		}

		if (VariableName.IsNone())
		{
			AddDiagnostic(Report, EEslonCodeDiagnosticSeverity::Error, TEXT("Variable name is empty."));
			return false;
		}

		if (FBlueprintEditorUtils::FindNewVariableIndex(TargetBlueprint, VariableName) != INDEX_NONE)
		{
			return true;
		}

		const FEdGraphPinType PinType = MakePinType(TypeName);
		if (IsWildcardType(PinType))
		{
			AddDiagnostic(
				Report,
				EEslonCodeDiagnosticSeverity::Warning,
				FString::Printf(TEXT("Skipped member variable '%s': type '%s' is not resolved by the C++ emitter yet."), *VariableName.ToString(), *TypeName));
			return false;
		}

		const bool bAdded = FBlueprintEditorUtils::AddMemberVariable(TargetBlueprint, VariableName, PinType, DefaultValue);
		if (!bAdded)
		{
			AddDiagnostic(
				Report,
				EEslonCodeDiagnosticSeverity::Error,
				FString::Printf(TEXT("Failed to add member variable '%s'."), *VariableName.ToString()));
		}

		return bAdded;
	}

	static bool GetObjectArray(const TSharedPtr<FJsonObject>& Object, const FString& FieldName, TArray<TSharedPtr<FJsonValue>>& OutValues)
	{
		const TArray<TSharedPtr<FJsonValue>>* Values = nullptr;
		if (Object.IsValid() && Object->TryGetArrayField(FieldName, Values) && Values)
		{
			OutValues = *Values;
			return true;
		}

		return false;
	}

	static FString GetStringField(const TSharedPtr<FJsonObject>& Object, const FString& FieldName, const FString& DefaultValue = FString())
	{
		FString Value;
		return Object.IsValid() && Object->TryGetStringField(FieldName, Value) ? Value : DefaultValue;
	}

	static int32 GetIntField(const TSharedPtr<FJsonObject>& Object, const FString& FieldName, int32 DefaultValue = 0)
	{
		double Value = 0.0;
		return Object.IsValid() && Object->TryGetNumberField(FieldName, Value) ? static_cast<int32>(Value) : DefaultValue;
	}

	static bool EmitFunctionGraph(
		UBlueprint* TargetBlueprint,
		const TSharedPtr<FJsonObject>& FunctionObject,
		bool bReplaceGeneratedGraphs,
		FEslonCodeEmitReport& Report)
	{
		const FString FunctionName = GetStringField(FunctionObject, TEXT("name"));
		if (FunctionName.IsEmpty())
		{
			AddDiagnostic(Report, EEslonCodeDiagnosticSeverity::Error, TEXT("Plan contains a function without a name."));
			return false;
		}

		const FName GraphName(*FunctionName);
		TArray<UEdGraph*> ExistingGraphs;
		for (UEdGraph* Graph : TargetBlueprint->FunctionGraphs)
		{
			if (Graph && Graph->GetFName() == GraphName)
			{
				ExistingGraphs.Add(Graph);
			}
		}

		if (!ExistingGraphs.IsEmpty())
		{
			for (UEdGraph* ExistingGraph : ExistingGraphs)
			{
				if (!GraphHasGeneratedMarker(ExistingGraph))
				{
					AddDiagnostic(
						Report,
						EEslonCodeDiagnosticSeverity::Error,
						FString::Printf(TEXT("Function '%s' already exists and was not generated by EslonCode. Skipping to avoid overwriting hand-authored Blueprint logic."), *FunctionName),
						FunctionName);
					return false;
				}
			}

			if (!bReplaceGeneratedGraphs)
			{
				AddDiagnostic(
					Report,
					EEslonCodeDiagnosticSeverity::Warning,
					FString::Printf(TEXT("Function '%s' already has a generated graph. Enable replace to rebuild it."), *FunctionName),
					FunctionName);
				return true;
			}

			FBlueprintEditorUtils::RemoveGraphs(TargetBlueprint, ExistingGraphs);
			Report.UpdatedGraphs.Add(FunctionName);
		}
		else
		{
			Report.CreatedGraphs.Add(FunctionName);
		}

		UEdGraph* Graph = FBlueprintEditorUtils::CreateNewGraph(TargetBlueprint, GraphName, UEdGraph::StaticClass(), UEdGraphSchema_K2::StaticClass());
		FBlueprintEditorUtils::AddFunctionGraph<UFunction>(TargetBlueprint, Graph, true, nullptr);

		CreateCommentNode(Graph, FString::Printf(TEXT("%s\nGenerated from EslonCode. Unsupported pure nodes are emitted as comments until the K2 emitter supports them."), GeneratedMarker), -320, -160, 560, 96);

		UK2Node_FunctionEntry* EntryNode = FindFirstNode<UK2Node_FunctionEntry>(Graph);
		if (EntryNode)
		{
			EntryNode->NodePosX = 0;
			EntryNode->NodePosY = 0;
		}

		TArray<TSharedPtr<FJsonValue>> Inputs;
		GetObjectArray(FunctionObject, TEXT("inputs"), Inputs);
		for (const TSharedPtr<FJsonValue>& InputValue : Inputs)
		{
			const TSharedPtr<FJsonObject> InputObject = InputValue->AsObject();
			AddUserPinIfMissing(EntryNode, GetStringField(InputObject, TEXT("name")), GetStringField(InputObject, TEXT("type"), TEXT("wildcard")), EGPD_Output);
		}

		TArray<TSharedPtr<FJsonValue>> Outputs;
		GetObjectArray(FunctionObject, TEXT("outputs"), Outputs);

		TArray<TSharedPtr<FJsonValue>> Nodes;
		GetObjectArray(FunctionObject, TEXT("nodes"), Nodes);

		TMap<FString, UEdGraphNode*> CreatedNodes;
		TMap<FString, TSharedPtr<FJsonObject>> PlanNodeObjects;
		TArray<UK2Node_FunctionResult*> ResultNodes;
		FindNodesOfClass(Graph, ResultNodes);
		int32 ResultNodeIndex = 0;

		for (const TSharedPtr<FJsonValue>& NodeValue : Nodes)
		{
			const TSharedPtr<FJsonObject> NodeObject = NodeValue->AsObject();
			if (!NodeObject.IsValid())
			{
				continue;
			}

			const FString NodeId = GetStringField(NodeObject, TEXT("id"));
			const FString Kind = GetStringField(NodeObject, TEXT("kind"));
			const FString Label = GetStringField(NodeObject, TEXT("label"), Kind);
			const int32 X = GetIntField(NodeObject, TEXT("x"));
			const int32 Y = GetIntField(NodeObject, TEXT("y"));
			PlanNodeObjects.Add(NodeId, NodeObject);

			if (Kind == TEXT("function_entry"))
			{
				CreatedNodes.Add(NodeId, EntryNode);
			}
			else if (Kind == TEXT("function_result"))
			{
				UK2Node_FunctionResult* ResultNode = nullptr;
				if (ResultNodes.IsValidIndex(ResultNodeIndex))
				{
					ResultNode = ResultNodes[ResultNodeIndex];
					ResultNode->NodePosX = X;
					ResultNode->NodePosY = Y;
				}
				else
				{
					ResultNode = CreateK2Node<UK2Node_FunctionResult>(Graph, X, Y);
				}

				ResultNodeIndex++;
				for (const TSharedPtr<FJsonValue>& OutputValue : Outputs)
				{
					const TSharedPtr<FJsonObject> OutputObject = OutputValue->AsObject();
					AddUserPinIfMissing(ResultNode, GetStringField(OutputObject, TEXT("name")), GetStringField(OutputObject, TEXT("type"), TEXT("wildcard")), EGPD_Input);
				}
				CreatedNodes.Add(NodeId, ResultNode);
			}
			else if (Kind == TEXT("branch"))
			{
				CreatedNodes.Add(NodeId, CreateK2Node<UK2Node_IfThenElse>(Graph, X, Y));
			}
			else
			{
				const FString CommentText = FString::Printf(TEXT("%s\n%s"), *Kind, *Label);
				CreatedNodes.Add(NodeId, CreateCommentNode(Graph, CommentText, X, Y));
			}
		}

		const UEdGraphSchema_K2* Schema = Cast<UEdGraphSchema_K2>(Graph->GetSchema());
		TArray<TSharedPtr<FJsonValue>> Edges;
		GetObjectArray(FunctionObject, TEXT("edges"), Edges);
		for (const TSharedPtr<FJsonValue>& EdgeValue : Edges)
		{
			const TSharedPtr<FJsonObject> EdgeObject = EdgeValue->AsObject();
			if (!EdgeObject.IsValid())
			{
				continue;
			}

			const TSharedPtr<FJsonObject>* FromObject = nullptr;
			const TSharedPtr<FJsonObject>* ToObject = nullptr;
			if (!EdgeObject->TryGetObjectField(TEXT("from"), FromObject) || !EdgeObject->TryGetObjectField(TEXT("to"), ToObject) || !FromObject || !ToObject)
			{
				continue;
			}

			const FString FromNodeId = GetStringField(*FromObject, TEXT("node"));
			const FString FromPinName = GetStringField(*FromObject, TEXT("pin"));
			const FString ToNodeId = GetStringField(*ToObject, TEXT("node"));
			const FString ToPinName = GetStringField(*ToObject, TEXT("pin"));
			const FString EdgeKind = GetStringField(EdgeObject, TEXT("kind"));

			UEdGraphNode* FromNode = CreatedNodes.FindRef(FromNodeId);
			UEdGraphNode* ToNode = CreatedNodes.FindRef(ToNodeId);
			if (!FromNode || !ToNode)
			{
				continue;
			}

			if (EdgeKind == TEXT("data"))
			{
				const TSharedPtr<FJsonObject>* FromPlanNode = PlanNodeObjects.Find(FromNodeId);
				if (FromPlanNode && FromPlanNode->IsValid() && GetStringField(*FromPlanNode, TEXT("kind")) == TEXT("literal"))
				{
					if (UEdGraphPin* TargetPin = FindPlanPin(ToNode, ToPinName, EGPD_Input))
					{
						TargetPin->DefaultValue = LiteralToPinDefault(*FromPlanNode);
					}
				}
				continue;
			}

			if (!Schema)
			{
				continue;
			}

			UEdGraphPin* FromPin = FindPlanPin(FromNode, FromPinName, EGPD_Output);
			UEdGraphPin* ToPin = FindPlanPin(ToNode, ToPinName, EGPD_Input);
			if (FromPin && ToPin)
			{
				Schema->TryCreateConnection(FromPin, ToPin);
			}
		}

		return true;
	}
}

bool UEslonCodeEditorLibrary::EmitBlueprintPlanAsNodes(
	UBlueprint* TargetBlueprint,
	const FString& PlanJson,
	bool bReplaceGeneratedGraphs,
	bool bCompileAfterEmit,
	FEslonCodeEmitReport& Report)
{
	using namespace EslonCodeEditor;

	Report = FEslonCodeEmitReport();

	if (!TargetBlueprint)
	{
		AddDiagnostic(Report, EEslonCodeDiagnosticSeverity::Error, TEXT("No target Blueprint was provided."));
		return false;
	}

	TSharedPtr<FJsonObject> RootObject;
	const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(PlanJson);
	if (!FJsonSerializer::Deserialize(Reader, RootObject) || !RootObject.IsValid())
	{
		AddDiagnostic(Report, EEslonCodeDiagnosticSeverity::Error, TEXT("Plan JSON could not be parsed."));
		return false;
	}

	const FScopedTransaction Transaction(NSLOCTEXT("EslonCode", "EmitBlueprintPlan", "Emit EslonCode Blueprint Plan"));
	TargetBlueprint->Modify();

	TArray<TSharedPtr<FJsonValue>> Variables;
	GetObjectArray(RootObject, TEXT("variables"), Variables);
	for (const TSharedPtr<FJsonValue>& VariableValue : Variables)
	{
		const TSharedPtr<FJsonObject> VariableObject = VariableValue->AsObject();
		if (VariableObject.IsValid())
		{
			AddMemberVariable(
				TargetBlueprint,
				FName(*GetStringField(VariableObject, TEXT("name"))),
				GetStringField(VariableObject, TEXT("type"), TEXT("wildcard")),
				GetStringField(VariableObject, TEXT("default")),
				Report);
		}
	}

	bool bHadFatalError = false;
	TArray<TSharedPtr<FJsonValue>> Functions;
	GetObjectArray(RootObject, TEXT("functions"), Functions);
	for (const TSharedPtr<FJsonValue>& FunctionValue : Functions)
	{
		const TSharedPtr<FJsonObject> FunctionObject = FunctionValue->AsObject();
		if (FunctionObject.IsValid())
		{
			bHadFatalError |= !EmitFunctionGraph(TargetBlueprint, FunctionObject, bReplaceGeneratedGraphs, Report);
		}
	}

	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(TargetBlueprint);
	if (bCompileAfterEmit && !bHadFatalError)
	{
		FKismetEditorUtilities::CompileBlueprint(TargetBlueprint);
	}

	Report.bSuccess = !bHadFatalError;
	return Report.bSuccess;
}

bool UEslonCodeEditorLibrary::AddBlueprintMemberVariableFromText(
	UBlueprint* TargetBlueprint,
	FName VariableName,
	const FString& TypeName,
	const FString& DefaultValue,
	FEslonCodeEmitReport& Report)
{
	Report = FEslonCodeEmitReport();
	const bool bResult = EslonCodeEditor::AddMemberVariable(TargetBlueprint, VariableName, TypeName, DefaultValue, Report);
	Report.bSuccess = bResult;
	return bResult;
}

FString UEslonCodeEditorLibrary::GetDefaultSchemaPath()
{
	if (const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("EslonCode")))
	{
		return FPaths::Combine(Plugin->GetBaseDir(), TEXT("Schemas"), TEXT("gideon_crawler.schema.json"));
	}

	return FString();
}
