// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eslon2DGeneratedTileSprite.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslon2DGeneratedTileSprite() {}

// ********** Begin Cross Module References ********************************************************
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DGeneratedTileSprite(ETypeConstructPhase);
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DGeneratedTileSprite(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UEslon2DGeneratedTileSprite Function GetSourceTileIndex ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DGeneratedTileSprite_GetSourceTileIndex_Statics
struct UHT_STATICS
{
	struct Eslon2DGeneratedTileSprite_eventGetSourceTileIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Generated Tile Sprite" },
		{ "ModuleRelativePath", "Public/Eslon2DGeneratedTileSprite.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSourceTileIndex constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSourceTileIndex constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSourceTileIndex Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DGeneratedTileSprite_eventGetSourceTileIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSourceTileIndex Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DGeneratedTileSprite, nullptr, "GetSourceTileIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DGeneratedTileSprite_eventGetSourceTileIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DGeneratedTileSprite_eventGetSourceTileIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DGeneratedTileSprite_GetSourceTileIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DGeneratedTileSprite::execGetSourceTileIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSourceTileIndex();
	P_NATIVE_END;
}
// ********** End Class UEslon2DGeneratedTileSprite Function GetSourceTileIndex ********************

// ********** Begin Class UEslon2DGeneratedTileSprite Function GetSourceTileSet ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DGeneratedTileSprite_GetSourceTileSet_Statics
struct UHT_STATICS
{
	struct Eslon2DGeneratedTileSprite_eventGetSourceTileSet_Parms
	{
		UPaperTileSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Generated Tile Sprite" },
		{ "ModuleRelativePath", "Public/Eslon2DGeneratedTileSprite.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSourceTileSet constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSourceTileSet constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSourceTileSet Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DGeneratedTileSprite_eventGetSourceTileSet_Parms, ReturnValue), Z_Construct_UClass_UPaperTileSet, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSourceTileSet Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DGeneratedTileSprite, nullptr, "GetSourceTileSet", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DGeneratedTileSprite_eventGetSourceTileSet_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DGeneratedTileSprite_eventGetSourceTileSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DGeneratedTileSprite_GetSourceTileSet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DGeneratedTileSprite::execGetSourceTileSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPaperTileSet**)Z_Param__Result=P_THIS->GetSourceTileSet();
	P_NATIVE_END;
}
// ********** End Class UEslon2DGeneratedTileSprite Function GetSourceTileSet **********************

// ********** Begin Class UEslon2DGeneratedTileSprite Function InitializeFromTile ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEslon2DGeneratedTileSprite_InitializeFromTile_Statics
struct UHT_STATICS
{
	struct Eslon2DGeneratedTileSprite_eventInitializeFromTile_Parms
	{
		UPaperTileSet* InTileSet;
		int32 InTileIndex;
		float InPixelsPerUnrealUnit;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Eslon 2D|Generated Tile Sprite" },
		{ "ModuleRelativePath", "Public/Eslon2DGeneratedTileSprite.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeFromTile constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InTileIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPixelsPerUnrealUnit;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Eslon2DGeneratedTileSprite_eventInitializeFromTile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeFromTile constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeFromTile Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTileSet = { "InTileSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DGeneratedTileSprite_eventInitializeFromTile_Parms, InTileSet), Z_Construct_UClass_UPaperTileSet, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InTileIndex = { "InTileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DGeneratedTileSprite_eventInitializeFromTile_Parms, InTileIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InPixelsPerUnrealUnit = { "InPixelsPerUnrealUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Eslon2DGeneratedTileSprite_eventInitializeFromTile_Parms, InPixelsPerUnrealUnit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Eslon2DGeneratedTileSprite_eventInitializeFromTile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPixelsPerUnrealUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeFromTile Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEslon2DGeneratedTileSprite, nullptr, "InitializeFromTile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Eslon2DGeneratedTileSprite_eventInitializeFromTile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Eslon2DGeneratedTileSprite_eventInitializeFromTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEslon2DGeneratedTileSprite_InitializeFromTile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEslon2DGeneratedTileSprite::execInitializeFromTile)
{
	P_GET_OBJECT(UPaperTileSet,Z_Param_InTileSet);
	P_GET_PROPERTY(FIntProperty,Z_Param_InTileIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPixelsPerUnrealUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeFromTile(Z_Param_InTileSet,Z_Param_InTileIndex,Z_Param_InPixelsPerUnrealUnit);
	P_NATIVE_END;
}
// ********** End Class UEslon2DGeneratedTileSprite Function InitializeFromTile ********************

// ********** Begin Class UEslon2DGeneratedTileSprite **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEslon2DGeneratedTileSprite_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Eslon2DGeneratedTileSprite.h" },
		{ "ModuleRelativePath", "Public/Eslon2DGeneratedTileSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTileSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DGeneratedTileSprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Eslon2DGeneratedTileSprite.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEslon2DGeneratedTileSprite constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceTileIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEslon2DGeneratedTileSprite constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSourceTileIndex"), .Pointer = &UEslon2DGeneratedTileSprite::execGetSourceTileIndex },
		{ .NameUTF8 = UTF8TEXT("GetSourceTileSet"), .Pointer = &UEslon2DGeneratedTileSprite::execGetSourceTileSet },
		{ .NameUTF8 = UTF8TEXT("InitializeFromTile"), .Pointer = &UEslon2DGeneratedTileSprite::execInitializeFromTile },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEslon2DGeneratedTileSprite_GetSourceTileIndex, "GetSourceTileIndex" }, // aca707ad6e5ffe9e10ac932ec4f5735031dfa56b
		{ &Z_Construct_UFunction_UEslon2DGeneratedTileSprite_GetSourceTileSet, "GetSourceTileSet" }, // bfea36d3c2e5b6d181c2a271dcb26ca5bd0b4941
		{ &Z_Construct_UFunction_UEslon2DGeneratedTileSprite_InitializeFromTile, "InitializeFromTile" }, // 1a753b4a843c7077ed9925956feab6bb5e010a0b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEslon2DGeneratedTileSprite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEslon2DGeneratedTileSprite Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceTileSet = { "SourceTileSet", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DGeneratedTileSprite, SourceTileSet), Z_Construct_UClass_UPaperTileSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTileSet_MetaData), NewProp_SourceTileSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SourceTileIndex = { "SourceTileIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DGeneratedTileSprite, SourceTileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTileIndex_MetaData), NewProp_SourceTileIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceTileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceTileIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEslon2DGeneratedTileSprite Property Definitions ***************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UPaperSprite,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2D,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEslon2DGeneratedTileSprite,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UEslon2DGeneratedTileSprite_StaticRegisterNativesUEslon2DGeneratedTileSprite()
{
	UClass* Class = UEslon2DGeneratedTileSprite::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEslon2DGeneratedTileSprite;
UClass* Z_Construct_UClass_UEslon2DGeneratedTileSprite(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEslon2DGeneratedTileSprite;
		if (!Z_Registration_Info_UClass_UEslon2DGeneratedTileSprite.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Eslon2DGeneratedTileSprite"),
				Z_Registration_Info_UClass_UEslon2DGeneratedTileSprite.InnerSingleton,
				UEslon2DGeneratedTileSprite_StaticRegisterNativesUEslon2DGeneratedTileSprite,
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
		return Z_Registration_Info_UClass_UEslon2DGeneratedTileSprite.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEslon2DGeneratedTileSprite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEslon2DGeneratedTileSprite.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEslon2DGeneratedTileSprite.OuterSingleton;
}
#undef UHT_STATICS
UEslon2DGeneratedTileSprite::UEslon2DGeneratedTileSprite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEslon2DGeneratedTileSprite);
UEslon2DGeneratedTileSprite::~UEslon2DGeneratedTileSprite() {}
// ********** End Class UEslon2DGeneratedTileSprite ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DGeneratedTileSprite_h__Script_Eslon2D_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEslon2DGeneratedTileSprite, TEXT("UEslon2DGeneratedTileSprite"), &Z_Registration_Info_UClass_UEslon2DGeneratedTileSprite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEslon2DGeneratedTileSprite), 3700286256U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DGeneratedTileSprite_h__Script_Eslon2D_c377ce2c12000deaa89aee1aa561f5e86b5640e6{
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
