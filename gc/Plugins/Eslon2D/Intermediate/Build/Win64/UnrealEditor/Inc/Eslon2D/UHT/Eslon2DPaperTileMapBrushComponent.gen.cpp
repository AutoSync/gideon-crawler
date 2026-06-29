// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eslon2DPaperTileMapBrushComponent.h"
#include "Eslon2DPaperTileBrushTypes.h"
#include "PaperTileLayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslon2DPaperTileMapBrushComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent(ETypeConstructPhase);
ESLON2D_API UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPaperTilePaintedSignature__DelegateSignature(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DPaperTileRef(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileBrush(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileBrushCell(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FEslon2DPaperTilePaintedSignature *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPaperTilePaintedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_Eslon2D_eventEslon2DPaperTilePaintedSignature_Parms
	{
		int32 X;
		int32 Y;
		int32 LayerIndex;
		FPaperTileInfo Tile;
		bool bErased;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FEslon2DPaperTilePaintedSignature constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static void NewProp_bErased_SetBit(void* Obj)
	{
		((_Script_Eslon2D_eventEslon2DPaperTilePaintedSignature_Parms*)Obj)->bErased = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bErased;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FEslon2DPaperTilePaintedSignature constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FEslon2DPaperTilePaintedSignature Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DPaperTilePaintedSignature_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DPaperTilePaintedSignature_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DPaperTilePaintedSignature_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DPaperTilePaintedSignature_Parms, Tile), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(0, nullptr) }; // fcbb878be1c90fa334d3af5aa23772905331006c
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bErased = { "bErased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Eslon2D_eventEslon2DPaperTilePaintedSignature_Parms), &UHT_STATICS::NewProp_bErased_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bErased,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FEslon2DPaperTilePaintedSignature Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D, nullptr, "Eslon2DPaperTilePaintedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_Eslon2D_eventEslon2DPaperTilePaintedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_Eslon2D_eventEslon2DPaperTilePaintedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPaperTilePaintedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FEslon2DPaperTilePaintedSignature ***************************************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function CaptureBrushFromMap **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_CaptureBrushFromMap_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms
	{
		int32 MinX;
		int32 MinY;
		int32 MaxX;
		int32 MaxY;
		int32 LayerIndex;
		bool bIncludeEmptyCells;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_bIncludeEmptyCells", "false" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CaptureBrushFromMap constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static void NewProp_bIncludeEmptyCells_SetBit(void* Obj)
	{
		((Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms*)Obj)->bIncludeEmptyCells = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeEmptyCells;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CaptureBrushFromMap constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CaptureBrushFromMap Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms, MinX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms, MinY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms, MaxX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms, MaxY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeEmptyCells = { "bIncludeEmptyCells", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms), &UHT_STATICS::NewProp_bIncludeEmptyCells_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeEmptyCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CaptureBrushFromMap Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "CaptureBrushFromMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventCaptureBrushFromMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_CaptureBrushFromMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execCaptureBrushFromMap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MinX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinY);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxY);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_GET_UBOOL(Z_Param_bIncludeEmptyCells);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CaptureBrushFromMap(Z_Param_MinX,Z_Param_MinY,Z_Param_MaxX,Z_Param_MaxY,Z_Param_LayerIndex,Z_Param_bIncludeEmptyCells);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function CaptureBrushFromMap ************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function EraseEllipse *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseEllipse_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms
	{
		int32 CenterX;
		int32 CenterY;
		int32 RadiusX;
		int32 RadiusY;
		bool bFilled;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_bFilled", "true" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EraseEllipse constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CenterX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CenterY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadiusX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadiusY;
	static void NewProp_bFilled_SetBit(void* Obj)
	{
		((Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms*)Obj)->bFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EraseEllipse constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EraseEllipse Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CenterX = { "CenterX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms, CenterX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CenterY = { "CenterY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms, CenterY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RadiusX = { "RadiusX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms, RadiusX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RadiusY = { "RadiusY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms, RadiusY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilled = { "bFilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms), &UHT_STATICS::NewProp_bFilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RadiusX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RadiusY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EraseEllipse Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "EraseEllipse", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventEraseEllipse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseEllipse(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execEraseEllipse)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CenterX);
	P_GET_PROPERTY(FIntProperty,Z_Param_CenterY);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadiusX);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadiusY);
	P_GET_UBOOL(Z_Param_bFilled);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EraseEllipse(Z_Param_CenterX,Z_Param_CenterY,Z_Param_RadiusX,Z_Param_RadiusY,Z_Param_bFilled,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function EraseEllipse *******************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function EraseLine ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseLine_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventEraseLine_Parms
	{
		int32 StartX;
		int32 StartY;
		int32 EndX;
		int32 EndY;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EraseLine constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EraseLine constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EraseLine Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseLine_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseLine_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndX = { "EndX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseLine_Parms, EndX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndY = { "EndY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseLine_Parms, EndY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseLine_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EraseLine Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "EraseLine", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventEraseLine_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventEraseLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseLine(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execEraseLine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndX);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndY);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EraseLine(Z_Param_StartX,Z_Param_StartY,Z_Param_EndX,Z_Param_EndY,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function EraseLine **********************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function EraseRectangle ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseRectangle_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms
	{
		int32 MinX;
		int32 MinY;
		int32 MaxX;
		int32 MaxY;
		bool bFilled;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_bFilled", "true" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EraseRectangle constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxY;
	static void NewProp_bFilled_SetBit(void* Obj)
	{
		((Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms*)Obj)->bFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EraseRectangle constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EraseRectangle Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms, MinX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms, MinY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms, MaxX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms, MaxY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilled = { "bFilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms), &UHT_STATICS::NewProp_bFilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EraseRectangle Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "EraseRectangle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventEraseRectangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseRectangle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execEraseRectangle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MinX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinY);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxY);
	P_GET_UBOOL(Z_Param_bFilled);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EraseRectangle(Z_Param_MinX,Z_Param_MinY,Z_Param_MaxX,Z_Param_MaxY,Z_Param_bFilled,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function EraseRectangle *****************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function EraseSingle ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseSingle_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventEraseSingle_Parms
	{
		int32 X;
		int32 Y;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EraseSingle constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EraseSingle constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EraseSingle Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseSingle_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseSingle_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseSingle_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventEraseSingle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EraseSingle Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "EraseSingle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventEraseSingle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventEraseSingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseSingle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execEraseSingle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EraseSingle(Z_Param_X,Z_Param_Y,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function EraseSingle ********************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function FloodFill ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_FloodFill_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventFloodFill_Parms
	{
		int32 StartX;
		int32 StartY;
		int32 LayerIndex;
		int32 MaxTiles;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "CPP_Default_MaxTiles", "4096" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FloodFill constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FloodFill constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FloodFill Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventFloodFill_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventFloodFill_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventFloodFill_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxTiles = { "MaxTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventFloodFill_Parms, MaxTiles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventFloodFill_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FloodFill Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "FloodFill", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventFloodFill_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventFloodFill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_FloodFill(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execFloodFill)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxTiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FloodFill(Z_Param_StartX,Z_Param_StartY,Z_Param_LayerIndex,Z_Param_MaxTiles);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function FloodFill **********************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function PaintEllipse *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintEllipse_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms
	{
		int32 CenterX;
		int32 CenterY;
		int32 RadiusX;
		int32 RadiusY;
		bool bFilled;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_bFilled", "true" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PaintEllipse constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CenterX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CenterY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadiusX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadiusY;
	static void NewProp_bFilled_SetBit(void* Obj)
	{
		((Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms*)Obj)->bFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PaintEllipse constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PaintEllipse Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CenterX = { "CenterX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms, CenterX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CenterY = { "CenterY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms, CenterY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RadiusX = { "RadiusX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms, RadiusX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RadiusY = { "RadiusY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms, RadiusY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilled = { "bFilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms), &UHT_STATICS::NewProp_bFilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RadiusX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RadiusY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PaintEllipse Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "PaintEllipse", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPaintEllipse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintEllipse(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execPaintEllipse)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CenterX);
	P_GET_PROPERTY(FIntProperty,Z_Param_CenterY);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadiusX);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadiusY);
	P_GET_UBOOL(Z_Param_bFilled);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PaintEllipse(Z_Param_CenterX,Z_Param_CenterY,Z_Param_RadiusX,Z_Param_RadiusY,Z_Param_bFilled,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function PaintEllipse *******************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function PaintLine ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintLine_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventPaintLine_Parms
	{
		int32 StartX;
		int32 StartY;
		int32 EndX;
		int32 EndY;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PaintLine constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PaintLine constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PaintLine Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintLine_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintLine_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndX = { "EndX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintLine_Parms, EndX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndY = { "EndY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintLine_Parms, EndY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintLine_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PaintLine Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "PaintLine", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPaintLine_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPaintLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintLine(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execPaintLine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndX);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndY);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PaintLine(Z_Param_StartX,Z_Param_StartY,Z_Param_EndX,Z_Param_EndY,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function PaintLine **********************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function PaintRectangle ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintRectangle_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms
	{
		int32 MinX;
		int32 MinY;
		int32 MaxX;
		int32 MaxY;
		bool bFilled;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_bFilled", "true" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PaintRectangle constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxY;
	static void NewProp_bFilled_SetBit(void* Obj)
	{
		((Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms*)Obj)->bFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PaintRectangle constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PaintRectangle Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms, MinX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms, MinY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms, MaxX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms, MaxY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilled = { "bFilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms), &UHT_STATICS::NewProp_bFilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PaintRectangle Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "PaintRectangle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPaintRectangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintRectangle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execPaintRectangle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MinX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinY);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxY);
	P_GET_UBOOL(Z_Param_bFilled);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PaintRectangle(Z_Param_MinX,Z_Param_MinY,Z_Param_MaxX,Z_Param_MaxY,Z_Param_bFilled,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function PaintRectangle *****************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function PaintSingle ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintSingle_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventPaintSingle_Parms
	{
		int32 X;
		int32 Y;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PaintSingle constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PaintSingle constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PaintSingle Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintSingle_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintSingle_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintSingle_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPaintSingle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PaintSingle Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "PaintSingle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPaintSingle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPaintSingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintSingle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execPaintSingle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PaintSingle(Z_Param_X,Z_Param_Y,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function PaintSingle ********************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function PickTile *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PickTile_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventPickTile_Parms
	{
		int32 X;
		int32 Y;
		FEslon2DPaperTileRef OutTile;
		int32 LayerIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PickTile constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTile;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DPaperTileMapBrushComponent_eventPickTile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PickTile constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PickTile Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPickTile_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPickTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutTile = { "OutTile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPickTile_Parms, OutTile), Z_Construct_UScriptStruct_FEslon2DPaperTileRef, METADATA_PARAMS(0, nullptr) }; // b864c1327bb8fe2f4658b06682df0941e116190b
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventPickTile_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPaperTileMapBrushComponent_eventPickTile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PickTile Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "PickTile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPickTile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventPickTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PickTile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execPickTile)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_STRUCT_REF(FEslon2DPaperTileRef,Z_Param_Out_OutTile);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PickTile(Z_Param_X,Z_Param_Y,Z_Param_Out_OutTile,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function PickTile ***********************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function SetBrush *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetBrush_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventSetBrush_Parms
	{
		FEslon2DTileBrush InBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBrush constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBrush constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBrush Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventSetBrush_Parms, InBrush), Z_Construct_UScriptStruct_FEslon2DTileBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 8963e85997843f005867927cc85bf04981d906d9
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBrush,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBrush Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "SetBrush", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetBrush_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetBrush(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execSetBrush)
{
	P_GET_STRUCT_REF(FEslon2DTileBrush,Z_Param_Out_InBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrush(Z_Param_Out_InBrush);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function SetBrush ***********************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function SetPaletteBrush **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetPaletteBrush_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventSetPaletteBrush_Parms
	{
		TArray<FEslon2DPaperTileRef> Tiles;
		bool bRandomizeTiles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_bRandomizeTiles", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPaletteBrush constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
	static void NewProp_bRandomizeTiles_SetBit(void* Obj)
	{
		((Eslon2DPaperTileMapBrushComponent_eventSetPaletteBrush_Parms*)Obj)->bRandomizeTiles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPaletteBrush constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPaletteBrush Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DPaperTileRef, METADATA_PARAMS(0, nullptr) }; // b864c1327bb8fe2f4658b06682df0941e116190b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventSetPaletteBrush_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) }; // b864c1327bb8fe2f4658b06682df0941e116190b
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRandomizeTiles = { "bRandomizeTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPaperTileMapBrushComponent_eventSetPaletteBrush_Parms), &UHT_STATICS::NewProp_bRandomizeTiles_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRandomizeTiles,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPaletteBrush Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "SetPaletteBrush", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetPaletteBrush_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetPaletteBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetPaletteBrush(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execSetPaletteBrush)
{
	P_GET_TARRAY_REF(FEslon2DPaperTileRef,Z_Param_Out_Tiles);
	P_GET_UBOOL(Z_Param_bRandomizeTiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPaletteBrush(Z_Param_Out_Tiles,Z_Param_bRandomizeTiles);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function SetPaletteBrush ****************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function SetPatternBrush **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetPatternBrush_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventSetPatternBrush_Parms
	{
		TArray<FEslon2DTileBrushCell> Cells;
		FIntPoint PatternSize;
		bool bRepeatPattern;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "CPP_Default_bRepeatPattern", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPatternBrush constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatternSize;
	static void NewProp_bRepeatPattern_SetBit(void* Obj)
	{
		((Eslon2DPaperTileMapBrushComponent_eventSetPatternBrush_Parms*)Obj)->bRepeatPattern = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeatPattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPatternBrush constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPatternBrush Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DTileBrushCell, METADATA_PARAMS(0, nullptr) }; // 582257ea285ff9df8aad2734d0f2a1abdb8296e4
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventSetPatternBrush_Parms, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 582257ea285ff9df8aad2734d0f2a1abdb8296e4
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PatternSize = { "PatternSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventSetPatternBrush_Parms, PatternSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRepeatPattern = { "bRepeatPattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPaperTileMapBrushComponent_eventSetPatternBrush_Parms), &UHT_STATICS::NewProp_bRepeatPattern_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Cells,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PatternSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRepeatPattern,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPatternBrush Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "SetPatternBrush", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetPatternBrush_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetPatternBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetPatternBrush(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execSetPatternBrush)
{
	P_GET_TARRAY_REF(FEslon2DTileBrushCell,Z_Param_Out_Cells);
	P_GET_STRUCT(FIntPoint,Z_Param_PatternSize);
	P_GET_UBOOL(Z_Param_bRepeatPattern);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPatternBrush(Z_Param_Out_Cells,Z_Param_PatternSize,Z_Param_bRepeatPattern);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function SetPatternBrush ****************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function SetSingleTileBrush ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetSingleTileBrush_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventSetSingleTileBrush_Parms
	{
		FEslon2DPaperTileRef Tile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSingleTileBrush constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSingleTileBrush constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSingleTileBrush Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventSetSingleTileBrush_Parms, Tile), Z_Construct_UScriptStruct_FEslon2DPaperTileRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tile_MetaData), NewProp_Tile_MetaData) }; // b864c1327bb8fe2f4658b06682df0941e116190b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tile,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSingleTileBrush Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "SetSingleTileBrush", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetSingleTileBrush_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetSingleTileBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetSingleTileBrush(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execSetSingleTileBrush)
{
	P_GET_STRUCT_REF(FEslon2DPaperTileRef,Z_Param_Out_Tile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSingleTileBrush(Z_Param_Out_Tile);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function SetSingleTileBrush *************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function SetTargetLayer ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetTargetLayer_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventSetTargetLayer_Parms
	{
		int32 InLayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTargetLayer constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTargetLayer constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTargetLayer Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InLayerIndex = { "InLayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventSetTargetLayer_Parms, InLayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLayerIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTargetLayer Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "SetTargetLayer", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetTargetLayer_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetTargetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetTargetLayer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execSetTargetLayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetLayer(Z_Param_InLayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function SetTargetLayer *****************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Function SetTargetTileMap *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetTargetTileMap_Statics
struct UHT_STATICS
{
	struct Eslon2DPaperTileMapBrushComponent_eventSetTargetTileMap_Parms
	{
		UPaperTileMapComponent* InTargetTileMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetTileMap_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTargetTileMap constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetTileMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTargetTileMap constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTargetTileMap Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetTileMap = { "InTargetTileMap", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPaperTileMapBrushComponent_eventSetTargetTileMap_Parms, InTargetTileMap), Z_Construct_UClass_UPaperTileMapComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetTileMap_MetaData), NewProp_InTargetTileMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetTileMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTargetTileMap Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, nullptr, "SetTargetTileMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetTargetTileMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPaperTileMapBrushComponent_eventSetTargetTileMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetTargetTileMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPaperTileMapBrushComponent::execSetTargetTileMap)
{
	P_GET_OBJECT(UPaperTileMapComponent,Z_Param_InTargetTileMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetTileMap(Z_Param_InTargetTileMap);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPaperTileMapBrushComponent Function SetTargetTileMap ***************

// ********** Begin Class UEslon2DPaperTileMapBrushComponent ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Eslon2D" },
		{ "IncludePath", "Eslon2DPaperTileMapBrushComponent.h" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTileMap_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLayerIndex_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBrush_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMakeTileMapEditableBeforePaint_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildCollisionAfterPaint_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTilePainted_MetaData[] = {
		{ "Category", "Eslon 2D|Paper Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPaperTileMapBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEslon2DPaperTileMapBrushComponent constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTileMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetLayerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentBrush;
	static void NewProp_bMakeTileMapEditableBeforePaint_SetBit(void* Obj)
	{
		((UEslon2DPaperTileMapBrushComponent*)Obj)->bMakeTileMapEditableBeforePaint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeTileMapEditableBeforePaint;
	static void NewProp_bRebuildCollisionAfterPaint_SetBit(void* Obj)
	{
		((UEslon2DPaperTileMapBrushComponent*)Obj)->bRebuildCollisionAfterPaint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildCollisionAfterPaint;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTilePainted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEslon2DPaperTileMapBrushComponent constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CaptureBrushFromMap"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execCaptureBrushFromMap },
		{ .NameUTF8 = UTF8TEXT("EraseEllipse"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execEraseEllipse },
		{ .NameUTF8 = UTF8TEXT("EraseLine"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execEraseLine },
		{ .NameUTF8 = UTF8TEXT("EraseRectangle"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execEraseRectangle },
		{ .NameUTF8 = UTF8TEXT("EraseSingle"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execEraseSingle },
		{ .NameUTF8 = UTF8TEXT("FloodFill"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execFloodFill },
		{ .NameUTF8 = UTF8TEXT("PaintEllipse"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execPaintEllipse },
		{ .NameUTF8 = UTF8TEXT("PaintLine"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execPaintLine },
		{ .NameUTF8 = UTF8TEXT("PaintRectangle"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execPaintRectangle },
		{ .NameUTF8 = UTF8TEXT("PaintSingle"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execPaintSingle },
		{ .NameUTF8 = UTF8TEXT("PickTile"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execPickTile },
		{ .NameUTF8 = UTF8TEXT("SetBrush"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execSetBrush },
		{ .NameUTF8 = UTF8TEXT("SetPaletteBrush"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execSetPaletteBrush },
		{ .NameUTF8 = UTF8TEXT("SetPatternBrush"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execSetPatternBrush },
		{ .NameUTF8 = UTF8TEXT("SetSingleTileBrush"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execSetSingleTileBrush },
		{ .NameUTF8 = UTF8TEXT("SetTargetLayer"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execSetTargetLayer },
		{ .NameUTF8 = UTF8TEXT("SetTargetTileMap"), .Pointer = &UEslon2DPaperTileMapBrushComponent::execSetTargetTileMap },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_CaptureBrushFromMap, "CaptureBrushFromMap" }, // 5ca72072e9afb85179292e35cd2e86e8d19dd8da
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseEllipse, "EraseEllipse" }, // c9c47dba444e1ba6c5fadc0bbee8a5ae9aba94ca
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseLine, "EraseLine" }, // 9776f82e42d9130e794ac379f18cf03edfe47684
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseRectangle, "EraseRectangle" }, // 6bd7e264e0abbfbd8b1039c6753c1b29ffd616af
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_EraseSingle, "EraseSingle" }, // 739ce64091372eead1d405b867cc761999c4e07e
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_FloodFill, "FloodFill" }, // 93cbf3b7064a218959551950030c1e8dfe7bb836
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintEllipse, "PaintEllipse" }, // e02a8b53ddd69efcd458f57bd04a955918d52b01
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintLine, "PaintLine" }, // b051eb2dfbf70e055bc373f2f0a638c290bc9310
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintRectangle, "PaintRectangle" }, // cba4d9a707b1028c32742b58c57ff8258de5ea30
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PaintSingle, "PaintSingle" }, // 4578da38f75c0568325ba88dac87a7189aa5dbdd
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_PickTile, "PickTile" }, // c5c0b0a71bdadbea1c7ede68e92282a92ddba51c
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetBrush, "SetBrush" }, // 0e5a817be6462a8e1ecd73e9cec3672dfe21168e
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetPaletteBrush, "SetPaletteBrush" }, // 7ff6ac0f9aea7112da3eff203b2495d458d0a2ee
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetPatternBrush, "SetPatternBrush" }, // d6b3e00c00ffc44277aa763e2a1224d43ed74474
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetSingleTileBrush, "SetSingleTileBrush" }, // 954e73f4ae0ec7f8de5d30c92bdf9aa67c6096a9
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetTargetLayer, "SetTargetLayer" }, // ab00b159f58b8a495fd7102310bc6ac2b822b8e4
		{ &Z_Construct_UFunction_UEslon2DPaperTileMapBrushComponent_SetTargetTileMap, "SetTargetTileMap" }, // 4e42f82da62107a03a9914bfff9fdf563c32beed
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEslon2DPaperTileMapBrushComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEslon2DPaperTileMapBrushComponent Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetTileMap = { "TargetTileMap", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPaperTileMapBrushComponent, TargetTileMap), Z_Construct_UClass_UPaperTileMapComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTileMap_MetaData), NewProp_TargetTileMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TargetLayerIndex = { "TargetLayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPaperTileMapBrushComponent, TargetLayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLayerIndex_MetaData), NewProp_TargetLayerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CurrentBrush = { "CurrentBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPaperTileMapBrushComponent, CurrentBrush), Z_Construct_UScriptStruct_FEslon2DTileBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBrush_MetaData), NewProp_CurrentBrush_MetaData) }; // 8963e85997843f005867927cc85bf04981d906d9
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMakeTileMapEditableBeforePaint = { "bMakeTileMapEditableBeforePaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEslon2DPaperTileMapBrushComponent), &UHT_STATICS::NewProp_bMakeTileMapEditableBeforePaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMakeTileMapEditableBeforePaint_MetaData), NewProp_bMakeTileMapEditableBeforePaint_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRebuildCollisionAfterPaint = { "bRebuildCollisionAfterPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEslon2DPaperTileMapBrushComponent), &UHT_STATICS::NewProp_bRebuildCollisionAfterPaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildCollisionAfterPaint_MetaData), NewProp_bRebuildCollisionAfterPaint_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTilePainted = { "OnTilePainted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPaperTileMapBrushComponent, OnTilePainted), Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPaperTilePaintedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTilePainted_MetaData), NewProp_OnTilePainted_MetaData) }; // b55fa7618d96cfb5e9329c43d585b2634e436b03
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetTileMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMakeTileMapEditableBeforePaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRebuildCollisionAfterPaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTilePainted,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEslon2DPaperTileMapBrushComponent Property Definitions ********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UEslon2DPaperTileMapBrushComponent_StaticRegisterNativesUEslon2DPaperTileMapBrushComponent()
{
	UClass* Class = UEslon2DPaperTileMapBrushComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEslon2DPaperTileMapBrushComponent;
UClass* Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEslon2DPaperTileMapBrushComponent;
		if (!Z_Registration_Info_UClass_UEslon2DPaperTileMapBrushComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Eslon2DPaperTileMapBrushComponent"),
				Z_Registration_Info_UClass_UEslon2DPaperTileMapBrushComponent.InnerSingleton,
				UEslon2DPaperTileMapBrushComponent_StaticRegisterNativesUEslon2DPaperTileMapBrushComponent,
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
		return Z_Registration_Info_UClass_UEslon2DPaperTileMapBrushComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEslon2DPaperTileMapBrushComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEslon2DPaperTileMapBrushComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEslon2DPaperTileMapBrushComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEslon2DPaperTileMapBrushComponent);
UEslon2DPaperTileMapBrushComponent::~UEslon2DPaperTileMapBrushComponent() {}
// ********** End Class UEslon2DPaperTileMapBrushComponent *****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h__Script_Eslon2D_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent, TEXT("UEslon2DPaperTileMapBrushComponent"), &Z_Registration_Info_UClass_UEslon2DPaperTileMapBrushComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEslon2DPaperTileMapBrushComponent), 2216907177U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h__Script_Eslon2D_96b9515d78aecd039e34cee1146ca4b33acb1c8d{
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
