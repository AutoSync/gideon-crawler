// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Eslon2DTileMapComponent.h"

#ifdef ESLON2D_Eslon2DTileMapComponent_generated_h
#error "Eslon2DTileMapComponent.generated.h already included, missing '#pragma once' in Eslon2DTileMapComponent.h"
#endif
#define ESLON2D_Eslon2DTileMapComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEslon2DTileMapAsset;
struct FEslon2DTileRef;

// ********** Begin Class UEslon2DTileMapComponent *************************************************
#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValidCoordinate); \
	DECLARE_FUNCTION(execClearTile); \
	DECLARE_FUNCTION(execGetTile); \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execResizeMap); \
	DECLARE_FUNCTION(execInitializeFromAsset);


struct Z_Construct_UClass_UEslon2DTileMapComponent_Statics;
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DTileMapComponent(ETypeConstructPhase);

#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UEslon2DTileMapComponent_Statics; \
	friend ESLON2D_API UClass* ::Z_Construct_UClass_UEslon2DTileMapComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UEslon2DTileMapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Eslon2D"), Z_Construct_UClass_UEslon2DTileMapComponent) \
	DECLARE_SERIALIZER(UEslon2DTileMapComponent)


#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEslon2DTileMapComponent(UEslon2DTileMapComponent&&) = delete; \
	UEslon2DTileMapComponent(const UEslon2DTileMapComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEslon2DTileMapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEslon2DTileMapComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEslon2DTileMapComponent) \
	NO_API virtual ~UEslon2DTileMapComponent();


#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h_10_PROLOG
#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEslon2DTileMapComponent;

// ********** End Class UEslon2DTileMapComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DTileMapComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
