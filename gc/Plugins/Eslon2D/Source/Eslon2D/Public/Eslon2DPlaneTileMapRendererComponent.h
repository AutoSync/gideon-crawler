#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Eslon2DPaperTileBrushTypes.h"
#include "Eslon2DPlaneTileMapRendererComponent.generated.h"

class UEslon2DGeneratedTileSprite;
class UPaperGroupedSpriteComponent;
class UPaperSpriteComponent;
class UPaperTileMapComponent;
class UPaperTileSet;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEslon2DPlaneTileRenderedSignature, int32, X, int32, Y, UPaperSpriteComponent*, SpriteComponent);

UCLASS(BlueprintType, ClassGroup = (Eslon2D), meta = (BlueprintSpawnableComponent))
class ESLON2D_API UEslon2DPlaneTileMapRendererComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEslon2DPlaneTileMapRendererComponent();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	TObjectPtr<UPaperTileMapComponent> TargetTileMap = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	TArray<int32> LayersToRender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	bool bRenderStaticTiles = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	bool bBatchStaticTilesByChunk = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap", meta = (ClampMin = "1"))
	FIntPoint ChunkSizeInTiles = FIntPoint(16, 16);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	bool bHideSourceTileMapOnBuild = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	bool bSkipStaticTilesCoveredByAnimation = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	bool bAttachPlanesToTileMap = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	bool bEnableChunkDistanceCulling = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap", meta = (ClampMin = "0.0", EditCondition = "bEnableChunkDistanceCulling"))
	float StaticChunkCullDistance = 12000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap", meta = (ClampMin = "0.0", EditCondition = "bEnableChunkDistanceCulling"))
	float AnimatedTileCullDistance = 8000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	bool bIncludeChunksInHLOD = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	FName PlaneComponentTag = TEXT("Eslon2D.TilePlane");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	FName ChunkComponentTag = TEXT("Eslon2D.TileChunk");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	float FallbackPixelsPerUnrealUnit = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	TArray<FEslon2DAnimatedTileDefinition> AnimatedTileDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Plane Tilemap")
	TArray<FEslon2DAnimatedTileInstance> AnimatedTileInstances;

	UPROPERTY(BlueprintAssignable, Category = "Eslon 2D|Plane Tilemap")
	FEslon2DPlaneTileRenderedSignature OnTilePlaneRendered;

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Plane Tilemap")
	void SetTargetTileMap(UPaperTileMapComponent* InTargetTileMap);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Plane Tilemap")
	int32 BuildRenderPlanes();

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Plane Tilemap")
	int32 ClearRenderPlanes(bool bDestroyOnlyTagged = true);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Plane Tilemap")
	bool SetSourceTileMapVisible(bool bVisible);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Animated Tile")
	bool DefineAnimation(const FEslon2DAnimatedTileDefinition& Definition);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Animated Tile")
	bool DefineAnimationFromTileIndices(FName AnimationName, UPaperTileSet* TileSet, const TArray<int32>& TileIndices, float FramesPerSecond = 8.0f, bool bLooping = true);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Animated Tile")
	bool DefineAnimationFromTileRow(FName AnimationName, UPaperTileSet* TileSet, int32 Row, const TArray<int32>& Columns, float FramesPerSecond = 8.0f, bool bLooping = true, bool bOneBasedCoordinates = true);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Animated Tile")
	int32 PlaceAnimationSingle(FName AnimationName, int32 X, int32 Y, int32 LayerIndex = -1, float StartTimeOffset = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Animated Tile")
	int32 PlaceAnimationLine(FName AnimationName, int32 StartX, int32 StartY, int32 EndX, int32 EndY, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Animated Tile")
	int32 PlaceAnimationRectangle(FName AnimationName, int32 MinX, int32 MinY, int32 MaxX, int32 MaxY, bool bFilled = true, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Animated Tile")
	int32 PlaceAnimationEllipse(FName AnimationName, int32 CenterX, int32 CenterY, int32 RadiusX, int32 RadiusY, bool bFilled = true, int32 LayerIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Animated Tile")
	int32 ClearAnimationInstances(FName AnimationName = NAME_None);

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Animated Tile")
	bool HasAnimationDefinition(FName AnimationName) const;

private:
	struct FRenderedAnimatedTile
	{
		TObjectPtr<UPaperSpriteComponent> SpriteComponent = nullptr;
		TArray<TObjectPtr<UEslon2DGeneratedTileSprite>> Frames;
		float FramesPerSecond = 8.0f;
		bool bLooping = true;
		float ElapsedTime = 0.0f;
		int32 LastFrameIndex = INDEX_NONE;
	};

	UPROPERTY(Transient)
	TArray<TObjectPtr<UPaperSpriteComponent>> RenderedSpriteComponents;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UPaperGroupedSpriteComponent>> RenderedChunkComponents;

	UPROPERTY(Transient)
	TMap<FString, TObjectPtr<UEslon2DGeneratedTileSprite>> SpriteCache;

	TArray<FRenderedAnimatedTile> RenderedAnimatedTiles;

	bool GetTargetMapInfo(int32& OutMapWidth, int32& OutMapHeight, int32& OutNumLayers) const;
	float GetEffectivePixelsPerUnrealUnit() const;
	const FEslon2DAnimatedTileDefinition* FindAnimationDefinition(FName AnimationName) const;
	FEslon2DAnimatedTileDefinition* FindAnimationDefinition(FName AnimationName);
	int32 PlaceAnimationAtPoints(FName AnimationName, const TArray<FIntPoint>& Points, int32 LayerIndex);
	UPaperGroupedSpriteComponent* GetOrCreateChunkComponent(TMap<FIntVector, TObjectPtr<UPaperGroupedSpriteComponent>>& ChunkComponents, int32 LayerIndex, FIntPoint ChunkCoordinate);
	bool AddStaticSpriteInstance(UPaperGroupedSpriteComponent* ChunkComponent, const FEslon2DPaperTileRef& Tile, const FIntPoint& Coordinate, int32 LayerIndex);
	UPaperSpriteComponent* CreateSpritePlane(const FEslon2DPaperTileRef& Tile, const FIntPoint& Coordinate, int32 LayerIndex, FLinearColor Color, const FVector& LocalOffset, bool bAnimatedPlane);
	UEslon2DGeneratedTileSprite* GetOrCreateSprite(const FEslon2DPaperTileRef& Tile);
	void ApplyTileFlipToComponent(UPaperSpriteComponent* Component, const FEslon2DPaperTileRef& Tile, bool bAnimatedPlane) const;
	void PruneInvalidRenderedComponents();

	static void AddUniquePoint(TArray<FIntPoint>& Points, TSet<FIntPoint>& SeenPoints, const FIntPoint& Point);
	static TArray<FIntPoint> BuildLinePoints(FIntPoint Start, FIntPoint End);
	static TArray<FIntPoint> BuildRectanglePoints(FIntPoint Min, FIntPoint Max, bool bFilled);
	static TArray<FIntPoint> BuildEllipsePoints(FIntPoint Center, int32 RadiusX, int32 RadiusY, bool bFilled);
	static FIntVector MakeCellKey(int32 X, int32 Y, int32 LayerIndex);
};
