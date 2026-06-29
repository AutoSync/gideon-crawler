// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eslon2DTileMapFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEslon2DTileMapFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Eslon2DEditor(ETypeConstructPhase);
ESLON2DEDITOR_API UClass* Z_Construct_UClass_UEslon2DTileMapFactory(ETypeConstructPhase);
ESLON2DEDITOR_API UClass* Z_Construct_UClass_UEslon2DTileMapFactory(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UEslon2DTileMapFactory ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEslon2DTileMapFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Eslon2DTileMapFactory.h" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTileSet_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialWidth_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialHeight_MetaData[] = {
		{ "Category", "Eslon 2D|Tilemap" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Eslon2DTileMapFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEslon2DTileMapFactory constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialTileSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEslon2DTileMapFactory constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEslon2DTileMapFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEslon2DTileMapFactory Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InitialTileSet = { "InitialTileSet", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapFactory, InitialTileSet), Z_Construct_UClass_UPaperTileSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTileSet_MetaData), NewProp_InitialTileSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InitialWidth = { "InitialWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapFactory, InitialWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialWidth_MetaData), NewProp_InitialWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InitialHeight = { "InitialHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UEslon2DTileMapFactory, InitialHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialHeight_MetaData), NewProp_InitialHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialTileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialHeight,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEslon2DTileMapFactory Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UFactory,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Eslon2DEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEslon2DTileMapFactory,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UEslon2DTileMapFactory;
UClass* Z_Construct_UClass_UEslon2DTileMapFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEslon2DTileMapFactory;
		if (!Z_Registration_Info_UClass_UEslon2DTileMapFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Eslon2DTileMapFactory"),
				Z_Registration_Info_UClass_UEslon2DTileMapFactory.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UEslon2DTileMapFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEslon2DTileMapFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEslon2DTileMapFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEslon2DTileMapFactory.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEslon2DTileMapFactory);
UEslon2DTileMapFactory::~UEslon2DTileMapFactory() {}
// ********** End Class UEslon2DTileMapFactory *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2DEditor_Public_Eslon2DTileMapFactory_h__Script_Eslon2DEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEslon2DTileMapFactory, TEXT("UEslon2DTileMapFactory"), &Z_Registration_Info_UClass_UEslon2DTileMapFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEslon2DTileMapFactory), 3880600861U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2DEditor_Public_Eslon2DTileMapFactory_h__Script_Eslon2DEditor_40d43fff609583cf78cc4d33f6e6ff4f9a61b7a0{
	TEXT("/Script/Eslon2DEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
