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
ESLONCODEEDITOR_API UEnum* Z_Construct_UEnum_EslonCodeEditor_EEslonCodeGeneratedAssetKind(ETypeConstructPhase);
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeDiagnostic(ETypeConstructPhase);
ESLONCODEEDITOR_API UClass* Z_Construct_UClass_UEslonCodeEditorLibrary(ETypeConstructPhase);
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeEmitReport(ETypeConstructPhase);
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord(ETypeConstructPhase);
ESLONCODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest(ETypeConstructPhase);
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

// ********** Begin Enum EEslonCodeGeneratedAssetKind **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_EslonCodeEditor_EEslonCodeGeneratedAssetKind_Statics
template<> ESLONCODEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EEslonCodeGeneratedAssetKind>()
{
	return Z_Construct_UEnum_EslonCodeEditor_EEslonCodeGeneratedAssetKind(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Blueprint.Name", "EEslonCodeGeneratedAssetKind::Blueprint" },
		{ "BlueprintType", "true" },
		{ "DataAsset.Name", "EEslonCodeGeneratedAssetKind::DataAsset" },
		{ "Enum.Name", "EEslonCodeGeneratedAssetKind::Enum" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
		{ "Struct.Name", "EEslonCodeGeneratedAssetKind::Struct" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEslonCodeGeneratedAssetKind::Blueprint", (int64)EEslonCodeGeneratedAssetKind::Blueprint },
		{ "EEslonCodeGeneratedAssetKind::Enum", (int64)EEslonCodeGeneratedAssetKind::Enum },
		{ "EEslonCodeGeneratedAssetKind::Struct", (int64)EEslonCodeGeneratedAssetKind::Struct },
		{ "EEslonCodeGeneratedAssetKind::DataAsset", (int64)EEslonCodeGeneratedAssetKind::DataAsset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EslonCodeEditor,
	nullptr,
	"EEslonCodeGeneratedAssetKind",
	"EEslonCodeGeneratedAssetKind",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EEslonCodeGeneratedAssetKind;
UEnum* Z_Construct_UEnum_EslonCodeEditor_EEslonCodeGeneratedAssetKind(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EEslonCodeGeneratedAssetKind.OuterSingleton)
		{
			ZRIE_EEslonCodeGeneratedAssetKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EslonCodeEditor_EEslonCodeGeneratedAssetKind, (UObject*)Z_Construct_UPackage__Script_EslonCodeEditor(ETypeConstructPhase::Outer), TEXT("EEslonCodeGeneratedAssetKind"));
		}
		return ZRIE_EEslonCodeGeneratedAssetKind.OuterSingleton;
	}
	if (!ZRIE_EEslonCodeGeneratedAssetKind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EEslonCodeGeneratedAssetKind.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EEslonCodeGeneratedAssetKind.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EEslonCodeGeneratedAssetKind ************************************************

// ********** Begin ScriptStruct FEslonCodeGeneratedAssetRecord ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslonCodeGeneratedAssetRecord>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslonCodeGeneratedAssetRecord); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSymbol_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClassPath_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedGraphs_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedMemberVariables_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslonCodeGeneratedAssetRecord constinit property declarations ****
	static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceSymbol;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentClassPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedGraphs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedMemberVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedMemberVariables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslonCodeGeneratedAssetRecord constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslonCodeGeneratedAssetRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslonCodeGeneratedAssetRecord Property Definitions ***************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeGeneratedAssetRecord, Kind), Z_Construct_UEnum_EslonCodeEditor_EEslonCodeGeneratedAssetKind, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kind_MetaData), NewProp_Kind_MetaData) }; // 669bb8599132090a7a6a3de1ec228cf7ae3e022d
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceSymbol = { "SourceSymbol", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeGeneratedAssetRecord, SourceSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSymbol_MetaData), NewProp_SourceSymbol_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeGeneratedAssetRecord, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ParentClassPath = { "ParentClassPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeGeneratedAssetRecord, ParentClassPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClassPath_MetaData), NewProp_ParentClassPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GeneratedGraphs_Inner = { "GeneratedGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GeneratedGraphs = { "GeneratedGraphs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeGeneratedAssetRecord, GeneratedGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedGraphs_MetaData), NewProp_GeneratedGraphs_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GeneratedMemberVariables_Inner = { "GeneratedMemberVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GeneratedMemberVariables = { "GeneratedMemberVariables", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeGeneratedAssetRecord, GeneratedMemberVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedMemberVariables_MetaData), NewProp_GeneratedMemberVariables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Kind_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Kind,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceSymbol,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentClassPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedMemberVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedMemberVariables,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslonCodeGeneratedAssetRecord Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EslonCodeEditor,
	nullptr,
	&NewStructOps,
	"EslonCodeGeneratedAssetRecord",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslonCodeGeneratedAssetRecord>(),
	alignof(FEslonCodeGeneratedAssetRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslonCodeGeneratedAssetRecord;
UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslonCodeGeneratedAssetRecord.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslonCodeGeneratedAssetRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord, (UObject*)Z_Construct_UPackage__Script_EslonCodeEditor(ETypeConstructPhase::Outer), TEXT("EslonCodeGeneratedAssetRecord"));
		}
		return Z_Registration_Info_UScriptStruct_FEslonCodeGeneratedAssetRecord.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslonCodeGeneratedAssetRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslonCodeGeneratedAssetRecord.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslonCodeGeneratedAssetRecord.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslonCodeGeneratedAssetRecord **************************************

// ********** Begin ScriptStruct FEslonCodeWorkspaceManifest ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslonCodeWorkspaceManifest>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslonCodeWorkspaceManifest); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SchemaPath_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceHash_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslonCodeWorkspaceManifest constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SchemaPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceHash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslonCodeWorkspaceManifest constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslonCodeWorkspaceManifest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslonCodeWorkspaceManifest Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeWorkspaceManifest, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SchemaPath = { "SchemaPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeWorkspaceManifest, SchemaPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SchemaPath_MetaData), NewProp_SchemaPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceHash = { "SourceHash", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeWorkspaceManifest, SourceHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceHash_MetaData), NewProp_SourceHash_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord, METADATA_PARAMS(0, nullptr) }; // 2d459e17ccbc6f715fff07003ab1f21e739d7d96
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeWorkspaceManifest, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Assets_MetaData), NewProp_Assets_MetaData) }; // 2d459e17ccbc6f715fff07003ab1f21e739d7d96
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SchemaPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Assets,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslonCodeWorkspaceManifest Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_EslonCodeEditor,
	nullptr,
	&NewStructOps,
	"EslonCodeWorkspaceManifest",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslonCodeWorkspaceManifest>(),
	alignof(FEslonCodeWorkspaceManifest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslonCodeWorkspaceManifest;
UScriptStruct* Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslonCodeWorkspaceManifest.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslonCodeWorkspaceManifest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest, (UObject*)Z_Construct_UPackage__Script_EslonCodeEditor(ETypeConstructPhase::Outer), TEXT("EslonCodeWorkspaceManifest"));
		}
		return Z_Registration_Info_UScriptStruct_FEslonCodeWorkspaceManifest.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslonCodeWorkspaceManifest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslonCodeWorkspaceManifest.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslonCodeWorkspaceManifest.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslonCodeWorkspaceManifest *****************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeletedGraphs_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeletedMemberVariables_MetaData[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeletedGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeletedGraphs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeletedMemberVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeletedMemberVariables;
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
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DeletedGraphs_Inner = { "DeletedGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_DeletedGraphs = { "DeletedGraphs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeEmitReport, DeletedGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeletedGraphs_MetaData), NewProp_DeletedGraphs_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DeletedMemberVariables_Inner = { "DeletedMemberVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_DeletedMemberVariables = { "DeletedMemberVariables", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslonCodeEmitReport, DeletedMemberVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeletedMemberVariables_MetaData), NewProp_DeletedMemberVariables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Diagnostics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Diagnostics,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CreatedGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CreatedGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdatedGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdatedGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeletedGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeletedGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeletedMemberVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeletedMemberVariables,
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Report = { "Report", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventAddBlueprintMemberVariableFromText_Parms, Report), Z_Construct_UScriptStruct_FEslonCodeEmitReport, METADATA_PARAMS(0, nullptr) }; // cdc2a1e71298bf79c800897035e2bc5d78cdf051
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

// ********** Begin Class UEslonCodeEditorLibrary Function CompileSourceFileToPlanJson *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslonCodeEditorLibrary_CompileSourceFileToPlanJson_Statics
struct UHT_STATICS
{
	struct EslonCodeEditorLibrary_eventCompileSourceFileToPlanJson_Parms
	{
		FString SourcePath;
		FString SchemaPath;
		FString OutPlanJson;
		FEslonCodeEmitReport Report;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SchemaPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CompileSourceFileToPlanJson constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SchemaPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPlanJson;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Report;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventCompileSourceFileToPlanJson_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CompileSourceFileToPlanJson constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CompileSourceFileToPlanJson Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventCompileSourceFileToPlanJson_Parms, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SchemaPath = { "SchemaPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventCompileSourceFileToPlanJson_Parms, SchemaPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SchemaPath_MetaData), NewProp_SchemaPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutPlanJson = { "OutPlanJson", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventCompileSourceFileToPlanJson_Parms, OutPlanJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Report = { "Report", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventCompileSourceFileToPlanJson_Parms, Report), Z_Construct_UScriptStruct_FEslonCodeEmitReport, METADATA_PARAMS(0, nullptr) }; // cdc2a1e71298bf79c800897035e2bc5d78cdf051
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventCompileSourceFileToPlanJson_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SchemaPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPlanJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Report,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CompileSourceFileToPlanJson Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslonCodeEditorLibrary, nullptr, "CompileSourceFileToPlanJson", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EslonCodeEditorLibrary_eventCompileSourceFileToPlanJson_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EslonCodeEditorLibrary_eventCompileSourceFileToPlanJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslonCodeEditorLibrary_CompileSourceFileToPlanJson(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslonCodeEditorLibrary::execCompileSourceFileToPlanJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourcePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_SchemaPath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPlanJson);
	P_GET_STRUCT_REF(FEslonCodeEmitReport,Z_Param_Out_Report);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEslonCodeEditorLibrary::CompileSourceFileToPlanJson(Z_Param_SourcePath,Z_Param_SchemaPath,Z_Param_Out_OutPlanJson,Z_Param_Out_Report);
	P_NATIVE_END;
}
// ********** End Class UEslonCodeEditorLibrary Function CompileSourceFileToPlanJson ***************

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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Report = { "Report", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventEmitBlueprintPlanAsNodes_Parms, Report), Z_Construct_UScriptStruct_FEslonCodeEmitReport, METADATA_PARAMS(0, nullptr) }; // cdc2a1e71298bf79c800897035e2bc5d78cdf051
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

// ********** Begin Class UEslonCodeEditorLibrary Function GetWorkspaceManifestPath ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslonCodeEditorLibrary_GetWorkspaceManifestPath_Statics
struct UHT_STATICS
{
	struct EslonCodeEditorLibrary_eventGetWorkspaceManifestPath_Parms
	{
		FString SourcePath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWorkspaceManifestPath constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWorkspaceManifestPath constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWorkspaceManifestPath Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventGetWorkspaceManifestPath_Parms, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventGetWorkspaceManifestPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWorkspaceManifestPath Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslonCodeEditorLibrary, nullptr, "GetWorkspaceManifestPath", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EslonCodeEditorLibrary_eventGetWorkspaceManifestPath_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EslonCodeEditorLibrary_eventGetWorkspaceManifestPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslonCodeEditorLibrary_GetWorkspaceManifestPath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslonCodeEditorLibrary::execGetWorkspaceManifestPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourcePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEslonCodeEditorLibrary::GetWorkspaceManifestPath(Z_Param_SourcePath);
	P_NATIVE_END;
}
// ********** End Class UEslonCodeEditorLibrary Function GetWorkspaceManifestPath ******************

// ********** Begin Class UEslonCodeEditorLibrary Function LoadWorkspaceManifestFromSourcePath *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslonCodeEditorLibrary_LoadWorkspaceManifestFromSourcePath_Statics
struct UHT_STATICS
{
	struct EslonCodeEditorLibrary_eventLoadWorkspaceManifestFromSourcePath_Parms
	{
		FString SourcePath;
		FEslonCodeWorkspaceManifest OutManifest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadWorkspaceManifestFromSourcePath constinit property declarations ***
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutManifest;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventLoadWorkspaceManifestFromSourcePath_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadWorkspaceManifestFromSourcePath constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadWorkspaceManifestFromSourcePath Property Definitions **************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventLoadWorkspaceManifestFromSourcePath_Parms, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutManifest = { "OutManifest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventLoadWorkspaceManifestFromSourcePath_Parms, OutManifest), Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest, METADATA_PARAMS(0, nullptr) }; // 746efe210142922ac5d22d3c379be0d21ab2740c
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventLoadWorkspaceManifestFromSourcePath_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutManifest,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadWorkspaceManifestFromSourcePath Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslonCodeEditorLibrary, nullptr, "LoadWorkspaceManifestFromSourcePath", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EslonCodeEditorLibrary_eventLoadWorkspaceManifestFromSourcePath_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EslonCodeEditorLibrary_eventLoadWorkspaceManifestFromSourcePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslonCodeEditorLibrary_LoadWorkspaceManifestFromSourcePath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslonCodeEditorLibrary::execLoadWorkspaceManifestFromSourcePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourcePath);
	P_GET_STRUCT_REF(FEslonCodeWorkspaceManifest,Z_Param_Out_OutManifest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEslonCodeEditorLibrary::LoadWorkspaceManifestFromSourcePath(Z_Param_SourcePath,Z_Param_Out_OutManifest);
	P_NATIVE_END;
}
// ********** End Class UEslonCodeEditorLibrary Function LoadWorkspaceManifestFromSourcePath *******

// ********** Begin Class UEslonCodeEditorLibrary Function SaveWorkspaceManifestToSourcePath *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslonCodeEditorLibrary_SaveWorkspaceManifestToSourcePath_Statics
struct UHT_STATICS
{
	struct EslonCodeEditorLibrary_eventSaveWorkspaceManifestToSourcePath_Parms
	{
		FString SourcePath;
		FEslonCodeWorkspaceManifest Manifest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manifest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveWorkspaceManifestToSourcePath constinit property declarations *****
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Manifest;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventSaveWorkspaceManifestToSourcePath_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveWorkspaceManifestToSourcePath constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveWorkspaceManifestToSourcePath Property Definitions ****************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventSaveWorkspaceManifestToSourcePath_Parms, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Manifest = { "Manifest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventSaveWorkspaceManifestToSourcePath_Parms, Manifest), Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manifest_MetaData), NewProp_Manifest_MetaData) }; // 746efe210142922ac5d22d3c379be0d21ab2740c
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventSaveWorkspaceManifestToSourcePath_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Manifest,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SaveWorkspaceManifestToSourcePath Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslonCodeEditorLibrary, nullptr, "SaveWorkspaceManifestToSourcePath", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EslonCodeEditorLibrary_eventSaveWorkspaceManifestToSourcePath_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EslonCodeEditorLibrary_eventSaveWorkspaceManifestToSourcePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslonCodeEditorLibrary_SaveWorkspaceManifestToSourcePath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslonCodeEditorLibrary::execSaveWorkspaceManifestToSourcePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourcePath);
	P_GET_STRUCT_REF(FEslonCodeWorkspaceManifest,Z_Param_Out_Manifest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEslonCodeEditorLibrary::SaveWorkspaceManifestToSourcePath(Z_Param_SourcePath,Z_Param_Out_Manifest);
	P_NATIVE_END;
}
// ********** End Class UEslonCodeEditorLibrary Function SaveWorkspaceManifestToSourcePath *********

// ********** Begin Class UEslonCodeEditorLibrary Function SyncBlueprintFromSourceFile *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslonCodeEditorLibrary_SyncBlueprintFromSourceFile_Statics
struct UHT_STATICS
{
	struct EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms
	{
		FString SourcePath;
		FString SchemaPath;
		FString BlueprintAssetPath;
		FString ParentClassPath;
		bool bCreateBlueprintIfMissing;
		bool bReplaceGeneratedGraphs;
		bool bDeleteMissingGeneratedContent;
		bool bCompileAfterEmit;
		bool bSaveAfterEmit;
		FEslonCodeWorkspaceManifest OutManifest;
		FEslonCodeEmitReport Report;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EslonCode" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EslonCodeEditorLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SchemaPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClassPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SyncBlueprintFromSourceFile constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SchemaPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintAssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentClassPath;
	static void NewProp_bCreateBlueprintIfMissing_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms*)Obj)->bCreateBlueprintIfMissing = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateBlueprintIfMissing;
	static void NewProp_bReplaceGeneratedGraphs_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms*)Obj)->bReplaceGeneratedGraphs = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceGeneratedGraphs;
	static void NewProp_bDeleteMissingGeneratedContent_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms*)Obj)->bDeleteMissingGeneratedContent = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteMissingGeneratedContent;
	static void NewProp_bCompileAfterEmit_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms*)Obj)->bCompileAfterEmit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileAfterEmit;
	static void NewProp_bSaveAfterEmit_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms*)Obj)->bSaveAfterEmit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveAfterEmit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutManifest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Report;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SyncBlueprintFromSourceFile constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SyncBlueprintFromSourceFile Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SchemaPath = { "SchemaPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms, SchemaPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SchemaPath_MetaData), NewProp_SchemaPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintAssetPath = { "BlueprintAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms, BlueprintAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintAssetPath_MetaData), NewProp_BlueprintAssetPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ParentClassPath = { "ParentClassPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms, ParentClassPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClassPath_MetaData), NewProp_ParentClassPath_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateBlueprintIfMissing = { "bCreateBlueprintIfMissing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms), &UHT_STATICS::NewProp_bCreateBlueprintIfMissing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReplaceGeneratedGraphs = { "bReplaceGeneratedGraphs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms), &UHT_STATICS::NewProp_bReplaceGeneratedGraphs_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDeleteMissingGeneratedContent = { "bDeleteMissingGeneratedContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms), &UHT_STATICS::NewProp_bDeleteMissingGeneratedContent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCompileAfterEmit = { "bCompileAfterEmit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms), &UHT_STATICS::NewProp_bCompileAfterEmit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSaveAfterEmit = { "bSaveAfterEmit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms), &UHT_STATICS::NewProp_bSaveAfterEmit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutManifest = { "OutManifest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms, OutManifest), Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest, METADATA_PARAMS(0, nullptr) }; // 746efe210142922ac5d22d3c379be0d21ab2740c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Report = { "Report", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms, Report), Z_Construct_UScriptStruct_FEslonCodeEmitReport, METADATA_PARAMS(0, nullptr) }; // cdc2a1e71298bf79c800897035e2bc5d78cdf051
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SchemaPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentClassPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateBlueprintIfMissing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReplaceGeneratedGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDeleteMissingGeneratedContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCompileAfterEmit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSaveAfterEmit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutManifest,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Report,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SyncBlueprintFromSourceFile Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslonCodeEditorLibrary, nullptr, "SyncBlueprintFromSourceFile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EslonCodeEditorLibrary_eventSyncBlueprintFromSourceFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslonCodeEditorLibrary_SyncBlueprintFromSourceFile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslonCodeEditorLibrary::execSyncBlueprintFromSourceFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourcePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_SchemaPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintAssetPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParentClassPath);
	P_GET_UBOOL(Z_Param_bCreateBlueprintIfMissing);
	P_GET_UBOOL(Z_Param_bReplaceGeneratedGraphs);
	P_GET_UBOOL(Z_Param_bDeleteMissingGeneratedContent);
	P_GET_UBOOL(Z_Param_bCompileAfterEmit);
	P_GET_UBOOL(Z_Param_bSaveAfterEmit);
	P_GET_STRUCT_REF(FEslonCodeWorkspaceManifest,Z_Param_Out_OutManifest);
	P_GET_STRUCT_REF(FEslonCodeEmitReport,Z_Param_Out_Report);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEslonCodeEditorLibrary::SyncBlueprintFromSourceFile(Z_Param_SourcePath,Z_Param_SchemaPath,Z_Param_BlueprintAssetPath,Z_Param_ParentClassPath,Z_Param_bCreateBlueprintIfMissing,Z_Param_bReplaceGeneratedGraphs,Z_Param_bDeleteMissingGeneratedContent,Z_Param_bCompileAfterEmit,Z_Param_bSaveAfterEmit,Z_Param_Out_OutManifest,Z_Param_Out_Report);
	P_NATIVE_END;
}
// ********** End Class UEslonCodeEditorLibrary Function SyncBlueprintFromSourceFile ***************

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
		{ .NameUTF8 = UTF8TEXT("CompileSourceFileToPlanJson"), .Pointer = &UEslonCodeEditorLibrary::execCompileSourceFileToPlanJson },
		{ .NameUTF8 = UTF8TEXT("EmitBlueprintPlanAsNodes"), .Pointer = &UEslonCodeEditorLibrary::execEmitBlueprintPlanAsNodes },
		{ .NameUTF8 = UTF8TEXT("GetDefaultSchemaPath"), .Pointer = &UEslonCodeEditorLibrary::execGetDefaultSchemaPath },
		{ .NameUTF8 = UTF8TEXT("GetWorkspaceManifestPath"), .Pointer = &UEslonCodeEditorLibrary::execGetWorkspaceManifestPath },
		{ .NameUTF8 = UTF8TEXT("LoadWorkspaceManifestFromSourcePath"), .Pointer = &UEslonCodeEditorLibrary::execLoadWorkspaceManifestFromSourcePath },
		{ .NameUTF8 = UTF8TEXT("SaveWorkspaceManifestToSourcePath"), .Pointer = &UEslonCodeEditorLibrary::execSaveWorkspaceManifestToSourcePath },
		{ .NameUTF8 = UTF8TEXT("SyncBlueprintFromSourceFile"), .Pointer = &UEslonCodeEditorLibrary::execSyncBlueprintFromSourceFile },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_AddBlueprintMemberVariableFromText, "AddBlueprintMemberVariableFromText" }, // 0a3da6ae0b7128bb2211fb8030c064776e4aa43c
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_CompileSourceFileToPlanJson, "CompileSourceFileToPlanJson" }, // 5bd78bf660099cf787985a4869f402e9685fbbad
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_EmitBlueprintPlanAsNodes, "EmitBlueprintPlanAsNodes" }, // 4f67ef6af15a713f52bb3be282c50cc4d6a31194
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_GetDefaultSchemaPath, "GetDefaultSchemaPath" }, // 7d5a1d2a357541806b9c622e9ebda71b411e3022
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_GetWorkspaceManifestPath, "GetWorkspaceManifestPath" }, // d85d1b0fb2c9f432c2431cfe75786277044d7d0f
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_LoadWorkspaceManifestFromSourcePath, "LoadWorkspaceManifestFromSourcePath" }, // bc84c8f12b2b761f5456da17ff26fe7432902f07
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_SaveWorkspaceManifestToSourcePath, "SaveWorkspaceManifestToSourcePath" }, // f773d4589e0fc2a0ee4f663aacdafef61d13ae7b
		{ &Z_Construct_UFunction_UEslonCodeEditorLibrary_SyncBlueprintFromSourceFile, "SyncBlueprintFromSourceFile" }, // 5a9b50213887c30363be63861712606c39389d89
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
		{ Z_Construct_UEnum_EslonCodeEditor_EEslonCodeGeneratedAssetKind, TEXT("EEslonCodeGeneratedAssetKind"), &ZRIE_EEslonCodeGeneratedAssetKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1721481305U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FEslonCodeDiagnostic, Z_Construct_UScriptStruct_FEslonCodeDiagnostic_Statics::NewStructOps, TEXT("EslonCodeDiagnostic"),&Z_Registration_Info_UScriptStruct_FEslonCodeDiagnostic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslonCodeDiagnostic), 4228130139U) },
		{ Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord, Z_Construct_UScriptStruct_FEslonCodeGeneratedAssetRecord_Statics::NewStructOps, TEXT("EslonCodeGeneratedAssetRecord"),&Z_Registration_Info_UScriptStruct_FEslonCodeGeneratedAssetRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslonCodeGeneratedAssetRecord), 759537175U) },
		{ Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest, Z_Construct_UScriptStruct_FEslonCodeWorkspaceManifest_Statics::NewStructOps, TEXT("EslonCodeWorkspaceManifest"),&Z_Registration_Info_UScriptStruct_FEslonCodeWorkspaceManifest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslonCodeWorkspaceManifest), 1953431073U) },
		{ Z_Construct_UScriptStruct_FEslonCodeEmitReport, Z_Construct_UScriptStruct_FEslonCodeEmitReport_Statics::NewStructOps, TEXT("EslonCodeEmitReport"),&Z_Registration_Info_UScriptStruct_FEslonCodeEmitReport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslonCodeEmitReport), 3452084711U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEslonCodeEditorLibrary, TEXT("UEslonCodeEditorLibrary"), &Z_Registration_Info_UClass_UEslonCodeEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEslonCodeEditorLibrary), 527160180U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_EslonCode_Source_EslonCodeEditor_Public_EslonCodeEditorLibrary_h__Script_EslonCodeEditor_764b2f1d0070595d63b7852ef36bc35f78556284{
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
