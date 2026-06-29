// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eslon2DTileMapComponent.h"
#include "Eslon2DTileTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslon2DTileMapComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase);
ESLON2D_API UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DTileChangedSignature__DelegateSignature(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileLayer(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DTileMapComponent(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DTileRef(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DTileMapAsset(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DTileMapComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FEslon2DTileChangedSignature ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_Eslon2D_Eslon2DTileChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_Eslon2D_eventEslon2DTileChangedSignature_Parms
	{
		int32 X;
		int32 Y;
		FName LayerName;
		FEslon2DTileRef Tile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FEslon2DTileChangedSignature constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FEslon2DTileChangedSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FEslon2DTileChangedSignature Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DTileChangedSignature_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DTileChangedSignature_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DTileChangedSignature_Parms, LayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DTileChangedSignature_Parms, Tile), Z_Construct_UScriptStruct_FEslon2DTileRef, METADATA_PARAMS(0, nullptr) }; // 2d588c55d81d460d053fa81188554dd335ddd385
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tile,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FEslon2DTileChangedSignature Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D, nullptr, "Eslon2DTileChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_Eslon2D_eventEslon2DTileChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_Eslon2D_eventEslon2DTileChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DTileChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FEslon2DTileChangedSignature ********************************************

// ********** Begin Class UEslon2DTileMapComponent Function ClearTile ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapComponent_ClearTile_Statics
struct UHT_STATICS
{
	struct Eslon2DTileMapComponent_eventClearTile_Parms
	{
		int32 X;
		int32 Y;
		FName LayerName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearTile constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DTileMapComponent_eventClearTile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearTile constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearTile Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventClearTile_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventClearTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventClearTile_Parms, LayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DTileMapComponent_eventClearTile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ClearTile Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapComponent, nullptr, "ClearTile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DTileMapComponent_eventClearTile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DTileMapComponent_eventClearTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DTileMapComponent_ClearTile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapComponent::execClearTile)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FNameProperty,Z_Param_LayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearTile(Z_Param_X,Z_Param_Y,Z_Param_LayerName);
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapComponent Function ClearTile ********************************

// ********** Begin Class UEslon2DTileMapComponent Function GetTile ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapComponent_GetTile_Statics
struct UHT_STATICS
{
	struct Eslon2DTileMapComponent_eventGetTile_Parms
	{
		int32 X;
		int32 Y;
		FName LayerName;
		FEslon2DTileRef OutTile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTile constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTile;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DTileMapComponent_eventGetTile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTile constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTile Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventGetTile_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventGetTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventGetTile_Parms, LayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutTile = { "OutTile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventGetTile_Parms, OutTile), Z_Construct_UScriptStruct_FEslon2DTileRef, METADATA_PARAMS(0, nullptr) }; // 2d588c55d81d460d053fa81188554dd335ddd385
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DTileMapComponent_eventGetTile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTile Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapComponent, nullptr, "GetTile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DTileMapComponent_eventGetTile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DTileMapComponent_eventGetTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DTileMapComponent_GetTile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapComponent::execGetTile)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FNameProperty,Z_Param_LayerName);
	P_GET_STRUCT_REF(FEslon2DTileRef,Z_Param_Out_OutTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTile(Z_Param_X,Z_Param_Y,Z_Param_LayerName,Z_Param_Out_OutTile);
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapComponent Function GetTile **********************************

// ********** Begin Class UEslon2DTileMapComponent Function InitializeFromAsset ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapComponent_InitializeFromAsset_Statics
struct UHT_STATICS
{
	struct Eslon2DTileMapComponent_eventInitializeFromAsset_Parms
	{
		UEslon2DTileMapAsset* InTileMapAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeFromAsset constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTileMapAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeFromAsset constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeFromAsset Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTileMapAsset = { "InTileMapAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventInitializeFromAsset_Parms, InTileMapAsset), Z_Construct_UClass_UEslon2DTileMapAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTileMapAsset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeFromAsset Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapComponent, nullptr, "InitializeFromAsset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DTileMapComponent_eventInitializeFromAsset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DTileMapComponent_eventInitializeFromAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DTileMapComponent_InitializeFromAsset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapComponent::execInitializeFromAsset)
{
	P_GET_OBJECT(UEslon2DTileMapAsset,Z_Param_InTileMapAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromAsset(Z_Param_InTileMapAsset);
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapComponent Function InitializeFromAsset **********************

// ********** Begin Class UEslon2DTileMapComponent Function IsValidCoordinate **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapComponent_IsValidCoordinate_Statics
struct UHT_STATICS
{
	struct Eslon2DTileMapComponent_eventIsValidCoordinate_Parms
	{
		int32 X;
		int32 Y;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidCoordinate constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DTileMapComponent_eventIsValidCoordinate_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidCoordinate constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidCoordinate Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventIsValidCoordinate_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventIsValidCoordinate_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DTileMapComponent_eventIsValidCoordinate_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidCoordinate Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapComponent, nullptr, "IsValidCoordinate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DTileMapComponent_eventIsValidCoordinate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DTileMapComponent_eventIsValidCoordinate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DTileMapComponent_IsValidCoordinate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapComponent::execIsValidCoordinate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidCoordinate(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapComponent Function IsValidCoordinate ************************

// ********** Begin Class UEslon2DTileMapComponent Function ResizeMap ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapComponent_ResizeMap_Statics
struct UHT_STATICS
{
	struct Eslon2DTileMapComponent_eventResizeMap_Parms
	{
		int32 NewWidth;
		int32 NewHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResizeMap constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResizeMap constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResizeMap Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewWidth = { "NewWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventResizeMap_Parms, NewWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewHeight = { "NewHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventResizeMap_Parms, NewHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewHeight,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ResizeMap Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapComponent, nullptr, "ResizeMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DTileMapComponent_eventResizeMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DTileMapComponent_eventResizeMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DTileMapComponent_ResizeMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapComponent::execResizeMap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResizeMap(Z_Param_NewWidth,Z_Param_NewHeight);
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapComponent Function ResizeMap ********************************

// ********** Begin Class UEslon2DTileMapComponent Function SetTile ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DTileMapComponent_SetTile_Statics
struct UHT_STATICS
{
	struct Eslon2DTileMapComponent_eventSetTile_Parms
	{
		int32 X;
		int32 Y;
		FName LayerName;
		FEslon2DTileRef Tile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTile constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DTileMapComponent_eventSetTile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTile constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTile Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventSetTile_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventSetTile_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventSetTile_Parms, LayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DTileMapComponent_eventSetTile_Parms, Tile), Z_Construct_UScriptStruct_FEslon2DTileRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tile_MetaData), NewProp_Tile_MetaData) }; // 2d588c55d81d460d053fa81188554dd335ddd385
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DTileMapComponent_eventSetTile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTile Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DTileMapComponent, nullptr, "SetTile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DTileMapComponent_eventSetTile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DTileMapComponent_eventSetTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DTileMapComponent_SetTile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DTileMapComponent::execSetTile)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FNameProperty,Z_Param_LayerName);
	P_GET_STRUCT_REF(FEslon2DTileRef,Z_Param_Out_Tile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTile(Z_Param_X,Z_Param_Y,Z_Param_LayerName,Z_Param_Out_Tile);
	P_NATIVE_END;
}
// ********** End Class UEslon2DTileMapComponent Function SetTile **********************************

// ********** Begin Class UEslon2DTileMapComponent *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEslon2DTileMapComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Eslon2D" },
		{ "IncludePath", "Eslon2DTileMapComponent.h" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMapAsset_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTileChanged_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DTileMapComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEslon2DTileMapComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMapAsset;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTileChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEslon2DTileMapComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearTile"), .Pointer = &UEslon2DTileMapComponent::execClearTile },
		{ .NameUTF8 = UTF8TEXT("GetTile"), .Pointer = &UEslon2DTileMapComponent::execGetTile },
		{ .NameUTF8 = UTF8TEXT("InitializeFromAsset"), .Pointer = &UEslon2DTileMapComponent::execInitializeFromAsset },
		{ .NameUTF8 = UTF8TEXT("IsValidCoordinate"), .Pointer = &UEslon2DTileMapComponent::execIsValidCoordinate },
		{ .NameUTF8 = UTF8TEXT("ResizeMap"), .Pointer = &UEslon2DTileMapComponent::execResizeMap },
		{ .NameUTF8 = UTF8TEXT("SetTile"), .Pointer = &UEslon2DTileMapComponent::execSetTile },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEslon2DTileMapComponent_ClearTile, "ClearTile" }, // 36357786cc71084af8caa68092e104ab399c633f
		{ &Z_Construct_UFunction_UEslon2DTileMapComponent_GetTile, "GetTile" }, // 3e4185a059e1c5f10218d6900f3b18a726a65ca0
		{ &Z_Construct_UFunction_UEslon2DTileMapComponent_InitializeFromAsset, "InitializeFromAsset" }, // 9285815e635eaf3aaf4050feedc446948798ca5e
		{ &Z_Construct_UFunction_UEslon2DTileMapComponent_IsValidCoordinate, "IsValidCoordinate" }, // 6e5ff962ddfc47b328c3a38b4f0ed6a1246b0e39
		{ &Z_Construct_UFunction_UEslon2DTileMapComponent_ResizeMap, "ResizeMap" }, // beaf19b1b364a78d915bc170af6d8a4147e8d285
		{ &Z_Construct_UFunction_UEslon2DTileMapComponent_SetTile, "SetTile" }, // 1a80a4ee9a8281f73669082e4f4acd06d6aaaa1b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEslon2DTileMapComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEslon2DTileMapComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TileMapAsset = { "TileMapAsset", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapComponent, TileMapAsset), Z_Construct_UClass_UEslon2DTileMapAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMapAsset_MetaData), NewProp_TileMapAsset_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTileChanged = { "OnTileChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapComponent, OnTileChanged), Z_Construct_UDelegateFunction_Eslon2D_Eslon2DTileChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTileChanged_MetaData), NewProp_OnTileChanged_MetaData) }; // 81b699e1442956a56f2483d0b83b277dfa68a18e
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapComponent, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapComponent, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RuntimeLayers_Inner = { "RuntimeLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DTileLayer, METADATA_PARAMS(0, nullptr) }; // e3bdff520b7022da637acc2adf0a8b4ab3594c6b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RuntimeLayers = { "RuntimeLayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapComponent, RuntimeLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeLayers_MetaData), NewProp_RuntimeLayers_MetaData) }; // e3bdff520b7022da637acc2adf0a8b4ab3594c6b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileMapAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTileChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimeLayers,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEslon2DTileMapComponent Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEslon2DTileMapComponent,
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
static void UEslon2DTileMapComponent_StaticRegisterNativesUEslon2DTileMapComponent()
{
	UClass* Class = UEslon2DTileMapComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEslon2DTileMapComponent;
UClass* Z_Construct_UClass_UEslon2DTileMapComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEslon2DTileMapComponent;
		if (!Z_Registration_Info_UClass_UEslon2DTileMapComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Eslon2DTileMapComponent"),
				Z_Registration_Info_UClass_UEslon2DTileMapComponent.InnerSingleton,
				UEslon2DTileMapComponent_StaticRegisterNativesUEslon2DTileMapComponent,
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
		return Z_Registration_Info_UClass_UEslon2DTileMapComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEslon2DTileMapComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEslon2DTileMapComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEslon2DTileMapComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEslon2DTileMapComponent);
UEslon2DTileMapComponent::~UEslon2DTileMapComponent() {}
// ********** End Class UEslon2DTileMapComponent ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Saved_PluginBuilds_Eslon2D_HostProject_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h__Script_Eslon2D_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEslon2DTileMapComponent, TEXT("UEslon2DTileMapComponent"), &Z_Registration_Info_UClass_UEslon2DTileMapComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEslon2DTileMapComponent), 1691478924U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Saved_PluginBuilds_Eslon2D_HostProject_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h__Script_Eslon2D_f6bc16e949ac8a39f0fe338fb11a6eb50548af43{
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
