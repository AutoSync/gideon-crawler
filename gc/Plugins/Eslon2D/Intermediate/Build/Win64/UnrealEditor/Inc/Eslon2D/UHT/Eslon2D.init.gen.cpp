// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEslon2D_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	ESLON2D_API UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DFlipbookSpawnedSignature__DelegateSignature(ETypeConstructPhase);
	ESLON2D_API UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPaperTilePaintedSignature__DelegateSignature(ETypeConstructPhase);
	ESLON2D_API UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPlaneTileRenderedSignature__DelegateSignature(ETypeConstructPhase);
	ESLON2D_API UFunction* Z_Construct_UDelegateFunction_Eslon2D_Eslon2DTileChangedSignature__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Eslon2D;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Eslon2D(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_Eslon2D.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Eslon2D_Eslon2DFlipbookSpawnedSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPaperTilePaintedSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Eslon2D_Eslon2DPlaneTileRenderedSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Eslon2D_Eslon2DTileChangedSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Eslon2D",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xB27AAC4A,
			0x94B28CA9,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Eslon2D.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Eslon2D.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Eslon2D(Z_Construct_UPackage__Script_Eslon2D, TEXT("/Script/Eslon2D"), Z_Registration_Info_UPackage__Script_Eslon2D, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB27AAC4A, 0x94B28CA9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
