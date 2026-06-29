// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eslon2DFlipbookBrushComponent.h"
#include "Eslon2DPaperTileBrushTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslon2DFlipbookBrushComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DFlipbookBrush(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DFlipbookBrushComponent(ETypeConstructPhase);
ESLON2D_API UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DFlipbookSpawnedSignature__DelegateSignature(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DFlipbookBrushComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FEslon2DFlipbookSpawnedSignature **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_Eslon2D_Eslon2DFlipbookSpawnedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_Eslon2D_eventEslon2DFlipbookSpawnedSignature_Parms
	{
		int32 X;
		int32 Y;
		UPaperFlipbookComponent* FlipbookComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FEslon2DFlipbookSpawnedSignature constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FEslon2DFlipbookSpawnedSignature constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FEslon2DFlipbookSpawnedSignature Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DFlipbookSpawnedSignature_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DFlipbookSpawnedSignature_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DFlipbookSpawnedSignature_Parms, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FlipbookComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FEslon2DFlipbookSpawnedSignature Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D, nullptr, "Eslon2DFlipbookSpawnedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_Eslon2D_eventEslon2DFlipbookSpawnedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_Eslon2D_eventEslon2DFlipbookSpawnedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DFlipbookSpawnedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FEslon2DFlipbookSpawnedSignature ****************************************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function ClearSpawnedFlipbooks ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_ClearSpawnedFlipbooks_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventClearSpawnedFlipbooks_Parms
	{
		bool bDestroyOnlyBrushTagged;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "CPP_Default_bDestroyOnlyBrushTagged", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearSpawnedFlipbooks constinit property declarations *****************
	static void NewProp_bDestroyOnlyBrushTagged_SetBit(void* Obj)
	{
		((Eslon2DFlipbookBrushComponent_eventClearSpawnedFlipbooks_Parms*)Obj)->bDestroyOnlyBrushTagged = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnlyBrushTagged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearSpawnedFlipbooks constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearSpawnedFlipbooks Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDestroyOnlyBrushTagged = { "bDestroyOnlyBrushTagged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DFlipbookBrushComponent_eventClearSpawnedFlipbooks_Parms), &UHT_STATICS::NewProp_bDestroyOnlyBrushTagged_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventClearSpawnedFlipbooks_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDestroyOnlyBrushTagged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ClearSpawnedFlipbooks Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "ClearSpawnedFlipbooks", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventClearSpawnedFlipbooks_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventClearSpawnedFlipbooks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_ClearSpawnedFlipbooks(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execClearSpawnedFlipbooks)
{
	P_GET_UBOOL(Z_Param_bDestroyOnlyBrushTagged);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ClearSpawnedFlipbooks(Z_Param_bDestroyOnlyBrushTagged);
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function ClearSpawnedFlipbooks **************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function GetSpawnedFlipbookCount **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_GetSpawnedFlipbookCount_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventGetSpawnedFlipbookCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpawnedFlipbookCount constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpawnedFlipbookCount constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpawnedFlipbookCount Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventGetSpawnedFlipbookCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSpawnedFlipbookCount Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "GetSpawnedFlipbookCount", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventGetSpawnedFlipbookCount_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventGetSpawnedFlipbookCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_GetSpawnedFlipbookCount(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execGetSpawnedFlipbookCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSpawnedFlipbookCount();
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function GetSpawnedFlipbookCount ************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function GetSpawnedFlipbooks **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_GetSpawnedFlipbooks_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventGetSpawnedFlipbooks_Parms
	{
		TArray<UPaperFlipbookComponent*> OutComponents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpawnedFlipbooks constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpawnedFlipbooks constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpawnedFlipbooks Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OutComponents_Inner = { "OutComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperFlipbookComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutComponents = { "OutComponents", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventGetSpawnedFlipbooks_Parms, OutComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutComponents_MetaData), NewProp_OutComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutComponents,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSpawnedFlipbooks Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "GetSpawnedFlipbooks", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventGetSpawnedFlipbooks_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventGetSpawnedFlipbooks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_GetSpawnedFlipbooks(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execGetSpawnedFlipbooks)
{
	P_GET_TARRAY_REF(UPaperFlipbookComponent*,Z_Param_Out_OutComponents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSpawnedFlipbooks(Z_Param_Out_OutComponents);
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function GetSpawnedFlipbooks ****************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function SetBrush *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SetBrush_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventSetBrush_Parms
	{
		FEslon2DFlipbookBrush InBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSetBrush_Parms, InBrush), Z_Construct_UScriptStruct_FEslon2DFlipbookBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 853057935fab689ab050bcc3b78d8b87e18c2c45
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBrush,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBrush Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "SetBrush", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSetBrush_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSetBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SetBrush(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execSetBrush)
{
	P_GET_STRUCT_REF(FEslon2DFlipbookBrush,Z_Param_Out_InBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrush(Z_Param_Out_InBrush);
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function SetBrush ***************************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function SetTargetLayer *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SetTargetLayer_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventSetTargetLayer_Parms
	{
		int32 InLayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTargetLayer constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTargetLayer constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTargetLayer Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InLayerIndex = { "InLayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSetTargetLayer_Parms, InLayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLayerIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTargetLayer Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "SetTargetLayer", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSetTargetLayer_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSetTargetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SetTargetLayer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execSetTargetLayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetLayer(Z_Param_InLayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function SetTargetLayer *********************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function SetTargetTileMap *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SetTargetTileMap_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventSetTargetTileMap_Parms
	{
		UPaperTileMapComponent* InTargetTileMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetTileMap = { "InTargetTileMap", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSetTargetTileMap_Parms, InTargetTileMap), Z_Construct_UClass_UPaperTileMapComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetTileMap_MetaData), NewProp_InTargetTileMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetTileMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTargetTileMap Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "SetTargetTileMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSetTargetTileMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSetTargetTileMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SetTargetTileMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execSetTargetTileMap)
{
	P_GET_OBJECT(UPaperTileMapComponent,Z_Param_InTargetTileMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetTileMap(Z_Param_InTargetTileMap);
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function SetTargetTileMap *******************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function SpawnEllipse *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnEllipse_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms
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
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "CPP_Default_bFilled", "true" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnEllipse constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CenterX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CenterY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadiusX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadiusY;
	static void NewProp_bFilled_SetBit(void* Obj)
	{
		((Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms*)Obj)->bFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnEllipse constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnEllipse Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CenterX = { "CenterX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms, CenterX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CenterY = { "CenterY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms, CenterY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RadiusX = { "RadiusX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms, RadiusX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RadiusY = { "RadiusY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms, RadiusY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilled = { "bFilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms), &UHT_STATICS::NewProp_bFilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
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
// ********** End Function SpawnEllipse Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "SpawnEllipse", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSpawnEllipse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnEllipse(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execSpawnEllipse)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CenterX);
	P_GET_PROPERTY(FIntProperty,Z_Param_CenterY);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadiusX);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadiusY);
	P_GET_UBOOL(Z_Param_bFilled);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SpawnEllipse(Z_Param_CenterX,Z_Param_CenterY,Z_Param_RadiusX,Z_Param_RadiusY,Z_Param_bFilled,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function SpawnEllipse ***********************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function SpawnLine ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnLine_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventSpawnLine_Parms
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
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnLine constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnLine constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnLine Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnLine_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnLine_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndX = { "EndX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnLine_Parms, EndX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndY = { "EndY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnLine_Parms, EndY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnLine_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnLine Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "SpawnLine", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSpawnLine_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSpawnLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnLine(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execSpawnLine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndX);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndY);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SpawnLine(Z_Param_StartX,Z_Param_StartY,Z_Param_EndX,Z_Param_EndY,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function SpawnLine **************************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function SpawnRectangle *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnRectangle_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms
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
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "CPP_Default_bFilled", "true" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnRectangle constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxY;
	static void NewProp_bFilled_SetBit(void* Obj)
	{
		((Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms*)Obj)->bFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnRectangle constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnRectangle Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms, MinX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms, MinY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms, MaxX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms, MaxY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilled = { "bFilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms), &UHT_STATICS::NewProp_bFilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
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
// ********** End Function SpawnRectangle Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "SpawnRectangle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSpawnRectangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnRectangle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execSpawnRectangle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MinX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinY);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxY);
	P_GET_UBOOL(Z_Param_bFilled);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SpawnRectangle(Z_Param_MinX,Z_Param_MinY,Z_Param_MaxX,Z_Param_MaxY,Z_Param_bFilled,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function SpawnRectangle *********************

// ********** Begin Class UEslon2DFlipbookBrushComponent Function SpawnSingle **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnSingle_Statics
struct UHT_STATICS
{
	struct Eslon2DFlipbookBrushComponent_eventSpawnSingle_Parms
	{
		int32 X;
		int32 Y;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnSingle constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnSingle constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnSingle Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnSingle_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnSingle_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnSingle_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DFlipbookBrushComponent_eventSpawnSingle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnSingle Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DFlipbookBrushComponent, nullptr, "SpawnSingle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSpawnSingle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DFlipbookBrushComponent_eventSpawnSingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnSingle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DFlipbookBrushComponent::execSpawnSingle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SpawnSingle(Z_Param_X,Z_Param_Y,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DFlipbookBrushComponent Function SpawnSingle ************************

// ********** Begin Class UEslon2DFlipbookBrushComponent *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEslon2DFlipbookBrushComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Eslon2D" },
		{ "IncludePath", "Eslon2DFlipbookBrushComponent.h" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTileMap_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLayerIndex_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBrush_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlipbookSpawned_MetaData[] = {
		{ "Category", "Eslon 2D|Flipbook Brush" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedFlipbooks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DFlipbookBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEslon2DFlipbookBrushComponent constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTileMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetLayerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentBrush;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlipbookSpawned;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedFlipbooks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedFlipbooks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEslon2DFlipbookBrushComponent constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearSpawnedFlipbooks"), .Pointer = &UEslon2DFlipbookBrushComponent::execClearSpawnedFlipbooks },
		{ .NameUTF8 = UTF8TEXT("GetSpawnedFlipbookCount"), .Pointer = &UEslon2DFlipbookBrushComponent::execGetSpawnedFlipbookCount },
		{ .NameUTF8 = UTF8TEXT("GetSpawnedFlipbooks"), .Pointer = &UEslon2DFlipbookBrushComponent::execGetSpawnedFlipbooks },
		{ .NameUTF8 = UTF8TEXT("SetBrush"), .Pointer = &UEslon2DFlipbookBrushComponent::execSetBrush },
		{ .NameUTF8 = UTF8TEXT("SetTargetLayer"), .Pointer = &UEslon2DFlipbookBrushComponent::execSetTargetLayer },
		{ .NameUTF8 = UTF8TEXT("SetTargetTileMap"), .Pointer = &UEslon2DFlipbookBrushComponent::execSetTargetTileMap },
		{ .NameUTF8 = UTF8TEXT("SpawnEllipse"), .Pointer = &UEslon2DFlipbookBrushComponent::execSpawnEllipse },
		{ .NameUTF8 = UTF8TEXT("SpawnLine"), .Pointer = &UEslon2DFlipbookBrushComponent::execSpawnLine },
		{ .NameUTF8 = UTF8TEXT("SpawnRectangle"), .Pointer = &UEslon2DFlipbookBrushComponent::execSpawnRectangle },
		{ .NameUTF8 = UTF8TEXT("SpawnSingle"), .Pointer = &UEslon2DFlipbookBrushComponent::execSpawnSingle },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_ClearSpawnedFlipbooks, "ClearSpawnedFlipbooks" }, // 8cf39fd1ea3759e3adcf20cdd372934d8819c791
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_GetSpawnedFlipbookCount, "GetSpawnedFlipbookCount" }, // fb4a5541e382d2e945e5927a89408e371d689b64
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_GetSpawnedFlipbooks, "GetSpawnedFlipbooks" }, // d3c91001317e9bffba1a409e09f0d852f56604df
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SetBrush, "SetBrush" }, // 79065458e31e830a5723d865cd3f008eda781cfc
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SetTargetLayer, "SetTargetLayer" }, // 3945619ee892f40d1acafdc993a69e8b84d907ff
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SetTargetTileMap, "SetTargetTileMap" }, // ea4f2ad1538da8d626fa2ae2284b56e24481c860
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnEllipse, "SpawnEllipse" }, // a148ef547b18171b85e81559b22fb591e5d01593
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnLine, "SpawnLine" }, // 1b21e2d23b840ad27af5322a35526262af379f93
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnRectangle, "SpawnRectangle" }, // c2c16266fae91efa1dac63d0edb3951fe1e1989b
		{ &Z_Construct_UFunction_UEslon2DFlipbookBrushComponent_SpawnSingle, "SpawnSingle" }, // 69e228f72140bfb79149ae8988183761f57a3baf
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEslon2DFlipbookBrushComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEslon2DFlipbookBrushComponent Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetTileMap = { "TargetTileMap", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DFlipbookBrushComponent, TargetTileMap), Z_Construct_UClass_UPaperTileMapComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTileMap_MetaData), NewProp_TargetTileMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TargetLayerIndex = { "TargetLayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DFlipbookBrushComponent, TargetLayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLayerIndex_MetaData), NewProp_TargetLayerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CurrentBrush = { "CurrentBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DFlipbookBrushComponent, CurrentBrush), Z_Construct_UScriptStruct_FEslon2DFlipbookBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBrush_MetaData), NewProp_CurrentBrush_MetaData) }; // 853057935fab689ab050bcc3b78d8b87e18c2c45
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnFlipbookSpawned = { "OnFlipbookSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DFlipbookBrushComponent, OnFlipbookSpawned), Z_Construct_UDelegateFunction_Eslon2D_Eslon2DFlipbookSpawnedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlipbookSpawned_MetaData), NewProp_OnFlipbookSpawned_MetaData) }; // cf546ccef85a0caf1bdd182965a65ff6b75cb140
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpawnedFlipbooks_Inner = { "SpawnedFlipbooks", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperFlipbookComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpawnedFlipbooks = { "SpawnedFlipbooks", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DFlipbookBrushComponent, SpawnedFlipbooks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedFlipbooks_MetaData), NewProp_SpawnedFlipbooks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetTileMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnFlipbookSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedFlipbooks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedFlipbooks,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEslon2DFlipbookBrushComponent Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEslon2DFlipbookBrushComponent,
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
static void UEslon2DFlipbookBrushComponent_StaticRegisterNativesUEslon2DFlipbookBrushComponent()
{
	UClass* Class = UEslon2DFlipbookBrushComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEslon2DFlipbookBrushComponent;
UClass* Z_Construct_UClass_UEslon2DFlipbookBrushComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEslon2DFlipbookBrushComponent;
		if (!Z_Registration_Info_UClass_UEslon2DFlipbookBrushComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Eslon2DFlipbookBrushComponent"),
				Z_Registration_Info_UClass_UEslon2DFlipbookBrushComponent.InnerSingleton,
				UEslon2DFlipbookBrushComponent_StaticRegisterNativesUEslon2DFlipbookBrushComponent,
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
		return Z_Registration_Info_UClass_UEslon2DFlipbookBrushComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEslon2DFlipbookBrushComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEslon2DFlipbookBrushComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEslon2DFlipbookBrushComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEslon2DFlipbookBrushComponent);
UEslon2DFlipbookBrushComponent::~UEslon2DFlipbookBrushComponent() {}
// ********** End Class UEslon2DFlipbookBrushComponent *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DFlipbookBrushComponent_h__Script_Eslon2D_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEslon2DFlipbookBrushComponent, TEXT("UEslon2DFlipbookBrushComponent"), &Z_Registration_Info_UClass_UEslon2DFlipbookBrushComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEslon2DFlipbookBrushComponent), 801036673U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DFlipbookBrushComponent_h__Script_Eslon2D_2f585f9ed651e080eb1b36411e4feee2d77a6381{
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
