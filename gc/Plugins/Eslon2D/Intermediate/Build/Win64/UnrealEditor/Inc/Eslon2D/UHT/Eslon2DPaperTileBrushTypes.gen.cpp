// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eslon2DPaperTileBrushTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslon2DPaperTileBrushTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DAnimatedTileDefinition(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DAnimatedTileInstance(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DFlipbookBrush(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DFlipbookBrushEntry(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DPaperTileRef(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileBrush(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileBrushCell(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FEslon2DPaperTileRef **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslon2DPaperTileRef_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslon2DPaperTileRef>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslon2DPaperTileRef); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSet_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipHorizontal_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipVertical_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipDiagonal_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslon2DPaperTileRef constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileIndex;
	static void NewProp_bFlipHorizontal_SetBit(void* Obj)
	{
		((FEslon2DPaperTileRef*)Obj)->bFlipHorizontal = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipHorizontal;
	static void NewProp_bFlipVertical_SetBit(void* Obj)
	{
		((FEslon2DPaperTileRef*)Obj)->bFlipVertical = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipVertical;
	static void NewProp_bFlipDiagonal_SetBit(void* Obj)
	{
		((FEslon2DPaperTileRef*)Obj)->bFlipDiagonal = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipDiagonal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslon2DPaperTileRef constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslon2DPaperTileRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslon2DPaperTileRef Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DPaperTileRef, TileSet), Z_Construct_UClass_UPaperTileSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSet_MetaData), NewProp_TileSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DPaperTileRef, TileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndex_MetaData), NewProp_TileIndex_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipHorizontal = { "bFlipHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DPaperTileRef), &UHT_STATICS::NewProp_bFlipHorizontal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipHorizontal_MetaData), NewProp_bFlipHorizontal_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipVertical = { "bFlipVertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DPaperTileRef), &UHT_STATICS::NewProp_bFlipVertical_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipVertical_MetaData), NewProp_bFlipVertical_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipDiagonal = { "bFlipDiagonal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DPaperTileRef), &UHT_STATICS::NewProp_bFlipDiagonal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipDiagonal_MetaData), NewProp_bFlipDiagonal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipHorizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipVertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipDiagonal,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslon2DPaperTileRef Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
	nullptr,
	&NewStructOps,
	"Eslon2DPaperTileRef",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslon2DPaperTileRef>(),
	alignof(FEslon2DPaperTileRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslon2DPaperTileRef;
UScriptStruct* Z_Construct_UScriptStruct_FEslon2DPaperTileRef(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslon2DPaperTileRef.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslon2DPaperTileRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslon2DPaperTileRef, (UObject*)Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase::Outer), TEXT("Eslon2DPaperTileRef"));
		}
		return Z_Registration_Info_UScriptStruct_FEslon2DPaperTileRef.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslon2DPaperTileRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslon2DPaperTileRef.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslon2DPaperTileRef.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslon2DPaperTileRef ************************************************

// ********** Begin ScriptStruct FEslon2DTileBrushCell *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslon2DTileBrushCell_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslon2DTileBrushCell>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslon2DTileBrushCell); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bErase_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslon2DTileBrushCell constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static void NewProp_bErase_SetBit(void* Obj)
	{
		((FEslon2DTileBrushCell*)Obj)->bErase = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bErase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslon2DTileBrushCell constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslon2DTileBrushCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslon2DTileBrushCell Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileBrushCell, Offset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileBrushCell, Tile), Z_Construct_UScriptStruct_FEslon2DPaperTileRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tile_MetaData), NewProp_Tile_MetaData) }; // b864c1327bb8fe2f4658b06682df0941e116190b
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bErase = { "bErase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DTileBrushCell), &UHT_STATICS::NewProp_bErase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bErase_MetaData), NewProp_bErase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileBrushCell, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bErase,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslon2DTileBrushCell Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
	nullptr,
	&NewStructOps,
	"Eslon2DTileBrushCell",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslon2DTileBrushCell>(),
	alignof(FEslon2DTileBrushCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslon2DTileBrushCell;
UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileBrushCell(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslon2DTileBrushCell.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslon2DTileBrushCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslon2DTileBrushCell, (UObject*)Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase::Outer), TEXT("Eslon2DTileBrushCell"));
		}
		return Z_Registration_Info_UScriptStruct_FEslon2DTileBrushCell.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslon2DTileBrushCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslon2DTileBrushCell.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslon2DTileBrushCell.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslon2DTileBrushCell ***********************************************

// ********** Begin ScriptStruct FEslon2DTileBrush *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslon2DTileBrush_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslon2DTileBrush>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslon2DTileBrush); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternSize_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepeatPattern_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeTiles_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyChance_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeterministicSeed_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Eslon 2D|Tile Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslon2DTileBrush constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatternSize;
	static void NewProp_bRepeatPattern_SetBit(void* Obj)
	{
		((FEslon2DTileBrush*)Obj)->bRepeatPattern = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeatPattern;
	static void NewProp_bRandomizeTiles_SetBit(void* Obj)
	{
		((FEslon2DTileBrush*)Obj)->bRandomizeTiles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeTiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmptyChance;
	static void NewProp_bUseDeterministicSeed_SetBit(void* Obj)
	{
		((FEslon2DTileBrush*)Obj)->bUseDeterministicSeed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeterministicSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslon2DTileBrush constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslon2DTileBrush>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslon2DTileBrush Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DTileBrushCell, METADATA_PARAMS(0, nullptr) }; // 582257ea285ff9df8aad2734d0f2a1abdb8296e4
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileBrush, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 582257ea285ff9df8aad2734d0f2a1abdb8296e4
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PatternSize = { "PatternSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileBrush, PatternSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternSize_MetaData), NewProp_PatternSize_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRepeatPattern = { "bRepeatPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DTileBrush), &UHT_STATICS::NewProp_bRepeatPattern_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepeatPattern_MetaData), NewProp_bRepeatPattern_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRandomizeTiles = { "bRandomizeTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DTileBrush), &UHT_STATICS::NewProp_bRandomizeTiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeTiles_MetaData), NewProp_bRandomizeTiles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EmptyChance = { "EmptyChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileBrush, EmptyChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyChance_MetaData), NewProp_EmptyChance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseDeterministicSeed = { "bUseDeterministicSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DTileBrush), &UHT_STATICS::NewProp_bUseDeterministicSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDeterministicSeed_MetaData), NewProp_bUseDeterministicSeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DTileBrush, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Cells,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PatternSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRepeatPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRandomizeTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseDeterministicSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslon2DTileBrush Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
	nullptr,
	&NewStructOps,
	"Eslon2DTileBrush",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslon2DTileBrush>(),
	alignof(FEslon2DTileBrush),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslon2DTileBrush;
UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileBrush(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslon2DTileBrush.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslon2DTileBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslon2DTileBrush, (UObject*)Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase::Outer), TEXT("Eslon2DTileBrush"));
		}
		return Z_Registration_Info_UScriptStruct_FEslon2DTileBrush.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslon2DTileBrush.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslon2DTileBrush.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslon2DTileBrush.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslon2DTileBrush ***************************************************

// ********** Begin ScriptStruct FEslon2DFlipbookBrushEntry ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslon2DFlipbookBrushEntry_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslon2DFlipbookBrushEntry>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslon2DFlipbookBrushEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOffset_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslon2DFlipbookBrushEntry constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flipbook;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bLooping_SetBit(void* Obj)
	{
		((FEslon2DFlipbookBrushEntry*)Obj)->bLooping = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslon2DFlipbookBrushEntry constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslon2DFlipbookBrushEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslon2DFlipbookBrushEntry Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrushEntry, Flipbook), Z_Construct_UClass_UPaperFlipbook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flipbook_MetaData), NewProp_Flipbook_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LocalOffset = { "LocalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrushEntry, LocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOffset_MetaData), NewProp_LocalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrushEntry, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrushEntry, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrushEntry, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrushEntry, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DFlipbookBrushEntry), &UHT_STATICS::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrushEntry, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrushEntry, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Flipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslon2DFlipbookBrushEntry Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
	nullptr,
	&NewStructOps,
	"Eslon2DFlipbookBrushEntry",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslon2DFlipbookBrushEntry>(),
	alignof(FEslon2DFlipbookBrushEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrushEntry;
UScriptStruct* Z_Construct_UScriptStruct_FEslon2DFlipbookBrushEntry(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrushEntry.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrushEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslon2DFlipbookBrushEntry, (UObject*)Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase::Outer), TEXT("Eslon2DFlipbookBrushEntry"));
		}
		return Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrushEntry.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrushEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrushEntry.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrushEntry.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslon2DFlipbookBrushEntry ******************************************

// ********** Begin ScriptStruct FEslon2DFlipbookBrush *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslon2DFlipbookBrush_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslon2DFlipbookBrush>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslon2DFlipbookBrush); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyChance_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttachToTileMap_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTag_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeterministicSeed_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslon2DFlipbookBrush constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmptyChance;
	static void NewProp_bAttachToTileMap_SetBit(void* Obj)
	{
		((FEslon2DFlipbookBrush*)Obj)->bAttachToTileMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachToTileMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTag;
	static void NewProp_bUseDeterministicSeed_SetBit(void* Obj)
	{
		((FEslon2DFlipbookBrush*)Obj)->bUseDeterministicSeed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeterministicSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslon2DFlipbookBrush constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslon2DFlipbookBrush>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslon2DFlipbookBrush Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DFlipbookBrushEntry, METADATA_PARAMS(0, nullptr) }; // 948e2fbf162decfa86e19c16d2c87149e6a2ba47
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrush, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 948e2fbf162decfa86e19c16d2c87149e6a2ba47
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EmptyChance = { "EmptyChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrush, EmptyChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyChance_MetaData), NewProp_EmptyChance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAttachToTileMap = { "bAttachToTileMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DFlipbookBrush), &UHT_STATICS::NewProp_bAttachToTileMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachToTileMap_MetaData), NewProp_bAttachToTileMap_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ComponentTag = { "ComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrush, ComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTag_MetaData), NewProp_ComponentTag_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseDeterministicSeed = { "bUseDeterministicSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DFlipbookBrush), &UHT_STATICS::NewProp_bUseDeterministicSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDeterministicSeed_MetaData), NewProp_bUseDeterministicSeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DFlipbookBrush, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAttachToTileMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseDeterministicSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslon2DFlipbookBrush Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
	nullptr,
	&NewStructOps,
	"Eslon2DFlipbookBrush",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslon2DFlipbookBrush>(),
	alignof(FEslon2DFlipbookBrush),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrush;
UScriptStruct* Z_Construct_UScriptStruct_FEslon2DFlipbookBrush(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrush.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslon2DFlipbookBrush, (UObject*)Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase::Outer), TEXT("Eslon2DFlipbookBrush"));
		}
		return Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrush.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrush.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrush.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrush.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslon2DFlipbookBrush ***********************************************

// ********** Begin ScriptStruct FEslon2DAnimatedTileDefinition ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslon2DAnimatedTileDefinition_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslon2DAnimatedTileDefinition>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslon2DAnimatedTileDefinition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationName_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomStartFrame_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOffset_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslon2DAnimatedTileDefinition constinit property declarations ****
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FramesPerSecond;
	static void NewProp_bLooping_SetBit(void* Obj)
	{
		((FEslon2DAnimatedTileDefinition*)Obj)->bLooping = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bRandomStartFrame_SetBit(void* Obj)
	{
		((FEslon2DAnimatedTileDefinition*)Obj)->bRandomStartFrame = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomStartFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslon2DAnimatedTileDefinition constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslon2DAnimatedTileDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslon2DAnimatedTileDefinition Property Definitions ***************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DAnimatedTileDefinition, AnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationName_MetaData), NewProp_AnimationName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DPaperTileRef, METADATA_PARAMS(0, nullptr) }; // b864c1327bb8fe2f4658b06682df0941e116190b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DAnimatedTileDefinition, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frames_MetaData), NewProp_Frames_MetaData) }; // b864c1327bb8fe2f4658b06682df0941e116190b
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DAnimatedTileDefinition, FramesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesPerSecond_MetaData), NewProp_FramesPerSecond_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DAnimatedTileDefinition), &UHT_STATICS::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRandomStartFrame = { "bRandomStartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FEslon2DAnimatedTileDefinition), &UHT_STATICS::NewProp_bRandomStartFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomStartFrame_MetaData), NewProp_bRandomStartFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LocalOffset = { "LocalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DAnimatedTileDefinition, LocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOffset_MetaData), NewProp_LocalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DAnimatedTileDefinition, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Frames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Frames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FramesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRandomStartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslon2DAnimatedTileDefinition Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
	nullptr,
	&NewStructOps,
	"Eslon2DAnimatedTileDefinition",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslon2DAnimatedTileDefinition>(),
	alignof(FEslon2DAnimatedTileDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileDefinition;
UScriptStruct* Z_Construct_UScriptStruct_FEslon2DAnimatedTileDefinition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileDefinition.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslon2DAnimatedTileDefinition, (UObject*)Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase::Outer), TEXT("Eslon2DAnimatedTileDefinition"));
		}
		return Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileDefinition.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileDefinition.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileDefinition.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslon2DAnimatedTileDefinition **************************************

// ********** Begin ScriptStruct FEslon2DAnimatedTileInstance **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FEslon2DAnimatedTileInstance_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FEslon2DAnimatedTileInstance>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEslon2DAnimatedTileInstance); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationName_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeOffset_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileBrushTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEslon2DAnimatedTileInstance constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEslon2DAnimatedTileInstance constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEslon2DAnimatedTileInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FEslon2DAnimatedTileInstance Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DAnimatedTileInstance, Coordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinate_MetaData), NewProp_Coordinate_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DAnimatedTileInstance, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerIndex_MetaData), NewProp_LayerIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DAnimatedTileInstance, AnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationName_MetaData), NewProp_AnimationName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartTimeOffset = { "StartTimeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FEslon2DAnimatedTileInstance, StartTimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTimeOffset_MetaData), NewProp_StartTimeOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartTimeOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FEslon2DAnimatedTileInstance Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
	nullptr,
	&NewStructOps,
	"Eslon2DAnimatedTileInstance",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FEslon2DAnimatedTileInstance>(),
	alignof(FEslon2DAnimatedTileInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileInstance;
UScriptStruct* Z_Construct_UScriptStruct_FEslon2DAnimatedTileInstance(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileInstance.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEslon2DAnimatedTileInstance, (UObject*)Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase::Outer), TEXT("Eslon2DAnimatedTileInstance"));
		}
		return Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileInstance.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileInstance.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileInstance.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FEslon2DAnimatedTileInstance ****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileBrushTypes_h__Script_Eslon2D_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FEslon2DPaperTileRef, Z_Construct_UScriptStruct_FEslon2DPaperTileRef_Statics::NewStructOps, TEXT("Eslon2DPaperTileRef"),&Z_Registration_Info_UScriptStruct_FEslon2DPaperTileRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslon2DPaperTileRef), 3093610802U) },
		{ Z_Construct_UScriptStruct_FEslon2DTileBrushCell, Z_Construct_UScriptStruct_FEslon2DTileBrushCell_Statics::NewStructOps, TEXT("Eslon2DTileBrushCell"),&Z_Registration_Info_UScriptStruct_FEslon2DTileBrushCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslon2DTileBrushCell), 1478645738U) },
		{ Z_Construct_UScriptStruct_FEslon2DTileBrush, Z_Construct_UScriptStruct_FEslon2DTileBrush_Statics::NewStructOps, TEXT("Eslon2DTileBrush"),&Z_Registration_Info_UScriptStruct_FEslon2DTileBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslon2DTileBrush), 2305026137U) },
		{ Z_Construct_UScriptStruct_FEslon2DFlipbookBrushEntry, Z_Construct_UScriptStruct_FEslon2DFlipbookBrushEntry_Statics::NewStructOps, TEXT("Eslon2DFlipbookBrushEntry"),&Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrushEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslon2DFlipbookBrushEntry), 2492346303U) },
		{ Z_Construct_UScriptStruct_FEslon2DFlipbookBrush, Z_Construct_UScriptStruct_FEslon2DFlipbookBrush_Statics::NewStructOps, TEXT("Eslon2DFlipbookBrush"),&Z_Registration_Info_UScriptStruct_FEslon2DFlipbookBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslon2DFlipbookBrush), 2234537875U) },
		{ Z_Construct_UScriptStruct_FEslon2DAnimatedTileDefinition, Z_Construct_UScriptStruct_FEslon2DAnimatedTileDefinition_Statics::NewStructOps, TEXT("Eslon2DAnimatedTileDefinition"),&Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslon2DAnimatedTileDefinition), 3103819046U) },
		{ Z_Construct_UScriptStruct_FEslon2DAnimatedTileInstance, Z_Construct_UScriptStruct_FEslon2DAnimatedTileInstance_Statics::NewStructOps, TEXT("Eslon2DAnimatedTileInstance"),&Z_Registration_Info_UScriptStruct_FEslon2DAnimatedTileInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEslon2DAnimatedTileInstance), 3285110191U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileBrushTypes_h__Script_Eslon2D_be762c19029ff865060a4e9aa8373ac967e0558f{
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
