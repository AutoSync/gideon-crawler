#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Eslon2DPaperTileBrushTypes.h"
#include "Eslon2DPaperTileMapBrushComponent.generated.h"

class UPaperTileMapComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FEslon2DPaperTilePaintedSignature, int32, X, int32, Y, int32, LayerIndex, FPaperTileInfo, Tile, bool, bErased);

UCLASS(BlueprintType, ClassGroup = (Eslon2D), meta = (BlueprintSpawnableComponent))
class ESLON2D_API UEslon2DPaperTileMapBrushComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEslon2DPaperTileMapBrushComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tilemap")
	TObjectPtr<UPaperTileMapComponent> TargetTileMap = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tilemap", meta = (ClampMin = "0"))
	int32 TargetLayerIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tilemap")
	FEslon2DTileBrush CurrentBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tilemap")
	bool bMakeTileMapEditableBeforePaint = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tilemap")
	bool bRebuildCollisionAfterPaint = false;

	UPROPERTY(BlueprintAssignable, Category = "Eslon 2D|Paper Tilemap")
	FEslon2DPaperTilePaintedSignature OnTilePainted;

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	void SetTargetTileMap(UPaperTileMapComponent* InTargetTileMap);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	void SetTargetLayer(int32 InLayerIndex);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	void SetBrush(const FEslon2DTileBrush& InBrush);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	void SetSingleTileBrush(const FEslon2DPaperTileRef& Tile);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	void SetPaletteBrush(const TArray<FEslon2DPaperTileRef>& Tiles, bool bRandomizeTiles = true);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	void SetPatternBrush(const TArray<FEslon2DTileBrushCell>& Cells, FIntPoint PatternSize, bool bRepeatPattern = true);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 CaptureBrushFromMap(int32 MinX, int32 MinY, int32 MaxX, int32 MaxY, int32 LayerIndex = -1, bool bIncludeEmptyCells = false);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 PaintSingle(int32 X, int32 Y, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 PaintLine(int32 StartX, int32 StartY, int32 EndX, int32 EndY, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 PaintRectangle(int32 MinX, int32 MinY, int32 MaxX, int32 MaxY, bool bFilled = true, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 PaintEllipse(int32 CenterX, int32 CenterY, int32 RadiusX, int32 RadiusY, bool bFilled = true, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 FloodFill(int32 StartX, int32 StartY, int32 LayerIndex = -1, int32 MaxTiles = 4096);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 EraseSingle(int32 X, int32 Y, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 EraseLine(int32 StartX, int32 StartY, int32 EndX, int32 EndY, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 EraseRectangle(int32 MinX, int32 MinY, int32 MaxX, int32 MaxY, bool bFilled = true, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Paper Tilemap")
	int32 EraseEllipse(int32 CenterX, int32 CenterY, int32 RadiusX, int32 RadiusY, bool bFilled = true, int32 LayerIndex = -1);

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Paper Tilemap")
	bool PickTile(int32 X, int32 Y, FEslon2DPaperTileRef& OutTile, int32 LayerIndex = -1) const;

private:
	bool PrepareTargetForPaint(int32 RequestedLayerIndex, int32& OutLayerIndex, int32& OutMapWidth, int32& OutMapHeight) const;
	bool GetTargetMapInfo(int32 RequestedLayerIndex, int32& OutLayerIndex, int32& OutMapWidth, int32& OutMapHeight, int32& OutNumLayers) const;
	int32 PaintPoints(const TArray<FIntPoint>& Points, const FIntPoint& BrushOrigin, int32 LayerIndex);
	int32 ErasePoints(const TArray<FIntPoint>& Points, int32 LayerIndex);
	bool ResolveBrushCell(const FIntPoint& Point, const FIntPoint& BrushOrigin, FRandomStream& RandomStream, FEslon2DTileBrushCell& OutCell) const;
	void NormalizeCurrentBrush();

	static void AddUniquePoint(TArray<FIntPoint>& Points, TSet<FIntPoint>& SeenPoints, const FIntPoint& Point);
	static TArray<FIntPoint> BuildLinePoints(FIntPoint Start, FIntPoint End);
	static TArray<FIntPoint> BuildRectanglePoints(FIntPoint Min, FIntPoint Max, bool bFilled);
	static TArray<FIntPoint> BuildEllipsePoints(FIntPoint Center, int32 RadiusX, int32 RadiusY, bool bFilled);
	static int32 PositiveModulo(int32 Value, int32 Divisor);
};
