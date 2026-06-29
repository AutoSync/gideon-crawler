// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eslon2DTileMapAsset.h"
#include "Eslon2DTileTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslon2DTileMapAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDataAsset(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileLayer(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DTileMapAsset(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DTileMapAsset(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UEslon2DTileMapAsset Function EnsureDefaultLayer *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapAsset_EnsureDefaultLayer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnsureDefaultLayer constinit property declarations ********************
// ********** End Function EnsureDefaultLayer constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapAsset, nullptr, "EnsureDefaultLayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UEslon2DTileMapAsset_EnsureDefaultLayer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapAsset::execEnsureDefaultLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnsureDefaultLayer();
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapAsset Function EnsureDefaultLayer ***************************

// ********** Begin Class UEslon2DTileMapAsset Function InitializeFromPaperTileSet *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapAsset_InitializeFromPaperTileSet_Statics
struct UHT_STATICS
{
	struct Eslon2DTileMapAsset_eventInitializeFromPaperTileSet_Parms
	{
		UPaperTileSet* InTileSet;
		int32 InWidth;
		int32 InHeight;
		bool bCreateDefaultLayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "CPP_Default_bCreateDefaultLayer", "true" },
		{ "CPP_Default_InHeight", "16" },
		{ "CPP_Default_InWidth", "16" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeFromPaperTileSet constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InHeight;
	static void NewProp_bCreateDefaultLayer_SetBit(void* Obj)
	{
		((Eslon2DTileMapAsset_eventInitializeFromPaperTileSet_Parms*)Obj)->bCreateDefaultLayer = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateDefaultLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeFromPaperTileSet constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeFromPaperTileSet Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTileSet = { "InTileSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapAsset_eventInitializeFromPaperTileSet_Parms, InTileSet), Z_Construct_UClass_UPaperTileSet, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapAsset_eventInitializeFromPaperTileSet_Parms, InWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapAsset_eventInitializeFromPaperTileSet_Parms, InHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateDefaultLayer = { "bCreateDefaultLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DTileMapAsset_eventInitializeFromPaperTileSet_Parms), &UHT_STATICS::NewProp_bCreateDefaultLayer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateDefaultLayer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeFromPaperTileSet Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapAsset, nullptr, "InitializeFromPaperTileSet", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DTileMapAsset_eventInitializeFromPaperTileSet_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DTileMapAsset_eventInitializeFromPaperTileSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DTileMapAsset_InitializeFromPaperTileSet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapAsset::execInitializeFromPaperTileSet)
{
	P_GET_OBJECT(UPaperTileSet,Z_Param_InTileSet);
	P_GET_PROPERTY(FIntProperty,Z_Param_InWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_InHeight);
	P_GET_UBOOL(Z_Param_bCreateDefaultLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromPaperTileSet(Z_Param_InTileSet,Z_Param_InWidth,Z_Param_InHeight,Z_Param_bCreateDefaultLayer);
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapAsset Function InitializeFromPaperTileSet *******************

// ********** Begin Class UEslon2DTileMapAsset Function IsValidCoordinate **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapAsset_IsValidCoordinate_Statics
struct UHT_STATICS
{
	struct Eslon2DTileMapAsset_eventIsValidCoordinate_Parms
	{
		int32 X;
		int32 Y;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidCoordinate constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DTileMapAsset_eventIsValidCoordinate_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidCoordinate constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidCoordinate Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapAsset_eventIsValidCoordinate_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapAsset_eventIsValidCoordinate_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DTileMapAsset_eventIsValidCoordinate_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidCoordinate Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapAsset, nullptr, "IsValidCoordinate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DTileMapAsset_eventIsValidCoordinate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DTileMapAsset_eventIsValidCoordinate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DTileMapAsset_IsValidCoordinate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapAsset::execIsValidCoordinate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidCoordinate(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapAsset Function IsValidCoordinate ****************************

// ********** Begin Class UEslon2DTileMapAsset Function ToTileIndex ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapAsset_ToTileIndex_Statics
struct UHT_STATICS
{
	struct Eslon2DTileMapAsset_eventToTileIndex_Parms
	{
		int32 X;
		int32 Y;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToTileIndex constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToTileIndex constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToTileIndex Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapAsset_eventToTileIndex_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapAsset_eventToTileIndex_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapAsset_eventToTileIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ToTileIndex Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapAsset, nullptr, "ToTileIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DTileMapAsset_eventToTileIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DTileMapAsset_eventToTileIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DTileMapAsset_ToTileIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapAsset::execToTileIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ToTileIndex(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapAsset Function ToTileIndex **********************************

// ********** Begin Class UEslon2DTileMapAsset *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEslon2DTileMapAsset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Eslon2DTileMapAsset.h" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTileSet_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEslon2DTileMapAsset constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTileSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEslon2DTileMapAsset constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnsureDefaultLayer"), .Pointer = &UEslon2DTileMapAsset::execEnsureDefaultLayer },
		{ .NameUTF8 = UTF8TEXT("InitializeFromPaperTileSet"), .Pointer = &UEslon2DTileMapAsset::execInitializeFromPaperTileSet },
		{ .NameUTF8 = UTF8TEXT("IsValidCoordinate"), .Pointer = &UEslon2DTileMapAsset::execIsValidCoordinate },
		{ .NameUTF8 = UTF8TEXT("ToTileIndex"), .Pointer = &UEslon2DTileMapAsset::execToTileIndex },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEslon2DTileMapAsset_EnsureDefaultLayer, "EnsureDefaultLayer" }, // 81fbe0a9ccb111e7f5a9aa356f34e057d23ad192
		{ &Z_Construct_UFunction_UEslon2DTileMapAsset_InitializeFromPaperTileSet, "InitializeFromPaperTileSet" }, // 5d65dccb9c01804e66b55191baa58c012e3d733e
		{ &Z_Construct_UFunction_UEslon2DTileMapAsset_IsValidCoordinate, "IsValidCoordinate" }, // 3de67ba67e3f63af9446b5b9c99a9467c6fb2dfa
		{ &Z_Construct_UFunction_UEslon2DTileMapAsset_ToTileIndex, "ToTileIndex" }, // 8413c86396711a670ef1b1641546219bc71af1b8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEslon2DTileMapAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEslon2DTileMapAsset Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapAsset, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapAsset, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapAsset, TileSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceTileSet = { "SourceTileSet", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapAsset, SourceTileSet), Z_Construct_UClass_UPaperTileSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTileSet_MetaData), NewProp_SourceTileSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DTileLayer, METADATA_PARAMS(0, nullptr) }; // e3bdff520b7022da637acc2adf0a8b4ab3594c6b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapAsset, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // e3bdff520b7022da637acc2adf0a8b4ab3594c6b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceTileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEslon2DTileMapAsset Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDataAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEslon2DTileMapAsset,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UEslon2DTileMapAsset_StaticRegisterNativesUEslon2DTileMapAsset()
{
	UClass* Class = UEslon2DTileMapAsset::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEslon2DTileMapAsset;
UClass* Z_Construct_UClass_UEslon2DTileMapAsset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEslon2DTileMapAsset;
		if (!Z_Registration_Info_UClass_UEslon2DTileMapAsset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Eslon2DTileMapAsset"),
				Z_Registration_Info_UClass_UEslon2DTileMapAsset.InnerSingleton,
				UEslon2DTileMapAsset_StaticRegisterNativesUEslon2DTileMapAsset,
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
		return Z_Registration_Info_UClass_UEslon2DTileMapAsset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEslon2DTileMapAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEslon2DTileMapAsset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEslon2DTileMapAsset.OuterSingleton;
}
#undef UHT_STATICS
UEslon2DTileMapAsset::UEslon2DTileMapAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEslon2DTileMapAsset);
UEslon2DTileMapAsset::~UEslon2DTileMapAsset() {}
// ********** End Class UEslon2DTileMapAsset *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapAsset_h__Script_Eslon2D_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEslon2DTileMapAsset, TEXT("UEslon2DTileMapAsset"), &Z_Registration_Info_UClass_UEslon2DTileMapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEslon2DTileMapAsset), 34590636U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapAsset_h__Script_Eslon2D_7fb323afd56381c8e45e42f2b6d8945bb8c7d0aa{
	TEXT("/Script/Eslon2D"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
