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

UENUM(BlueprintType)
enum class EEslonCodeGeneratedAssetKind : uint8
{
	Blueprint,
	Enum,
	Struct,
	DataAsset
};

USTRUCT(BlueprintType)
struct FEslonCodeGeneratedAssetRecord
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	EEslonCodeGeneratedAssetKind Kind = EEslonCodeGeneratedAssetKind::Blueprint;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	FString SourceSymbol;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	FString AssetPath;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	FString ParentClassPath;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	TArray<FString> GeneratedGraphs;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	TArray<FString> GeneratedMemberVariables;
};

USTRUCT(BlueprintType)
struct FEslonCodeWorkspaceManifest
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	FString SourcePath;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	FString SchemaPath;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	FString SourceHash;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	TArray<FEslonCodeGeneratedAssetRecord> Assets;
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

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	TArray<FString> DeletedGraphs;

	UPROPERTY(BlueprintReadOnly, Category = "EslonCode")
	TArray<FString> DeletedMemberVariables;
};

UCLASS()
class ESLONCODEEDITOR_API UEslonCodeEditorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "EslonCode", meta = (DevelopmentOnly))
	static FString GetWorkspaceManifestPath(const FString& SourcePath);

	UFUNCTION(BlueprintCallable, Category = "EslonCode", meta = (DevelopmentOnly))
	static bool LoadWorkspaceManifestFromSourcePath(const FString& SourcePath, FEslonCodeWorkspaceManifest& OutManifest);

	UFUNCTION(BlueprintCallable, Category = "EslonCode", meta = (DevelopmentOnly))
	static bool SaveWorkspaceManifestToSourcePath(const FString& SourcePath, const FEslonCodeWorkspaceManifest& Manifest);

	UFUNCTION(BlueprintCallable, Category = "EslonCode", meta = (DevelopmentOnly))
	static bool CompileSourceFileToPlanJson(
		const FString& SourcePath,
		const FString& SchemaPath,
		FString& OutPlanJson,
		FEslonCodeEmitReport& Report);

	UFUNCTION(BlueprintCallable, Category = "EslonCode", meta = (DevelopmentOnly))
	static bool SyncBlueprintFromSourceFile(
		const FString& SourcePath,
		const FString& SchemaPath,
		const FString& BlueprintAssetPath,
		const FString& ParentClassPath,
		bool bCreateBlueprintIfMissing,
		bool bReplaceGeneratedGraphs,
		bool bDeleteMissingGeneratedContent,
		bool bCompileAfterEmit,
		bool bSaveAfterEmit,
		FEslonCodeWorkspaceManifest& OutManifest,
		FEslonCodeEmitReport& Report);

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
