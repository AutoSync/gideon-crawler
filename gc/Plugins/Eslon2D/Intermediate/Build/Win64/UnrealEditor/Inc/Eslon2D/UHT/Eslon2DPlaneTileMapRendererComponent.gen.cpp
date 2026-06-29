// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eslon2DPlaneTileMapRendererComponent.h"
#include "Eslon2DPaperTileBrushTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslon2DPlaneTileMapRendererComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DAnimatedTileDefinition(ETypeConstructPhase);
ESLON2D_API UScriptStruct* Z_Construct_UScriptStruct_FEslon2DAnimatedTileInstance(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent(ETypeConstructPhase);
ESLON2D_API UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPlaneTileRenderedSignature__DelegateSignature(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DGeneratedTileSprite(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FEslon2DPlaneTileRenderedSignature ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPlaneTileRenderedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_Eslon2D_eventEslon2DPlaneTileRenderedSignature_Parms
	{
		int32 X;
		int32 Y;
		UPaperSpriteComponent* SpriteComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FEslon2DPlaneTileRenderedSignature constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FEslon2DPlaneTileRenderedSignature constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FEslon2DPlaneTileRenderedSignature Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DPlaneTileRenderedSignature_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DPlaneTileRenderedSignature_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Eslon2D_eventEslon2DPlaneTileRenderedSignature_Parms, SpriteComponent), Z_Construct_UClass_UPaperSpriteComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpriteComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FEslon2DPlaneTileRenderedSignature Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D, nullptr, "Eslon2DPlaneTileRenderedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_Eslon2D_eventEslon2DPlaneTileRenderedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_Eslon2D_eventEslon2DPlaneTileRenderedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPlaneTileRenderedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FEslon2DPlaneTileRenderedSignature **************************************

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function BuildRenderPlanes *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_BuildRenderPlanes_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventBuildRenderPlanes_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BuildRenderPlanes constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BuildRenderPlanes constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BuildRenderPlanes Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventBuildRenderPlanes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BuildRenderPlanes Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "BuildRenderPlanes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventBuildRenderPlanes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventBuildRenderPlanes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_BuildRenderPlanes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execBuildRenderPlanes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->BuildRenderPlanes();
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function BuildRenderPlanes ***********

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function ClearAnimationInstances ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_ClearAnimationInstances_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventClearAnimationInstances_Parms
	{
		FName AnimationName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "CPP_Default_AnimationName", "None" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearAnimationInstances constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearAnimationInstances constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearAnimationInstances Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventClearAnimationInstances_Parms, AnimationName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventClearAnimationInstances_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ClearAnimationInstances Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "ClearAnimationInstances", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventClearAnimationInstances_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventClearAnimationInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_ClearAnimationInstances(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execClearAnimationInstances)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimationName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ClearAnimationInstances(Z_Param_AnimationName);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function ClearAnimationInstances *****

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function ClearRenderPlanes *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_ClearRenderPlanes_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventClearRenderPlanes_Parms
	{
		bool bDestroyOnlyTagged;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "CPP_Default_bDestroyOnlyTagged", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearRenderPlanes constinit property declarations *********************
	static void NewProp_bDestroyOnlyTagged_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventClearRenderPlanes_Parms*)Obj)->bDestroyOnlyTagged = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnlyTagged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearRenderPlanes constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearRenderPlanes Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDestroyOnlyTagged = { "bDestroyOnlyTagged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventClearRenderPlanes_Parms), &UHT_STATICS::NewProp_bDestroyOnlyTagged_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventClearRenderPlanes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDestroyOnlyTagged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ClearRenderPlanes Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "ClearRenderPlanes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventClearRenderPlanes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventClearRenderPlanes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_ClearRenderPlanes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execClearRenderPlanes)
{
	P_GET_UBOOL(Z_Param_bDestroyOnlyTagged);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ClearRenderPlanes(Z_Param_bDestroyOnlyTagged);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function ClearRenderPlanes ***********

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function DefineAnimation ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_DefineAnimation_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventDefineAnimation_Parms
	{
		FEslon2DAnimatedTileDefinition Definition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DefineAnimation constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventDefineAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DefineAnimation constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DefineAnimation Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimation_Parms, Definition), Z_Construct_UScriptStruct_FEslon2DAnimatedTileDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // b90085268710d756921ac742beb587be12c1f64c
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimation_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DefineAnimation Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "DefineAnimation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventDefineAnimation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventDefineAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_DefineAnimation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execDefineAnimation)
{
	P_GET_STRUCT_REF(FEslon2DAnimatedTileDefinition,Z_Param_Out_Definition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DefineAnimation(Z_Param_Out_Definition);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function DefineAnimation *************

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function DefineAnimationFromTileIndices 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_DefineAnimationFromTileIndices_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms
	{
		FName AnimationName;
		UPaperTileSet* TileSet;
		TArray<int32> TileIndices;
		float FramesPerSecond;
		bool bLooping;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "CPP_Default_bLooping", "true" },
		{ "CPP_Default_FramesPerSecond", "8.000000" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DefineAnimationFromTileIndices constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileIndices;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FramesPerSecond;
	static void NewProp_bLooping_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms*)Obj)->bLooping = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DefineAnimationFromTileIndices constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DefineAnimationFromTileIndices Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms, AnimationName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms, TileSet), Z_Construct_UClass_UPaperTileSet, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TileIndices_Inner = { "TileIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TileIndices = { "TileIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms, TileIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndices_MetaData), NewProp_TileIndices_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms, FramesPerSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms), &UHT_STATICS::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FramesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DefineAnimationFromTileIndices Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "DefineAnimationFromTileIndices", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileIndices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_DefineAnimationFromTileIndices(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execDefineAnimationFromTileIndices)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimationName);
	P_GET_OBJECT(UPaperTileSet,Z_Param_TileSet);
	P_GET_TARRAY_REF(int32,Z_Param_Out_TileIndices);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FramesPerSecond);
	P_GET_UBOOL(Z_Param_bLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DefineAnimationFromTileIndices(Z_Param_AnimationName,Z_Param_TileSet,Z_Param_Out_TileIndices,Z_Param_FramesPerSecond,Z_Param_bLooping);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function DefineAnimationFromTileIndices 

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function DefineAnimationFromTileRow 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_DefineAnimationFromTileRow_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms
	{
		FName AnimationName;
		UPaperTileSet* TileSet;
		int32 Row;
		TArray<int32> Columns;
		float FramesPerSecond;
		bool bLooping;
		bool bOneBasedCoordinates;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "CPP_Default_bLooping", "true" },
		{ "CPP_Default_bOneBasedCoordinates", "true" },
		{ "CPP_Default_FramesPerSecond", "8.000000" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DefineAnimationFromTileRow constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Columns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FramesPerSecond;
	static void NewProp_bLooping_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms*)Obj)->bLooping = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bOneBasedCoordinates_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms*)Obj)->bOneBasedCoordinates = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneBasedCoordinates;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DefineAnimationFromTileRow constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DefineAnimationFromTileRow Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms, AnimationName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms, TileSet), Z_Construct_UClass_UPaperTileSet, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms, Row), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Columns_Inner = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms, Columns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms, FramesPerSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms), &UHT_STATICS::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOneBasedCoordinates = { "bOneBasedCoordinates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms), &UHT_STATICS::NewProp_bOneBasedCoordinates_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Columns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FramesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOneBasedCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DefineAnimationFromTileRow Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "DefineAnimationFromTileRow", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventDefineAnimationFromTileRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_DefineAnimationFromTileRow(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execDefineAnimationFromTileRow)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimationName);
	P_GET_OBJECT(UPaperTileSet,Z_Param_TileSet);
	P_GET_PROPERTY(FIntProperty,Z_Param_Row);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Columns);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FramesPerSecond);
	P_GET_UBOOL(Z_Param_bLooping);
	P_GET_UBOOL(Z_Param_bOneBasedCoordinates);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DefineAnimationFromTileRow(Z_Param_AnimationName,Z_Param_TileSet,Z_Param_Row,Z_Param_Out_Columns,Z_Param_FramesPerSecond,Z_Param_bLooping,Z_Param_bOneBasedCoordinates);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function DefineAnimationFromTileRow **

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function HasAnimationDefinition ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_HasAnimationDefinition_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventHasAnimationDefinition_Parms
	{
		FName AnimationName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAnimationDefinition constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventHasAnimationDefinition_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAnimationDefinition constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAnimationDefinition Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventHasAnimationDefinition_Parms, AnimationName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventHasAnimationDefinition_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasAnimationDefinition Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "HasAnimationDefinition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventHasAnimationDefinition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventHasAnimationDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_HasAnimationDefinition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execHasAnimationDefinition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimationName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnimationDefinition(Z_Param_AnimationName);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function HasAnimationDefinition ******

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function PlaceAnimationEllipse *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationEllipse_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms
	{
		FName AnimationName;
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
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "CPP_Default_bFilled", "true" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlaceAnimationEllipse constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CenterX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CenterY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadiusX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadiusY;
	static void NewProp_bFilled_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms*)Obj)->bFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlaceAnimationEllipse constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlaceAnimationEllipse Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms, AnimationName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CenterX = { "CenterX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms, CenterX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CenterY = { "CenterY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms, CenterY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RadiusX = { "RadiusX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms, RadiusX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RadiusY = { "RadiusY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms, RadiusY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilled = { "bFilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms), &UHT_STATICS::NewProp_bFilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RadiusX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RadiusY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlaceAnimationEllipse Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "PlaceAnimationEllipse", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationEllipse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationEllipse(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execPlaceAnimationEllipse)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimationName);
	P_GET_PROPERTY(FIntProperty,Z_Param_CenterX);
	P_GET_PROPERTY(FIntProperty,Z_Param_CenterY);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadiusX);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadiusY);
	P_GET_UBOOL(Z_Param_bFilled);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PlaceAnimationEllipse(Z_Param_AnimationName,Z_Param_CenterX,Z_Param_CenterY,Z_Param_RadiusX,Z_Param_RadiusY,Z_Param_bFilled,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function PlaceAnimationEllipse *******

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function PlaceAnimationLine ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationLine_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms
	{
		FName AnimationName;
		int32 StartX;
		int32 StartY;
		int32 EndX;
		int32 EndY;
		int32 LayerIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlaceAnimationLine constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlaceAnimationLine constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlaceAnimationLine Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms, AnimationName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndX = { "EndX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms, EndX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndY = { "EndY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms, EndY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlaceAnimationLine Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "PlaceAnimationLine", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationLine(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execPlaceAnimationLine)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimationName);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndX);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndY);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PlaceAnimationLine(Z_Param_AnimationName,Z_Param_StartX,Z_Param_StartY,Z_Param_EndX,Z_Param_EndY,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function PlaceAnimationLine **********

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function PlaceAnimationRectangle ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationRectangle_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms
	{
		FName AnimationName;
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
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "CPP_Default_bFilled", "true" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlaceAnimationRectangle constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxY;
	static void NewProp_bFilled_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms*)Obj)->bFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlaceAnimationRectangle constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlaceAnimationRectangle Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms, AnimationName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms, MinX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms, MinY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms, MaxX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms, MaxY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilled = { "bFilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms), &UHT_STATICS::NewProp_bFilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlaceAnimationRectangle Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "PlaceAnimationRectangle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationRectangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationRectangle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execPlaceAnimationRectangle)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimationName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinY);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxY);
	P_GET_UBOOL(Z_Param_bFilled);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PlaceAnimationRectangle(Z_Param_AnimationName,Z_Param_MinX,Z_Param_MinY,Z_Param_MaxX,Z_Param_MaxY,Z_Param_bFilled,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function PlaceAnimationRectangle *****

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function PlaceAnimationSingle ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationSingle_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationSingle_Parms
	{
		FName AnimationName;
		int32 X;
		int32 Y;
		int32 LayerIndex;
		float StartTimeOffset;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Animated Tile" },
		{ "CPP_Default_LayerIndex", "-1" },
		{ "CPP_Default_StartTimeOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlaceAnimationSingle constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlaceAnimationSingle constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlaceAnimationSingle Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationSingle_Parms, AnimationName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationSingle_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationSingle_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationSingle_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartTimeOffset = { "StartTimeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationSingle_Parms, StartTimeOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationSingle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartTimeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlaceAnimationSingle Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "PlaceAnimationSingle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationSingle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventPlaceAnimationSingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationSingle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execPlaceAnimationSingle)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimationName);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTimeOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PlaceAnimationSingle(Z_Param_AnimationName,Z_Param_X,Z_Param_Y,Z_Param_LayerIndex,Z_Param_StartTimeOffset);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function PlaceAnimationSingle ********

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function SetSourceTileMapVisible ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_SetSourceTileMapVisible_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventSetSourceTileMapVisible_Parms
	{
		bool bVisible;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSourceTileMapVisible constinit property declarations ***************
	static void NewProp_bVisible_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventSetSourceTileMapVisible_Parms*)Obj)->bVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DPlaneTileMapRendererComponent_eventSetSourceTileMapVisible_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSourceTileMapVisible constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSourceTileMapVisible Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventSetSourceTileMapVisible_Parms), &UHT_STATICS::NewProp_bVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DPlaneTileMapRendererComponent_eventSetSourceTileMapVisible_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSourceTileMapVisible Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "SetSourceTileMapVisible", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventSetSourceTileMapVisible_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventSetSourceTileMapVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_SetSourceTileMapVisible(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execSetSourceTileMapVisible)
{
	P_GET_UBOOL(Z_Param_bVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSourceTileMapVisible(Z_Param_bVisible);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function SetSourceTileMapVisible *****

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Function SetTargetTileMap **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_SetTargetTileMap_Statics
struct UHT_STATICS
{
	struct Eslon2DPlaneTileMapRendererComponent_eventSetTargetTileMap_Parms
	{
		UPaperTileMapComponent* InTargetTileMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetTileMap = { "InTargetTileMap", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DPlaneTileMapRendererComponent_eventSetTargetTileMap_Parms, InTargetTileMap), Z_Construct_UClass_UPaperTileMapComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetTileMap_MetaData), NewProp_InTargetTileMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetTileMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTargetTileMap Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, nullptr, "SetTargetTileMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventSetTargetTileMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DPlaneTileMapRendererComponent_eventSetTargetTileMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_SetTargetTileMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DPlaneTileMapRendererComponent::execSetTargetTileMap)
{
	P_GET_OBJECT(UPaperTileMapComponent,Z_Param_InTargetTileMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetTileMap(Z_Param_InTargetTileMap);
	P_NATIVE_END;
}
// ********** End Class UEslon2DPlaneTileMapRendererComponent Function SetTargetTileMap ************

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Eslon2D" },
		{ "IncludePath", "Eslon2DPlaneTileMapRendererComponent.h" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTileMap_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayersToRender_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderStaticTiles_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBatchStaticTilesByChunk_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSizeInTiles_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideSourceTileMapOnBuild_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipStaticTilesCoveredByAnimation_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttachPlanesToTileMap_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableChunkDistanceCulling_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticChunkCullDistance_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableChunkDistanceCulling" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedTileCullDistance_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableChunkDistanceCulling" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChunksInHLOD_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneComponentTag_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkComponentTag_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackPixelsPerUnrealUnit_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedTileDefinitions_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedTileInstances_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTilePlaneRendered_MetaData[] = {
		{ "Category", "Eslon 2D|Plane Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderedSpriteComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderedChunkComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DPlaneTileMapRendererComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTileMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayersToRender_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayersToRender;
	static void NewProp_bRenderStaticTiles_SetBit(void* Obj)
	{
		((UEslon2DPlaneTileMapRendererComponent*)Obj)->bRenderStaticTiles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderStaticTiles;
	static void NewProp_bBatchStaticTilesByChunk_SetBit(void* Obj)
	{
		((UEslon2DPlaneTileMapRendererComponent*)Obj)->bBatchStaticTilesByChunk = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBatchStaticTilesByChunk;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkSizeInTiles;
	static void NewProp_bHideSourceTileMapOnBuild_SetBit(void* Obj)
	{
		((UEslon2DPlaneTileMapRendererComponent*)Obj)->bHideSourceTileMapOnBuild = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideSourceTileMapOnBuild;
	static void NewProp_bSkipStaticTilesCoveredByAnimation_SetBit(void* Obj)
	{
		((UEslon2DPlaneTileMapRendererComponent*)Obj)->bSkipStaticTilesCoveredByAnimation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipStaticTilesCoveredByAnimation;
	static void NewProp_bAttachPlanesToTileMap_SetBit(void* Obj)
	{
		((UEslon2DPlaneTileMapRendererComponent*)Obj)->bAttachPlanesToTileMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachPlanesToTileMap;
	static void NewProp_bEnableChunkDistanceCulling_SetBit(void* Obj)
	{
		((UEslon2DPlaneTileMapRendererComponent*)Obj)->bEnableChunkDistanceCulling = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableChunkDistanceCulling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticChunkCullDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedTileCullDistance;
	static void NewProp_bIncludeChunksInHLOD_SetBit(void* Obj)
	{
		((UEslon2DPlaneTileMapRendererComponent*)Obj)->bIncludeChunksInHLOD = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChunksInHLOD;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlaneComponentTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChunkComponentTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallbackPixelsPerUnrealUnit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimatedTileDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimatedTileDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimatedTileInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimatedTileInstances;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTilePlaneRendered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderedSpriteComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderedSpriteComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderedChunkComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderedChunkComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteCache_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpriteCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpriteCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEslon2DPlaneTileMapRendererComponent constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BuildRenderPlanes"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execBuildRenderPlanes },
		{ .NameUTF8 = UTF8TEXT("ClearAnimationInstances"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execClearAnimationInstances },
		{ .NameUTF8 = UTF8TEXT("ClearRenderPlanes"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execClearRenderPlanes },
		{ .NameUTF8 = UTF8TEXT("DefineAnimation"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execDefineAnimation },
		{ .NameUTF8 = UTF8TEXT("DefineAnimationFromTileIndices"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execDefineAnimationFromTileIndices },
		{ .NameUTF8 = UTF8TEXT("DefineAnimationFromTileRow"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execDefineAnimationFromTileRow },
		{ .NameUTF8 = UTF8TEXT("HasAnimationDefinition"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execHasAnimationDefinition },
		{ .NameUTF8 = UTF8TEXT("PlaceAnimationEllipse"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execPlaceAnimationEllipse },
		{ .NameUTF8 = UTF8TEXT("PlaceAnimationLine"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execPlaceAnimationLine },
		{ .NameUTF8 = UTF8TEXT("PlaceAnimationRectangle"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execPlaceAnimationRectangle },
		{ .NameUTF8 = UTF8TEXT("PlaceAnimationSingle"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execPlaceAnimationSingle },
		{ .NameUTF8 = UTF8TEXT("SetSourceTileMapVisible"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execSetSourceTileMapVisible },
		{ .NameUTF8 = UTF8TEXT("SetTargetTileMap"), .Pointer = &UEslon2DPlaneTileMapRendererComponent::execSetTargetTileMap },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_BuildRenderPlanes, "BuildRenderPlanes" }, // 4543aca7bf7f020dc938dd2cad4ca8f326e919d3
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_ClearAnimationInstances, "ClearAnimationInstances" }, // 71d4657894fabafe75bc13cd055a92249a146ad2
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_ClearRenderPlanes, "ClearRenderPlanes" }, // 61c692cf7fcfecc304cd8f37fefbead55558af02
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_DefineAnimation, "DefineAnimation" }, // 8ee8a05b537a46c151cb67e552c371ea4397e910
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_DefineAnimationFromTileIndices, "DefineAnimationFromTileIndices" }, // 2a831957a61b1996c31ad5bccb646fcbcb210a82
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_DefineAnimationFromTileRow, "DefineAnimationFromTileRow" }, // eafef859599115fcb446a5b8a14a61c99c405acc
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_HasAnimationDefinition, "HasAnimationDefinition" }, // 518da1040d81c041a7312a6c37277fa7e9600492
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationEllipse, "PlaceAnimationEllipse" }, // 33a0aacef9336bec594e6b7a4315153d570c9444
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationLine, "PlaceAnimationLine" }, // ad9f918bc51bd92ac1287436e50cb72469297a10
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationRectangle, "PlaceAnimationRectangle" }, // 0e5364606611b5c7bac1dc1e76989ddf285fdee5
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_PlaceAnimationSingle, "PlaceAnimationSingle" }, // 93fbe145f31998735f5c2c28e65a2dd35f8df239
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_SetSourceTileMapVisible, "SetSourceTileMapVisible" }, // 941375dd3ba389b6ae6f818bf232c8e4238c2041
		{ &Z_Construct_UFunction_UEslon2DPlaneTileMapRendererComponent_SetTargetTileMap, "SetTargetTileMap" }, // 08cc485e217424805ddbdc2e09e0ac3ca4403547
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEslon2DPlaneTileMapRendererComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEslon2DPlaneTileMapRendererComponent Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetTileMap = { "TargetTileMap", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, TargetTileMap), Z_Construct_UClass_UPaperTileMapComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTileMap_MetaData), NewProp_TargetTileMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayersToRender_Inner = { "LayersToRender", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LayersToRender = { "LayersToRender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, LayersToRender), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayersToRender_MetaData), NewProp_LayersToRender_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRenderStaticTiles = { "bRenderStaticTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEslon2DPlaneTileMapRendererComponent), &UHT_STATICS::NewProp_bRenderStaticTiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderStaticTiles_MetaData), NewProp_bRenderStaticTiles_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBatchStaticTilesByChunk = { "bBatchStaticTilesByChunk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEslon2DPlaneTileMapRendererComponent), &UHT_STATICS::NewProp_bBatchStaticTilesByChunk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBatchStaticTilesByChunk_MetaData), NewProp_bBatchStaticTilesByChunk_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ChunkSizeInTiles = { "ChunkSizeInTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, ChunkSizeInTiles), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSizeInTiles_MetaData), NewProp_ChunkSizeInTiles_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHideSourceTileMapOnBuild = { "bHideSourceTileMapOnBuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEslon2DPlaneTileMapRendererComponent), &UHT_STATICS::NewProp_bHideSourceTileMapOnBuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideSourceTileMapOnBuild_MetaData), NewProp_bHideSourceTileMapOnBuild_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSkipStaticTilesCoveredByAnimation = { "bSkipStaticTilesCoveredByAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEslon2DPlaneTileMapRendererComponent), &UHT_STATICS::NewProp_bSkipStaticTilesCoveredByAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipStaticTilesCoveredByAnimation_MetaData), NewProp_bSkipStaticTilesCoveredByAnimation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAttachPlanesToTileMap = { "bAttachPlanesToTileMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEslon2DPlaneTileMapRendererComponent), &UHT_STATICS::NewProp_bAttachPlanesToTileMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachPlanesToTileMap_MetaData), NewProp_bAttachPlanesToTileMap_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableChunkDistanceCulling = { "bEnableChunkDistanceCulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEslon2DPlaneTileMapRendererComponent), &UHT_STATICS::NewProp_bEnableChunkDistanceCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableChunkDistanceCulling_MetaData), NewProp_bEnableChunkDistanceCulling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StaticChunkCullDistance = { "StaticChunkCullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, StaticChunkCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticChunkCullDistance_MetaData), NewProp_StaticChunkCullDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AnimatedTileCullDistance = { "AnimatedTileCullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, AnimatedTileCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedTileCullDistance_MetaData), NewProp_AnimatedTileCullDistance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeChunksInHLOD = { "bIncludeChunksInHLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEslon2DPlaneTileMapRendererComponent), &UHT_STATICS::NewProp_bIncludeChunksInHLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeChunksInHLOD_MetaData), NewProp_bIncludeChunksInHLOD_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PlaneComponentTag = { "PlaneComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, PlaneComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneComponentTag_MetaData), NewProp_PlaneComponentTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ChunkComponentTag = { "ChunkComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, ChunkComponentTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkComponentTag_MetaData), NewProp_ChunkComponentTag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FallbackPixelsPerUnrealUnit = { "FallbackPixelsPerUnrealUnit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, FallbackPixelsPerUnrealUnit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackPixelsPerUnrealUnit_MetaData), NewProp_FallbackPixelsPerUnrealUnit_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AnimatedTileDefinitions_Inner = { "AnimatedTileDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DAnimatedTileDefinition, METADATA_PARAMS(0, nullptr) }; // b90085268710d756921ac742beb587be12c1f64c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AnimatedTileDefinitions = { "AnimatedTileDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, AnimatedTileDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedTileDefinitions_MetaData), NewProp_AnimatedTileDefinitions_MetaData) }; // b90085268710d756921ac742beb587be12c1f64c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AnimatedTileInstances_Inner = { "AnimatedTileInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEslon2DAnimatedTileInstance, METADATA_PARAMS(0, nullptr) }; // c3cecdaf0a903fbb5ab97033c77e638132a409ce
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AnimatedTileInstances = { "AnimatedTileInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, AnimatedTileInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedTileInstances_MetaData), NewProp_AnimatedTileInstances_MetaData) }; // c3cecdaf0a903fbb5ab97033c77e638132a409ce
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTilePlaneRendered = { "OnTilePlaneRendered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, OnTilePlaneRendered), Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPlaneTileRenderedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTilePlaneRendered_MetaData), NewProp_OnTilePlaneRendered_MetaData) }; // e8ae1d0c883c6ff387de1950adaa559cb63511db
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RenderedSpriteComponents_Inner = { "RenderedSpriteComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperSpriteComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RenderedSpriteComponents = { "RenderedSpriteComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, RenderedSpriteComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderedSpriteComponents_MetaData), NewProp_RenderedSpriteComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RenderedChunkComponents_Inner = { "RenderedChunkComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperGroupedSpriteComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RenderedChunkComponents = { "RenderedChunkComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, RenderedChunkComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderedChunkComponents_MetaData), NewProp_RenderedChunkComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpriteCache_ValueProp = { "SpriteCache", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEslon2DGeneratedTileSprite, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SpriteCache_Key_KeyProp = { "SpriteCache_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_SpriteCache = { "SpriteCache", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DPlaneTileMapRendererComponent, SpriteCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteCache_MetaData), NewProp_SpriteCache_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetTileMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayersToRender_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayersToRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRenderStaticTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBatchStaticTilesByChunk,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChunkSizeInTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHideSourceTileMapOnBuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSkipStaticTilesCoveredByAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAttachPlanesToTileMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableChunkDistanceCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticChunkCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimatedTileCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeChunksInHLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaneComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChunkComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FallbackPixelsPerUnrealUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimatedTileDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimatedTileDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimatedTileInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimatedTileInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTilePlaneRendered,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderedSpriteComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderedSpriteComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderedChunkComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderedChunkComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpriteCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpriteCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpriteCache,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEslon2DPlaneTileMapRendererComponent Property Definitions *****************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent,
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
static void UEslon2DPlaneTileMapRendererComponent_StaticRegisterNativesUEslon2DPlaneTileMapRendererComponent()
{
	UClass* Class = UEslon2DPlaneTileMapRendererComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEslon2DPlaneTileMapRendererComponent;
UClass* Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEslon2DPlaneTileMapRendererComponent;
		if (!Z_Registration_Info_UClass_UEslon2DPlaneTileMapRendererComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Eslon2DPlaneTileMapRendererComponent"),
				Z_Registration_Info_UClass_UEslon2DPlaneTileMapRendererComponent.InnerSingleton,
				UEslon2DPlaneTileMapRendererComponent_StaticRegisterNativesUEslon2DPlaneTileMapRendererComponent,
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
		return Z_Registration_Info_UClass_UEslon2DPlaneTileMapRendererComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEslon2DPlaneTileMapRendererComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEslon2DPlaneTileMapRendererComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEslon2DPlaneTileMapRendererComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEslon2DPlaneTileMapRendererComponent);
UEslon2DPlaneTileMapRendererComponent::~UEslon2DPlaneTileMapRendererComponent() {}
// ********** End Class UEslon2DPlaneTileMapRendererComponent **************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPlaneTileMapRendererComponent_h__Script_Eslon2D_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEslon2DPlaneTileMapRendererComponent, TEXT("UEslon2DPlaneTileMapRendererComponent"), &Z_Registration_Info_UClass_UEslon2DPlaneTileMapRendererComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEslon2DPlaneTileMapRendererComponent), 1012767914U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPlaneTileMapRendererComponent_h__Script_Eslon2D_0171490911c08216680ce7e5d17be5a98f9e9cf5{
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
