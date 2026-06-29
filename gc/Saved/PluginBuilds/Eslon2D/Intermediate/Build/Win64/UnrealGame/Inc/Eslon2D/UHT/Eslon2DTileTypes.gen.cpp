// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eslon2DTileTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslon2DTileTypes() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileLayer(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileRef(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FEslon2DTileRef ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslon2DTileRef_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslon2DTileRef>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslon2DTileRef); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DTileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileId_MetaData[] = {
		{ "Category", "Eslon 2D|Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DTileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[] = {
		{ "Category", "Eslon 2D|Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DTileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Category", "Eslon 2D|Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DTileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEmpty_MetaData[] = {
		{ "Category", "Eslon 2D|Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DTileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslon2DTileRef constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TileId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Variant;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Animation;
	static void NewProp_bIsEmpty_SetBit(void* Obj)
	{
		((FEslon2DTileRef*)Obj)->bIsEmpty = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEmpty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslon2DTileRef constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslon2DTileRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslon2DTileRef Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TileId = { "TileId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileRef, TileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileId_MetaData), NewProp_TileId_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileRef, Variant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variant_MetaData), NewProp_Variant_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileRef, Animation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsEmpty = { "bIsEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DTileRef), &UHT_STATICS::NewProp_bIsEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEmpty_MetaData), NewProp_bIsEmpty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Variant,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsEmpty,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslon2DTileRef Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
	nullptr,
	&NewStructOps,
	"Eslon2DTileRef",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslon2DTileRef>(),
	alignof(FEslon2DTileRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslon2DTileRef;
UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileRef(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslon2DTileRef.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslon2DTileRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslon2DTileRef, (UObject*)Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase::Outer), TEXT("Eslon2DTileRef"));
		}
		return Z_Registration_Info_UScriptStruct_FEslon2DTileRef.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslon2DTileRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslon2DTileRef.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslon2DTileRef.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslon2DTileRef *****************************************************

// ********** Begin ScriptStruct FEslon2DTileLayer *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslon2DTileLayer_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslon2DTileLayer>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslon2DTileLayer); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DTileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslon2DTileLayer constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslon2DTileLayer constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslon2DTileLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslon2DTileLayer Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileLayer, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DTileRef, METADATA_PARAMS(0, nullptr) }; // 2d588c55d81d460d053fa81188554dd335ddd385
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileLayer, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) }; // 2d588c55d81d460d053fa81188554dd335ddd385
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tiles,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslon2DTileLayer Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
	nullptr,
	&NewStructOps,
	"Eslon2DTileLayer",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslon2DTileLayer>(),
	alignof(FEslon2DTileLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslon2DTileLayer;
UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileLayer(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslon2DTileLayer.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslon2DTileLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslon2DTileLayer, (UObject*)Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase::Outer), TEXT("Eslon2DTileLayer"));
		}
		return Z_Registration_Info_UScriptStruct_FEslon2DTileLayer.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslon2DTileLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslon2DTileLayer.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslon2DTileLayer.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslon2DTileLayer ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Saved_PluginBuilds_Eslon2D_HostProject_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileTypes_h__Script_Eslon2D_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FEslon2DTileRef, Z_Construct_UScriptStruct_FEslon2DTileRef_Statics::NewStructOps, TEXT("Eslon2DTileRef"),&Z_Registration_Info_UScriptStruct_FEslon2DTileRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslon2DTileRef), 760777813U) },
		{ Z_Construct_UScriptStruct_FEslon2DTileLayer, Z_Construct_UScriptStruct_FEslon2DTileLayer_Statics::NewStructOps, TEXT("Eslon2DTileLayer"),&Z_Registration_Info_UScriptStruct_FEslon2DTileLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslon2DTileLayer), 3820879698U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Saved_PluginBuilds_Eslon2D_HostProject_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileTypes_h__Script_Eslon2D_a31636f0bc47ef7dd5a87fd75ba972ef6569416d{
	TEXT("/Script/Eslon2D"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
