#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EslonCodeEditorLibrary.generated.h"

class UBlueprint;

UENUM(BlueprintType)
enum class EEslonCodeDiagnosticSeverity : uint8
{
	Info,
	Warning,
	Error
};

USTRUCT(BlueprintType)
struct FEslonCodeDiagnostic
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	EEslonCodeDiagnosticSeverity Severity = EEslonCodeDiagnosticSeverity::Info;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	FString Message;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	FString FunctionName;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	int32 Line = 0;
};

USTRUCT(BlueprintType)
struct FEslonCodeEmitReport
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	bool bSuccess = false;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	TArray<FEslonCodeDiagnostic> Diagnostics;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	TArray<FString> CreatedGraphs;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	TArray<FString> UpdatedGraphs;
};

UCLASS()
class ESLONCODEEDITOR_API UEslonCodeEditorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "EslonCode", meta = (DevelopmentOnly))
	static bool EmitBlueprintPlanAsNodes(
		UBlueprint* TargetBlueprint,
		const FString& PlanJson,
		bool bReplaceGeneratedGraphs,
		bool bCompileAfterEmit,
		FEslonCodeEmitReport& Report);

	UFUNCTION(BlueprintCallable, Category = "EslonCode", meta = (DevelopmentOnly))
	static bool AddBlueprintMemberVariableFromText(
		UBlueprint* TargetBlueprint,
		FName VariableName,
		const FString& TypeName,
		const FString& DefaultValue,
		FEslonCodeEmitReport& Report);

	UFUNCTION(BlueprintPure, Category = "EslonCode", meta = (DevelopmentOnly))
	static FString GetDefaultSchemaPath();
};
