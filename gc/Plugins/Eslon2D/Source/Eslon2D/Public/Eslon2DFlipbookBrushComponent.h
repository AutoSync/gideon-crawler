#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Eslon2DPaperTileBrushTypes.h"
#include "Eslon2DFlipbookBrushComponent.generated.h"

class UPaperFlipbookComponent;
class UPaperTileMapComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEslon2DFlipbookSpawnedSignature, int32, X, int32, Y, UPaperFlipbookComponent*, FlipbookComponent);

UCLASS(BlueprintType, ClassGroup = (Eslon2D), meta = (BlueprintSpawnableComponent))
class ESLON2D_API UEslon2DFlipbookBrushComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEslon2DFlipbookBrushComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	TObjectPtr<UPaperTileMapComponent> TargetTileMap = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush", meta = (ClampMin = "0"))
	int32 TargetLayerIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	FEslon2DFlipbookBrush CurrentBrush;

	UPROPERTY(BlueprintAssignable, Category = "Eslon 2D|Flipbook Brush")
	FEslon2DFlipbookSpawnedSignature OnFlipbookSpawned;

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Flipbook Brush")
	void SetTargetTileMap(UPaperTileMapComponent* InTargetTileMap);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Flipbook Brush")
	void SetTargetLayer(int32 InLayerIndex);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Flipbook Brush")
	void SetBrush(const FEslon2DFlipbookBrush& InBrush);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Flipbook Brush")
	int32 SpawnSingle(int32 X, int32 Y, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Flipbook Brush")
	int32 SpawnLine(int32 StartX, int32 StartY, int32 EndX, int32 EndY, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Flipbook Brush")
	int32 SpawnRectangle(int32 MinX, int32 MinY, int32 MaxX, int32 MaxY, bool bFilled = true, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Flipbook Brush")
	int32 SpawnEllipse(int32 CenterX, int32 CenterY, int32 RadiusX, int32 RadiusY, bool bFilled = true, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Flipbook Brush")
	int32 ClearSpawnedFlipbooks(bool bDestroyOnlyBrushTagged = true);

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Flipbook Brush")
	int32 GetSpawnedFlipbookCount() const;

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Flipbook Brush")
	void GetSpawnedFlipbooks(TArray<UPaperFlipbookComponent*>& OutComponents) const;

private:
	UPROPERTY(Transient)
	TArray<TObjectPtr<UPaperFlipbookComponent>> SpawnedFlipbooks;

	bool GetTargetMapInfo(int32 RequestedLayerIndex, int32& OutLayerIndex, int32& OutMapWidth, int32& OutMapHeight, int32& OutNumLayers) const;
	int32 SpawnAtPoints(const TArray<FIntPoint>& Points, int32 LayerIndex);
	bool ChooseEntry(FRandomStream& RandomStream, FEslon2DFlipbookBrushEntry& OutEntry) const;
	UPaperFlipbookComponent* SpawnComponentAtTile(const FIntPoint& Tile, int32 LayerIndex, const FEslon2DFlipbookBrushEntry& Entry);
	void PruneInvalidSpawnedComponents();

	static void AddUniquePoint(TArray<FIntPoint>& Points, TSet<FIntPoint>& SeenPoints, const FIntPoint& Point);
	static TArray<FIntPoint> BuildLinePoints(FIntPoint Start, FIntPoint End);
	static TArray<FIntPoint> BuildRectanglePoints(FIntPoint Min, FIntPoint Max, bool bFilled);
	static TArray<FIntPoint> BuildEllipsePoints(FIntPoint Center, int32 RadiusX, int32 RadiusY, bool bFilled);
};
