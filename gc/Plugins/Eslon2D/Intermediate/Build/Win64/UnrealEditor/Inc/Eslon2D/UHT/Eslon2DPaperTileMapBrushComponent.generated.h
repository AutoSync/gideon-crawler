// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Eslon2DPaperTileMapBrushComponent.h"

#ifdef ESLON2D_Eslon2DPaperTileMapBrushComponent_generated_h
#error "Eslon2DPaperTileMapBrushComponent.generated.h already included, missing '#pragma once' in Eslon2DPaperTileMapBrushComponent.h"
#endif
#define ESLON2D_Eslon2DPaperTileMapBrushComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperTileMapComponent;
struct FEslon2DPaperTileRef;
struct FEslon2DTileBrush;
struct FEslon2DTileBrushCell;
struct FPaperTileInfo;

// ********** Begin Class UEslon2DPaperTileMapBrushComponent ***************************************
#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPickTile); \
	DECLARE_FUNCTION(execEraseEllipse); \
	DECLARE_FUNCTION(execEraseRectangle); \
	DECLARE_FUNCTION(execEraseLine); \
	DECLARE_FUNCTION(execEraseSingle); \
	DECLARE_FUNCTION(execFloodFill); \
	DECLARE_FUNCTION(execPaintEllipse); \
	DECLARE_FUNCTION(execPaintRectangle); \
	DECLARE_FUNCTION(execPaintLine); \
	DECLARE_FUNCTION(execPaintSingle); \
	DECLARE_FUNCTION(execCaptureBrushFromMap); \
	DECLARE_FUNCTION(execSetPatternBrush); \
	DECLARE_FUNCTION(execSetPaletteBrush); \
	DECLARE_FUNCTION(execSetSingleTileBrush); \
	DECLARE_FUNCTION(execSetBrush); \
	DECLARE_FUNCTION(execSetTargetLayer); \
	DECLARE_FUNCTION(execSetTargetTileMap);


struct Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent_Statics;
ESLON2D_API UClass* Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent(ETypeConstructPhase);

#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent_Statics; \
	friend ESLON2D_API UClass* ::Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UEslon2DPaperTileMapBrushComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Eslon2D"), Z_Construct_UClass_UEslon2DPaperTileMapBrushComponent) \
	DECLARE_SERIALIZER(UEslon2DPaperTileMapBrushComponent)


#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEslon2DPaperTileMapBrushComponent(UEslon2DPaperTileMapBrushComponent&&) = delete; \
	UEslon2DPaperTileMapBrushComponent(const UEslon2DPaperTileMapBrushComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEslon2DPaperTileMapBrushComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEslon2DPaperTileMapBrushComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEslon2DPaperTileMapBrushComponent) \
	NO_API virtual ~UEslon2DPaperTileMapBrushComponent();


#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h_12_PROLOG
#define FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEslon2DPaperTileMapBrushComponent;

// ********** End Class UEslon2DPaperTileMapBrushComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Developer_gideon_crawler_gc_Plugins_Eslon2D_Source_Eslon2D_Public_Eslon2DPaperTileMapBrushComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
