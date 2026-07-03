// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EslonCodeEditorLibrary.h"

#ifdef ESLONCODEEDITOR_EslonCodeEditorLibrary_generated_h
#error "EslonCodeEditorLibrary.generated.h already included, missing '#pragma once' in EslonCodeEditorLibrary.h"
#endif
#define ESLONCODEEDITOR_EslonCodeEditorLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
struct FEslonCodeEmitReport;
struct FEslonCodeWorkspaceManifest;

// ********** Begin ScriptStruct FEslonCodeDiagnostic **********************************************
struct Z_Construct_UScriptStruct_FEslonCodeDiagnostic_Statics;
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeDiagnostic(ETypeConstructPhase);

#define FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEslonCodeDiagnostic_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FEslonCodeDiagnostic(ETypeConstructPhase::Inner); }


struct FEslonCodeDiagnostic;
// ********** End ScriptStruct FEslonCodeDiagnostic ************************************************

// ********** Begin ScriptStruct FEslonCodeGeneratedAssetRecord ************************************
struct Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord_Statics;
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord(ETypeConstructPhase);

#define FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord(ETypeConstructPhase::Inner); }


struct FEslonCodeGeneratedAssetRecord;
// ********** End ScriptStruct FEslonCodeGeneratedAssetRecord **************************************

// ********** Begin ScriptStruct FEslonCodeWorkspaceManifest ***************************************
struct Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest_Statics;
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest(ETypeConstructPhase);

#define FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest(ETypeConstructPhase::Inner); }


struct FEslonCodeWorkspaceManifest;
// ********** End ScriptStruct FEslonCodeWorkspaceManifest *****************************************

// ********** Begin ScriptStruct FEslonCodeEmitReport **********************************************
struct Z_Construct_UScriptStruct_FEslonCodeEmitReport_Statics;
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeEmitReport(ETypeConstructPhase);

#define FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEslonCodeEmitReport_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FEslonCodeEmitReport(ETypeConstructPhase::Inner); }


struct FEslonCodeEmitReport;
// ********** End ScriptStruct FEslonCodeEmitReport ************************************************

// ********** Begin Class UEslonCodeEditorLibrary **************************************************
#define FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDefaultSchemaPath); \
	DECLARE_FUNCTION(execAddBlueprintMemberVariableFromText); \
	DECLARE_FUNCTION(execEmitBlueprintPlanAsNodes); \
	DECLARE_FUNCTION(execSyncBlueprintFromSourceFile); \
	DECLARE_FUNCTION(execCompileSourceFileToPlanJson); \
	DECLARE_FUNCTION(execSaveWorkspaceManifestToSourcePath); \
	DECLARE_FUNCTION(execLoadWorkspaceManifestFromSourcePath); \
	DECLARE_FUNCTION(execGetWorkspaceManifestPath);


struct Z_Construct_UClass_UEslonCodeEditorLibrary_Statics;
ESLONCODEEDITOR_API UClass* Z_Construct_UClass_UEslonCodeEditorLibrary(ETypeConstructPhase);

#define FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_113_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UEslonCodeEditorLibrary_Statics; \
	friend ESLONCODEEDITOR_API UClass* ::Z_Construct_UClass_UEslonCodeEditorLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UEslonCodeEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EslonCodeEditor"), Z_Construct_UClass_UEslonCodeEditorLibrary) \
	DECLARE_SERIALIZER(UEslonCodeEditorLibrary)


#define FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEslonCodeEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEslonCodeEditorLibrary(UEslonCodeEditorLibrary&&) = delete; \
	UEslonCodeEditorLibrary(const UEslonCodeEditorLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEslonCodeEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEslonCodeEditorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEslonCodeEditorLibrary) \
	NO_API virtual ~UEslonCodeEditorLibrary();


#define FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_110_PROLOG
#define FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_113_INCLASS_NO_PURE_DECLS \
	FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEslonCodeEditorLibrary;

// ********** End Class UEslonCodeEditorLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h

// ********** Begin Enum EEslonCodeDiagnosticSeverity **********************************************
#define FOREACH_ENUM_EESLONCODEDIAGNOSTICSEVERITY(op) \
	op(EEslonCodeDiagnosticSeverity::Info) \
	op(EEslonCodeDiagnosticSeverity::Warning) \
	op(EEslonCodeDiagnosticSeverity::Error) 

enum class EEslonCodeDiagnosticSeverity : uint8;
template<> struct TIsUEnumClass<EEslonCodeDiagnosticSeverity> { enum { Value = true }; };
template<> UE_NODEBUG ESLONCODEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EEslonCodeDiagnosticSeverity>();
// ********** End Enum EEslonCodeDiagnosticSeverity ************************************************

// ********** Begin Enum EEslonCodeGeneratedAssetKind **********************************************
#define FOREACH_ENUM_EESLONCODEGENERATEDASSETKIND(op) \
	op(EEslonCodeGeneratedAssetKind::Blueprint) \
	op(EEslonCodeGeneratedAssetKind::Enum) \
	op(EEslonCodeGeneratedAssetKind::Struct) \
	op(EEslonCodeGeneratedAssetKind::DataAsset) 

enum class EEslonCodeGeneratedAssetKind : uint8;
template<> struct TIsUEnumClass<EEslonCodeGeneratedAssetKind> { enum { Value = true }; };
template<> UE_NODEBUG ESLONCODEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EEslonCodeGeneratedAssetKind>();
// ********** End Enum EEslonCodeGeneratedAssetKind ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
