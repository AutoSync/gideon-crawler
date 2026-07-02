// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EslonCodeEditorLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslonCodeEditorLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprint(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_EslonCodeEditor(ETypeConstructPhase);
ESLONCODEEDITOR_API UEnum* Z_Construct_UEnum_EslonCodeEditor_EEslonCodeDiagnosticSeverity(ETypeConstructPhase);
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeDiagnostic(ETypeConstructPhase);
ESLONCODEEDITOR_API UClass* Z_Construct_UClass_UEslonCodeEditorLibrary(ETypeConstructPhase);
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeEmitReport(ETypeConstructPhase);
ESLONCODEEDITOR_API UClass* Z_Construct_UClass_UEslonCodeEditorLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EEslonCodeDiagnosticSeverity **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_EslonCodeEditor_EEslonCodeDiagnosticSeverity_Statics
template<> ESLONCODEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EEslonCodeDiagnosticSeverity>()
{
	return Z_Construct_UEnum_EslonCodeEditor_EEslonCodeDiagnosticSeverity(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Error.Name", "EEslonCodeDiagnosticSeverity::Error" },
		{ "Info.Name", "EEslonCodeDiagnosticSeverity::Info" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
		{ "Warning.Name", "EEslonCodeDiagnosticSeverity::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEslonCodeDiagnosticSeverity::Info", (int64)EEslonCodeDiagnosticSeverity::Info },
		{ "EEslonCodeDiagnosticSeverity::Warning", (int64)EEslonCodeDiagnosticSeverity::Warning },
		{ "EEslonCodeDiagnosticSeverity::Error", (int64)EEslonCodeDiagnosticSeverity::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EslonCodeEditor,
	nullptr,
	"EEslonCodeDiagnosticSeverity",
	"EEslonCodeDiagnosticSeverity",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EEslonCodeDiagnosticSeverity;
UEnum* Z_Construct_UEnum_EslonCodeEditor_EEslonCodeDiagnosticSeverity(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EEslonCodeDiagnosticSeverity.OuterSingleton)
		{
			ZRIE_EEslonCodeDiagnosticSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EslonCodeEditor_EEslonCodeDiagnosticSeverity, (UObject*)Z_Construct_UPackage__Script_EslonCodeEditor(ETypeConstructPhase::Outer), TEXT("EEslonCodeDiagnosticSeverity"));
		}
		return ZRIE_EEslonCodeDiagnosticSeverity.OuterSingleton;
	}
	if (!ZRIE_EEslonCodeDiagnosticSeverity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EEslonCodeDiagnosticSeverity.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EEslonCodeDiagnosticSeverity.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EEslonCodeDiagnosticSeverity ************************************************

// ********** Begin ScriptStruct FEslonCodeDiagnostic **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslonCodeDiagnostic_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslonCodeDiagnostic>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslonCodeDiagnostic); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslonCodeDiagnostic constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Line;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslonCodeDiagnostic constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslonCodeDiagnostic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslonCodeDiagnostic Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeDiagnostic, Severity), Z_Construct_UEnum_EslonCodeEditor_EEslonCodeDiagnosticSeverity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Severity_MetaData), NewProp_Severity_MetaData) }; // 5baae31455c146f4665b2a5308beaede9e5a73b9
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeDiagnostic, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeDiagnostic, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeDiagnostic, Line), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Line_MetaData), NewProp_Line_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Severity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Severity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Line,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslonCodeDiagnostic Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EslonCodeEditor,
	nullptr,
	&NewStructOps,
	"EslonCodeDiagnostic",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslonCodeDiagnostic>(),
	alignof(FEslonCodeDiagnostic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslonCodeDiagnostic;
UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeDiagnostic(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslonCodeDiagnostic.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslonCodeDiagnostic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslonCodeDiagnostic, (UObject*)Z_Construct_UPackage__Script_EslonCodeEditor(ETypeConstructPhase::Outer), TEXT("EslonCodeDiagnostic"));
		}
		return Z_Registration_Info_UScriptStruct_FEslonCodeDiagnostic.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslonCodeDiagnostic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslonCodeDiagnostic.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslonCodeDiagnostic.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslonCodeDiagnostic ************************************************

// ********** Begin ScriptStruct FEslonCodeEmitReport **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslonCodeEmitReport_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslonCodeEmitReport>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslonCodeEmitReport); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diagnostics_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedGraphs_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedGraphs_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslonCodeEmitReport constinit property declarations **************
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((FEslonCodeEmitReport*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Diagnostics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Diagnostics;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedGraphs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UpdatedGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedGraphs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslonCodeEmitReport constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslonCodeEmitReport>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslonCodeEmitReport Property Definitions *************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslonCodeEmitReport), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Diagnostics_Inner = { "Diagnostics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslonCodeDiagnostic, METADATA_PARAMS(0, nullptr) }; // fc04255b31be05a8f0fd4356e3b6eff4ee5bfbc0
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Diagnostics = { "Diagnostics", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeEmitReport, Diagnostics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diagnostics_MetaData), NewProp_Diagnostics_MetaData) }; // fc04255b31be05a8f0fd4356e3b6eff4ee5bfbc0
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CreatedGraphs_Inner = { "CreatedGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CreatedGraphs = { "CreatedGraphs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeEmitReport, CreatedGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedGraphs_MetaData), NewProp_CreatedGraphs_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_UpdatedGraphs_Inner = { "UpdatedGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_UpdatedGraphs = { "UpdatedGraphs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeEmitReport, UpdatedGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedGraphs_MetaData), NewProp_UpdatedGraphs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Diagnostics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Diagnostics,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CreatedGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CreatedGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdatedGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdatedGraphs,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslonCodeEmitReport Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EslonCodeEditor,
	nullptr,
	&NewStructOps,
	"EslonCodeEmitReport",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslonCodeEmitReport>(),
	alignof(FEslonCodeEmitReport),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslonCodeEmitReport;
UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeEmitReport(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslonCodeEmitReport.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslonCodeEmitReport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslonCodeEmitReport, (UObject*)Z_Construct_UPackage__Script_EslonCodeEditor(ETypeConstructPhase::Outer), TEXT("EslonCodeEmitReport"));
		}
		return Z_Registration_Info_UScriptStruct_FEslonCodeEmitReport.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslonCodeEmitReport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslonCodeEmitReport.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslonCodeEmitReport.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslonCodeEmitReport ************************************************

// ********** Begin Class UEslonCodeEditorLibrary Function AddBlueprintMemberVariableFromText ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslonCodeEditorLibrary_AddBlueprintMemberVariableFromText_Statics
struct UHT_STATICS
{
	struct EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms
	{
		UBlueprint* TargetBlueprint;
		FName VariableName;
		FString TypeName;
		FString DefaultValue;
		FEslonCodeEmitReport Report;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddBlueprintMemberVariableFromText constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetBlueprint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TypeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Report;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddBlueprintMemberVariableFromText constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddBlueprintMemberVariableFromText Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetBlueprint = { "TargetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms, TargetBlueprint), Z_Construct_UClass_UBlueprint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms, TypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeName_MetaData), NewProp_TypeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Report = { "Report", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms, Report), Z_Construct_UScriptStruct_FEslonCodeEmitReport, METADATA_PARAMS(0, nullptr) }; // 4145cce526f316f9a325e3b50a814dabb47c622c
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Report,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddBlueprintMemberVariableFromText Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslonCodeEditorLibrary, nullptr, "AddBlueprintMemberVariableFromText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslonCodeEditorLibrary_AddBlueprintMemberVariableFromText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslonCodeEditorLibrary::execAddBlueprintMemberVariableFromText)
{
	P_GET_OBJECT(UBlueprint,Z_Param_TargetBlueprint);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_TypeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
	P_GET_STRUCT_REF(FEslonCodeEmitReport,Z_Param_Out_Report);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEslonCodeEditorLibrary::AddBlueprintMemberVariableFromText(Z_Param_TargetBlueprint,Z_Param_VariableName,Z_Param_TypeName,Z_Param_DefaultValue,Z_Param_Out_Report);
	P_NATIVE_END;
}
// ********** End Class UEslonCodeEditorLibrary Function AddBlueprintMemberVariableFromText ********

// ********** Begin Class UEslonCodeEditorLibrary Function EmitBlueprintPlanAsNodes ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslonCodeEditorLibrary_EmitBlueprintPlanAsNodes_Statics
struct UHT_STATICS
{
	struct EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms
	{
		UBlueprint* TargetBlueprint;
		FString PlanJson;
		bool bReplaceGeneratedGraphs;
		bool bCompileAfterEmit;
		FEslonCodeEmitReport Report;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EmitBlueprintPlanAsNodes constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetBlueprint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlanJson;
	static void NewProp_bReplaceGeneratedGraphs_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms*)Obj)->bReplaceGeneratedGraphs = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceGeneratedGraphs;
	static void NewProp_bCompileAfterEmit_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms*)Obj)->bCompileAfterEmit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileAfterEmit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Report;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EmitBlueprintPlanAsNodes constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EmitBlueprintPlanAsNodes Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetBlueprint = { "TargetBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms, TargetBlueprint), Z_Construct_UClass_UBlueprint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PlanJson = { "PlanJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms, PlanJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanJson_MetaData), NewProp_PlanJson_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReplaceGeneratedGraphs = { "bReplaceGeneratedGraphs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms), &UHT_STATICS::NewProp_bReplaceGeneratedGraphs_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCompileAfterEmit = { "bCompileAfterEmit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms), &UHT_STATICS::NewProp_bCompileAfterEmit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Report = { "Report", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms, Report), Z_Construct_UScriptStruct_FEslonCodeEmitReport, METADATA_PARAMS(0, nullptr) }; // 4145cce526f316f9a325e3b50a814dabb47c622c
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlanJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReplaceGeneratedGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCompileAfterEmit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Report,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EmitBlueprintPlanAsNodes Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslonCodeEditorLibrary, nullptr, "EmitBlueprintPlanAsNodes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslonCodeEditorLibrary_EmitBlueprintPlanAsNodes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslonCodeEditorLibrary::execEmitBlueprintPlanAsNodes)
{
	P_GET_OBJECT(UBlueprint,Z_Param_TargetBlueprint);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlanJson);
	P_GET_UBOOL(Z_Param_bReplaceGeneratedGraphs);
	P_GET_UBOOL(Z_Param_bCompileAfterEmit);
	P_GET_STRUCT_REF(FEslonCodeEmitReport,Z_Param_Out_Report);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEslonCodeEditorLibrary::EmitBlueprintPlanAsNodes(Z_Param_TargetBlueprint,Z_Param_PlanJson,Z_Param_bReplaceGeneratedGraphs,Z_Param_bCompileAfterEmit,Z_Param_Out_Report);
	P_NATIVE_END;
}
// ********** End Class UEslonCodeEditorLibrary Function EmitBlueprintPlanAsNodes ******************

// ********** Begin Class UEslonCodeEditorLibrary Function GetDefaultSchemaPath ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslonCodeEditorLibrary_GetDefaultSchemaPath_Statics
struct UHT_STATICS
{
	struct EslonCodeEditorLibrary_eventGetDefaultSchemaPath_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDefaultSchemaPath constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDefaultSchemaPath constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDefaultSchemaPath Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventGetDefaultSchemaPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDefaultSchemaPath Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslonCodeEditorLibrary, nullptr, "GetDefaultSchemaPath", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EslonCodeEditorLibrary_eventGetDefaultSchemaPath_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EslonCodeEditorLibrary_eventGetDefaultSchemaPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslonCodeEditorLibrary_GetDefaultSchemaPath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslonCodeEditorLibrary::execGetDefaultSchemaPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEslonCodeEditorLibrary::GetDefaultSchemaPath();
	P_NATIVE_END;
}
// ********** End Class UEslonCodeEditorLibrary Function GetDefaultSchemaPath **********************

// ********** Begin Class UEslonCodeEditorLibrary **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEslonCodeEditorLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "EslonCodeEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEslonCodeEditorLibrary constinit property declarations ******************
// ********** End Class UEslonCodeEditorLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddBlueprintMemberVariableFromText"), .Pointer = &UEslonCodeEditorLibrary::execAddBlueprintMemberVariableFromText },
		{ .NameUTF8 = UTF8TEXT("EmitBlueprintPlanAsNodes"), .Pointer = &UEslonCodeEditorLibrary::execEmitBlueprintPlanAsNodes },
		{ .NameUTF8 = UTF8TEXT("GetDefaultSchemaPath"), .Pointer = &UEslonCodeEditorLibrary::execGetDefaultSchemaPath },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_AddBlueprintMemberVariableFromText, "AddBlueprintMemberVariableFromText" }, // df8647eba8f33bb27c2056c0b571728717996de5
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_EmitBlueprintPlanAsNodes, "EmitBlueprintPlanAsNodes" }, // 1fe735bf1efc195ccf01a25a080906f2e6d16cf3
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_GetDefaultSchemaPath, "GetDefaultSchemaPath" }, // 7d5a1d2a357541806b9c622e9ebda71b411e3022
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEslonCodeEditorLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EslonCodeEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEslonCodeEditorLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UEslonCodeEditorLibrary_StaticRegisterNativesUEslonCodeEditorLibrary()
{
	UClass* Class = UEslonCodeEditorLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEslonCodeEditorLibrary;
UClass* Z_Construct_UClass_UEslonCodeEditorLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEslonCodeEditorLibrary;
		if (!Z_Registration_Info_UClass_UEslonCodeEditorLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("EslonCodeEditorLibrary"),
				Z_Registration_Info_UClass_UEslonCodeEditorLibrary.InnerSingleton,
				UEslonCodeEditorLibrary_StaticRegisterNativesUEslonCodeEditorLibrary,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UEslonCodeEditorLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEslonCodeEditorLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEslonCodeEditorLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEslonCodeEditorLibrary.OuterSingleton;
}
#undef UHT_STATICS
UEslonCodeEditorLibrary::UEslonCodeEditorLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEslonCodeEditorLibrary);
UEslonCodeEditorLibrary::~UEslonCodeEditorLibrary() {}
// ********** End Class UEslonCodeEditorLibrary ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h__Script_EslonCodeEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_EslonCodeEditor_EEslonCodeDiagnosticSeverity, TEXT("EEslonCodeDiagnosticSeverity"), &ZRIE_EEslonCodeDiagnosticSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1537925908U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FEslonCodeDiagnostic, Z_Construct_UScriptStruct_FEslonCodeDiagnostic_Statics::NewStructOps, TEXT("EslonCodeDiagnostic"),&Z_Registration_Info_UScriptStruct_FEslonCodeDiagnostic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslonCodeDiagnostic), 4228130139U) },
		{ Z_Construct_UScriptStruct_FEslonCodeEmitReport, Z_Construct_UScriptStruct_FEslonCodeEmitReport_Statics::NewStructOps, TEXT("EslonCodeEmitReport"),&Z_Registration_Info_UScriptStruct_FEslonCodeEmitReport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslonCodeEmitReport), 1095093477U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEslonCodeEditorLibrary, TEXT("UEslonCodeEditorLibrary"), &Z_Registration_Info_UClass_UEslonCodeEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEslonCodeEditorLibrary), 2797714862U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h__Script_EslonCodeEditor_1e2c6cbda5a0f33896a886630f3aef186dadd4b4{
	TEXT("/Script/EslonCodeEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
