#include "Eslon2DPlaneTileMapRendererComponent.h"

#include "Eslon2DGeneratedTileSprite.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "PaperGroupedSpriteComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperTileMap.h"
#include "PaperTileMapComponent.h"
#include "PaperTileSet.h"

UEslon2DPlaneTileMapRendererComponent::UEslon2DPlaneTileMapRendererComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UEslon2DPlaneTileMapRendererComponent::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	for (FRenderedAnimatedTile& AnimatedTile : RenderedAnimatedTiles)
	{
		if (!IsValid(AnimatedTile.SpriteComponent) || AnimatedTile.Frames.IsEmpty() || AnimatedTile.FramesPerSecond <= 0.0f)
		{
			continue;
		}

		AnimatedTile.ElapsedTime += DeltaTime;
		int32 FrameIndex = FMath::FloorToInt(AnimatedTile.ElapsedTime * AnimatedTile.FramesPerSecond);

		if (AnimatedTile.bLooping)
		{
			FrameIndex %= AnimatedTile.Frames.Num();
		}
		else
		{
			FrameIndex = FMath::Min(FrameIndex, AnimatedTile.Frames.Num() - 1);
		}

		if (FrameIndex != AnimatedTile.LastFrameIndex && AnimatedTile.Frames.IsValidIndex(FrameIndex))
		{
			AnimatedTile.SpriteComponent->SetSprite(AnimatedTile.Frames[FrameIndex]);
			AnimatedTile.LastFrameIndex = FrameIndex;
		}
	}
}

void UEslon2DPlaneTileMapRendererComponent::SetTargetTileMap(UPaperTileMapComponent* InTargetTileMap)
{
	TargetTileMap = InTargetTileMap;
}

int32 UEslon2DPlaneTileMapRendererComponent::BuildRenderPlanes()
{
	ClearRenderPlanes(false);

	int32 MapWidth = 0;
	int32 MapHeight = 0;
	int32 NumLayers = 0;
	if (!GetTargetMapInfo(MapWidth, MapHeight, NumLayers))
	{
		return 0;
	}

#if WITH_EDITOR
	if (AActor* Owner = GetOwner())
	{
		Owner->Modify();
	}
#endif

	if (bHideSourceTileMapOnBuild)
	{
		SetSourceTileMapVisible(false);
	}

	TArray<int32> EffectiveLayers = LayersToRender;
	if (EffectiveLayers.IsEmpty())
	{
		for (int32 LayerIndex = 0; LayerIndex < NumLayers; ++LayerIndex)
		{
			EffectiveLayers.Add(LayerIndex);
		}
	}

	TSet<int32> LayerSet;
	for (const int32 LayerIndex : EffectiveLayers)
	{
		if (LayerIndex >= 0 && LayerIndex < NumLayers)
		{
			LayerSet.Add(LayerIndex);
		}
	}

	TSet<FIntVector> AnimatedCellKeys;
	for (const FEslon2DAnimatedTileInstance& Instance : AnimatedTileInstances)
	{
		if (LayerSet.Contains(Instance.LayerIndex) && FindAnimationDefinition(Instance.AnimationName))
		{
			AnimatedCellKeys.Add(MakeCellKey(Instance.Coordinate.X, Instance.Coordinate.Y, Instance.LayerIndex));
		}
	}

	int32 RenderedCount = 0;
	TMap<FIntVector, TObjectPtr<UPaperGroupedSpriteComponent>> ChunkComponents;

	if (bRenderStaticTiles)
	{
		for (const int32 LayerIndex : LayerSet)
		{
			for (int32 Y = 0; Y < MapHeight; ++Y)
			{
				for (int32 X = 0; X < MapWidth; ++X)
				{
					if (bSkipStaticTilesCoveredByAnimation && AnimatedCellKeys.Contains(MakeCellKey(X, Y, LayerIndex)))
					{
						continue;
					}

					const FPaperTileInfo TileInfo = TargetTileMap->GetTile(X, Y, LayerIndex);
					if (!TileInfo.IsValid())
					{
						continue;
					}

					const FEslon2DPaperTileRef Tile = FEslon2DPaperTileRef::FromPaperTileInfo(TileInfo);
					if (bBatchStaticTilesByChunk)
					{
						const FIntPoint EffectiveChunkSize(FMath::Max(1, ChunkSizeInTiles.X), FMath::Max(1, ChunkSizeInTiles.Y));
						const FIntPoint ChunkCoordinate(X / EffectiveChunkSize.X, Y / EffectiveChunkSize.Y);
						if (UPaperGroupedSpriteComponent* ChunkComponent = GetOrCreateChunkComponent(ChunkComponents, LayerIndex, ChunkCoordinate))
						{
							if (AddStaticSpriteInstance(ChunkComponent, Tile, FIntPoint(X, Y), LayerIndex))
							{
								++RenderedCount;
							}
						}
					}
					else if (UPaperSpriteComponent* SpriteComponent = CreateSpritePlane(Tile, FIntPoint(X, Y), LayerIndex, FLinearColor::White, FVector::ZeroVector, false))
					{
						OnTilePlaneRendered.Broadcast(X, Y, SpriteComponent);
						++RenderedCount;
					}
				}
			}
		}
	}

	FRandomStream RandomStream(1337);
	for (const FEslon2DAnimatedTileInstance& Instance : AnimatedTileInstances)
	{
		if (!LayerSet.Contains(Instance.LayerIndex))
		{
			continue;
		}

		if (Instance.Coordinate.X < 0 || Instance.Coordinate.Y < 0 || Instance.Coordinate.X >= MapWidth || Instance.Coordinate.Y >= MapHeight)
		{
			continue;
		}

		const FEslon2DAnimatedTileDefinition* Definition = FindAnimationDefinition(Instance.AnimationName);
		if (!Definition || !Definition->IsValid())
		{
			continue;
		}

		TArray<TObjectPtr<UEslon2DGeneratedTileSprite>> Frames;
		for (const FEslon2DPaperTileRef& FrameTile : Definition->Frames)
		{
			if (UEslon2DGeneratedTileSprite* FrameSprite = GetOrCreateSprite(FrameTile))
			{
				Frames.Add(FrameSprite);
			}
		}

		if (Frames.IsEmpty())
		{
			continue;
		}

		const float StartOffset = Definition->bRandomStartFrame
			? RandomStream.FRandRange(0.0f, static_cast<float>(Frames.Num()) / FMath::Max(Definition->FramesPerSecond, 0.01f))
			: Instance.StartTimeOffset;

		if (UPaperSpriteComponent* SpriteComponent = CreateSpritePlane(Definition->Frames[0], Instance.Coordinate, Instance.LayerIndex, Definition->Color, Definition->LocalOffset, true))
		{
			FRenderedAnimatedTile& AnimatedTile = RenderedAnimatedTiles.AddDefaulted_GetRef();
			AnimatedTile.SpriteComponent = SpriteComponent;
			AnimatedTile.Frames = Frames;
			AnimatedTile.FramesPerSecond = FMath::Max(Definition->FramesPerSecond, 0.01f);
			AnimatedTile.bLooping = Definition->bLooping;
			AnimatedTile.ElapsedTime = StartOffset;
			AnimatedTile.LastFrameIndex = INDEX_NONE;
			OnTilePlaneRendered.Broadcast(Instance.Coordinate.X, Instance.Coordinate.Y, SpriteComponent);
			++RenderedCount;
		}
	}

	return RenderedCount;
}

int32 UEslon2DPlaneTileMapRendererComponent::ClearRenderPlanes(const bool bDestroyOnlyTagged)
{
	int32 DestroyedCount = 0;

	for (int32 Index = RenderedChunkComponents.Num() - 1; Index >= 0; --Index)
	{
		UPaperGroupedSpriteComponent* Component = RenderedChunkComponents[Index];
		if (!IsValid(Component))
		{
			RenderedChunkComponents.RemoveAt(Index);
			continue;
		}

		if (bDestroyOnlyTagged && !Component->ComponentTags.Contains(ChunkComponentTag))
		{
			continue;
		}

		Component->DestroyComponent();
		RenderedChunkComponents.RemoveAt(Index);
		++DestroyedCount;
	}

	for (int32 Index = RenderedSpriteComponents.Num() - 1; Index >= 0; --Index)
	{
		UPaperSpriteComponent* Component = RenderedSpriteComponents[Index];
		if (!IsValid(Component))
		{
			RenderedSpriteComponents.RemoveAt(Index);
			continue;
		}

		if (bDestroyOnlyTagged && !Component->ComponentTags.Contains(PlaneComponentTag))
		{
			continue;
		}

		Component->DestroyComponent();
		RenderedSpriteComponents.RemoveAt(Index);
		++DestroyedCount;
	}

	RenderedAnimatedTiles.Reset();
	return DestroyedCount;
}

bool UEslon2DPlaneTileMapRendererComponent::SetSourceTileMapVisible(const bool bVisible)
{
	if (!TargetTileMap)
	{
		return false;
	}

	TargetTileMap->SetVisibility(bVisible, true);
	return true;
}

bool UEslon2DPlaneTileMapRendererComponent::DefineAnimation(const FEslon2DAnimatedTileDefinition& Definition)
{
	if (!Definition.IsValid())
	{
		return false;
	}

	FEslon2DAnimatedTileDefinition* ExistingDefinition = FindAnimationDefinition(Definition.AnimationName);
	if (ExistingDefinition)
	{
		*ExistingDefinition = Definition;
	}
	else
	{
		AnimatedTileDefinitions.Add(Definition);
	}

	return true;
}

bool UEslon2DPlaneTileMapRendererComponent::DefineAnimationFromTileIndices(const FName AnimationName, UPaperTileSet* TileSet, const TArray<int32>& TileIndices, const float FramesPerSecond, const bool bLooping)
{
	if (!TileSet || AnimationName.IsNone())
	{
		return false;
	}

	FEslon2DAnimatedTileDefinition Definition;
	Definition.AnimationName = AnimationName;
	Definition.FramesPerSecond = FramesPerSecond;
	Definition.bLooping = bLooping;

	for (const int32 TileIndex : TileIndices)
	{
		if (TileIndex >= 0 && TileIndex < TileSet->GetTileCount())
		{
			FEslon2DPaperTileRef& Frame = Definition.Frames.AddDefaulted_GetRef();
			Frame.TileSet = TileSet;
			Frame.TileIndex = TileIndex;
		}
	}

	return DefineAnimation(Definition);
}

bool UEslon2DPlaneTileMapRendererComponent::DefineAnimationFromTileRow(const FName AnimationName, UPaperTileSet* TileSet, const int32 Row, const TArray<int32>& Columns, const float FramesPerSecond, const bool bLooping, const bool bOneBasedCoordinates)
{
	if (!TileSet)
	{
		return false;
	}

	const int32 TileCountX = TileSet->GetTileCountX();
	const int32 TileCountY = TileSet->GetTileCountY();
	const int32 RowIndex = bOneBasedCoordinates ? Row - 1 : Row;

	if (RowIndex < 0 || RowIndex >= TileCountY)
	{
		return false;
	}

	TArray<int32> TileIndices;
	for (const int32 Column : Columns)
	{
		const int32 ColumnIndex = bOneBasedCoordinates ? Column - 1 : Column;
		if (ColumnIndex >= 0 && ColumnIndex < TileCountX)
		{
			TileIndices.Add(ColumnIndex + (RowIndex * TileCountX));
		}
	}

	return DefineAnimationFromTileIndices(AnimationName, TileSet, TileIndices, FramesPerSecond, bLooping);
}

int32 UEslon2DPlaneTileMapRendererComponent::PlaceAnimationSingle(const FName AnimationName, const int32 X, const int32 Y, const int32 LayerIndex, const float StartTimeOffset)
{
	const int32 EffectiveLayer = LayerIndex >= 0 ? LayerIndex : 0;

	if (!FindAnimationDefinition(AnimationName))
	{
		return 0;
	}

	FEslon2DAnimatedTileInstance& Instance = AnimatedTileInstances.AddDefaulted_GetRef();
	Instance.AnimationName = AnimationName;
	Instance.Coordinate = FIntPoint(X, Y);
	Instance.LayerIndex = EffectiveLayer;
	Instance.StartTimeOffset = StartTimeOffset;
	return 1;
}

int32 UEslon2DPlaneTileMapRendererComponent::PlaceAnimationLine(const FName AnimationName, const int32 StartX, const int32 StartY, const int32 EndX, const int32 EndY, const int32 LayerIndex)
{
	return PlaceAnimationAtPoints(AnimationName, BuildLinePoints(FIntPoint(StartX, StartY), FIntPoint(EndX, EndY)), LayerIndex);
}

int32 UEslon2DPlaneTileMapRendererComponent::PlaceAnimationRectangle(const FName AnimationName, const int32 MinX, const int32 MinY, const int32 MaxX, const int32 MaxY, const bool bFilled, const int32 LayerIndex)
{
	const FIntPoint Min(FMath::Min(MinX, MaxX), FMath::Min(MinY, MaxY));
	const FIntPoint Max(FMath::Max(MinX, MaxX), FMath::Max(MinY, MaxY));
	return PlaceAnimationAtPoints(AnimationName, BuildRectanglePoints(Min, Max, bFilled), LayerIndex);
}

int32 UEslon2DPlaneTileMapRendererComponent::PlaceAnimationEllipse(const FName AnimationName, const int32 CenterX, const int32 CenterY, const int32 RadiusX, const int32 RadiusY, const bool bFilled, const int32 LayerIndex)
{
	return PlaceAnimationAtPoints(AnimationName, BuildEllipsePoints(FIntPoint(CenterX, CenterY), RadiusX, RadiusY, bFilled), LayerIndex);
}

int32 UEslon2DPlaneTileMapRendererComponent::ClearAnimationInstances(const FName AnimationName)
{
	int32 RemovedCount = 0;

	for (int32 Index = AnimatedTileInstances.Num() - 1; Index >= 0; --Index)
	{
		if (AnimationName.IsNone() || AnimatedTileInstances[Index].AnimationName == AnimationName)
		{
			AnimatedTileInstances.RemoveAt(Index);
			++RemovedCount;
		}
	}

	return RemovedCount;
}

bool UEslon2DPlaneTileMapRendererComponent::HasAnimationDefinition(const FName AnimationName) const
{
	return FindAnimationDefinition(AnimationName) != nullptr;
}

bool UEslon2DPlaneTileMapRendererComponent::GetTargetMapInfo(int32& OutMapWidth, int32& OutMapHeight, int32& OutNumLayers) const
{
	if (!TargetTileMap)
	{
		return false;
	}

	TargetTileMap->GetMapSize(OutMapWidth, OutMapHeight, OutNumLayers);
	return OutMapWidth > 0 && OutMapHeight > 0 && OutNumLayers > 0;
}

float UEslon2DPlaneTileMapRendererComponent::GetEffectivePixelsPerUnrealUnit() const
{
	if (TargetTileMap && TargetTileMap->TileMap)
	{
		return FMath::Max(TargetTileMap->TileMap->GetPixelsPerUnrealUnit(), KINDA_SMALL_NUMBER);
	}

	return FMath::Max(FallbackPixelsPerUnrealUnit, KINDA_SMALL_NUMBER);
}

const FEslon2DAnimatedTileDefinition* UEslon2DPlaneTileMapRendererComponent::FindAnimationDefinition(const FName AnimationName) const
{
	return AnimatedTileDefinitions.FindByPredicate([AnimationName](const FEslon2DAnimatedTileDefinition& Definition)
	{
		return Definition.AnimationName == AnimationName;
	});
}

FEslon2DAnimatedTileDefinition* UEslon2DPlaneTileMapRendererComponent::FindAnimationDefinition(const FName AnimationName)
{
	return AnimatedTileDefinitions.FindByPredicate([AnimationName](const FEslon2DAnimatedTileDefinition& Definition)
	{
		return Definition.AnimationName == AnimationName;
	});
}

int32 UEslon2DPlaneTileMapRendererComponent::PlaceAnimationAtPoints(const FName AnimationName, const TArray<FIntPoint>& Points, const int32 LayerIndex)
{
	if (!FindAnimationDefinition(AnimationName))
	{
		return 0;
	}

	const int32 EffectiveLayer = LayerIndex >= 0 ? LayerIndex : 0;
	TSet<FIntPoint> SeenPoints;
	int32 PlacedCount = 0;

	for (const FIntPoint& Point : Points)
	{
		if (SeenPoints.Contains(Point))
		{
			continue;
		}

		SeenPoints.Add(Point);

		FEslon2DAnimatedTileInstance& Instance = AnimatedTileInstances.AddDefaulted_GetRef();
		Instance.AnimationName = AnimationName;
		Instance.Coordinate = Point;
		Instance.LayerIndex = EffectiveLayer;
		++PlacedCount;
	}

	return PlacedCount;
}

UPaperGroupedSpriteComponent* UEslon2DPlaneTileMapRendererComponent::GetOrCreateChunkComponent(TMap<FIntVector, TObjectPtr<UPaperGroupedSpriteComponent>>& ChunkComponents, const int32 LayerIndex, const FIntPoint ChunkCoordinate)
{
	AActor* Owner = GetOwner();
	if (!Owner || !TargetTileMap)
	{
		return nullptr;
	}

	const FIntVector ChunkKey(ChunkCoordinate.X, ChunkCoordinate.Y, LayerIndex);
	if (TObjectPtr<UPaperGroupedSpriteComponent>* ExistingComponent = ChunkComponents.Find(ChunkKey))
	{
		return ExistingComponent->Get();
	}

	const FName ComponentName = MakeUniqueObjectName(Owner, UPaperGroupedSpriteComponent::StaticClass(), TEXT("Eslon2D_TileChunk"));
	UPaperGroupedSpriteComponent* Component = NewObject<UPaperGroupedSpriteComponent>(Owner, ComponentName, RF_Transactional);
	if (!Component)
	{
		return nullptr;
	}

	Component->CreationMethod = EComponentCreationMethod::Instance;
	Component->ComponentTags.AddUnique(ChunkComponentTag);
	Component->SetMobility(EComponentMobility::Static);
	Component->bEnableAutoLODGeneration = bIncludeChunksInHLOD;
	if (bEnableChunkDistanceCulling)
	{
		Component->SetCullDistance(StaticChunkCullDistance);
	}
	Component->SetWorldTransform(TargetTileMap->GetComponentTransform());

	Owner->AddInstanceComponent(Component);
	Component->RegisterComponent();

	USceneComponent* AttachParent = bAttachPlanesToTileMap ? Cast<USceneComponent>(TargetTileMap) : Owner->GetRootComponent();
	if (!AttachParent)
	{
		AttachParent = Owner->GetRootComponent();
	}

	if (AttachParent)
	{
		Component->AttachToComponent(AttachParent, FAttachmentTransformRules::KeepWorldTransform);
	}

	ChunkComponents.Add(ChunkKey, Component);
	RenderedChunkComponents.Add(Component);
	return Component;
}

bool UEslon2DPlaneTileMapRendererComponent::AddStaticSpriteInstance(UPaperGroupedSpriteComponent* ChunkComponent, const FEslon2DPaperTileRef& Tile, const FIntPoint& Coordinate, const int32 LayerIndex)
{
	if (!ChunkComponent || !TargetTileMap || !Tile.IsValid())
	{
		return false;
	}

	UEslon2DGeneratedTileSprite* Sprite = GetOrCreateSprite(Tile);
	if (!Sprite)
	{
		return false;
	}

	const FVector TileCenter = TargetTileMap->GetTileCenterPosition(Coordinate.X, Coordinate.Y, LayerIndex, true);
	FRotator Rotation = TargetTileMap->GetComponentRotation();
	if (Tile.bFlipDiagonal)
	{
		Rotation += FRotator(0.0f, 0.0f, 90.0f);
	}

	FVector Scale = FVector::OneVector;
	Scale.X = Tile.bFlipHorizontal ? -1.0f : 1.0f;
	Scale.Z = Tile.bFlipVertical ? -1.0f : 1.0f;

	ChunkComponent->AddInstance(FTransform(Rotation, TileCenter, Scale), Sprite, true, FLinearColor::White);
	return true;
}

UPaperSpriteComponent* UEslon2DPlaneTileMapRendererComponent::CreateSpritePlane(const FEslon2DPaperTileRef& Tile, const FIntPoint& Coordinate, const int32 LayerIndex, const FLinearColor Color, const FVector& LocalOffset, const bool bAnimatedPlane)
{
	AActor* Owner = GetOwner();
	if (!Owner || !TargetTileMap || !Tile.IsValid())
	{
		return nullptr;
	}

	UEslon2DGeneratedTileSprite* Sprite = GetOrCreateSprite(Tile);
	if (!Sprite)
	{
		return nullptr;
	}

	const FName ComponentName = MakeUniqueObjectName(Owner, UPaperSpriteComponent::StaticClass(), TEXT("Eslon2D_TilePlane"));
	UPaperSpriteComponent* Component = NewObject<UPaperSpriteComponent>(Owner, ComponentName, RF_Transactional);
	if (!Component)
	{
		return nullptr;
	}

	const FVector TileCenter = TargetTileMap->GetTileCenterPosition(Coordinate.X, Coordinate.Y, LayerIndex, true);
	const FVector WorldOffset = TargetTileMap->GetComponentTransform().TransformVectorNoScale(LocalOffset);

	Component->CreationMethod = EComponentCreationMethod::Instance;
	Component->ComponentTags.AddUnique(PlaneComponentTag);
	Component->SetMobility(EComponentMobility::Movable);
	Component->bEnableAutoLODGeneration = false;
	if (bEnableChunkDistanceCulling)
	{
		Component->SetCullDistance(AnimatedTileCullDistance);
	}
	Component->SetSprite(Sprite);
	Component->SetSpriteColor(Color);
	Component->SetWorldLocationAndRotation(TileCenter + WorldOffset, TargetTileMap->GetComponentRotation());
	ApplyTileFlipToComponent(Component, Tile, bAnimatedPlane);

	Owner->AddInstanceComponent(Component);
	Component->RegisterComponent();

	USceneComponent* AttachParent = bAttachPlanesToTileMap ? Cast<USceneComponent>(TargetTileMap) : Owner->GetRootComponent();
	if (!AttachParent)
	{
		AttachParent = Owner->GetRootComponent();
	}

	if (AttachParent)
	{
		Component->AttachToComponent(AttachParent, FAttachmentTransformRules::KeepWorldTransform);
	}

	RenderedSpriteComponents.Add(Component);
	return Component;
}

UEslon2DGeneratedTileSprite* UEslon2DPlaneTileMapRendererComponent::GetOrCreateSprite(const FEslon2DPaperTileRef& Tile)
{
	if (!Tile.IsValid())
	{
		return nullptr;
	}

	const FString CacheKey = FString::Printf(TEXT("%s:%d:%.4f"), *GetPathNameSafe(Tile.TileSet), Tile.TileIndex, GetEffectivePixelsPerUnrealUnit());
	if (TObjectPtr<UEslon2DGeneratedTileSprite>* ExistingSprite = SpriteCache.Find(CacheKey))
	{
		return ExistingSprite->Get();
	}

	const FName SpriteName = MakeUniqueObjectName(this, UEslon2DGeneratedTileSprite::StaticClass(), TEXT("Eslon2D_GeneratedTileSprite"));
	UEslon2DGeneratedTileSprite* Sprite = NewObject<UEslon2DGeneratedTileSprite>(this, SpriteName, RF_Transient);
	if (!Sprite || !Sprite->InitializeFromTile(Tile.TileSet, Tile.TileIndex, GetEffectivePixelsPerUnrealUnit()))
	{
		return nullptr;
	}

	SpriteCache.Add(CacheKey, Sprite);
	return Sprite;
}

void UEslon2DPlaneTileMapRendererComponent::ApplyTileFlipToComponent(UPaperSpriteComponent* Component, const FEslon2DPaperTileRef& Tile, const bool bAnimatedPlane) const
{
	if (!Component)
	{
		return;
	}

	FVector Scale = FVector::OneVector;
	Scale.X = Tile.bFlipHorizontal ? -1.0f : 1.0f;
	Scale.Z = Tile.bFlipVertical ? -1.0f : 1.0f;

	if (Tile.bFlipDiagonal)
	{
		Component->AddLocalRotation(FRotator(0.0f, 0.0f, 90.0f));
	}

	Component->SetWorldScale3D(Scale);
}

void UEslon2DPlaneTileMapRendererComponent::PruneInvalidRenderedComponents()
{
	for (int32 Index = RenderedSpriteComponents.Num() - 1; Index >= 0; --Index)
	{
		if (!IsValid(RenderedSpriteComponents[Index]))
		{
			RenderedSpriteComponents.RemoveAt(Index);
		}
	}

	for (int32 Index = RenderedChunkComponents.Num() - 1; Index >= 0; --Index)
	{
		if (!IsValid(RenderedChunkComponents[Index]))
		{
			RenderedChunkComponents.RemoveAt(Index);
		}
	}
}

void UEslon2DPlaneTileMapRendererComponent::AddUniquePoint(TArray<FIntPoint>& Points, TSet<FIntPoint>& SeenPoints, const FIntPoint& Point)
{
	if (!SeenPoints.Contains(Point))
	{
		SeenPoints.Add(Point);
		Points.Add(Point);
	}
}

TArray<FIntPoint> UEslon2DPlaneTileMapRendererComponent::BuildLinePoints(const FIntPoint Start, const FIntPoint End)
{
	TArray<FIntPoint> Points;

	int32 X0 = Start.X;
	int32 Y0 = Start.Y;
	const int32 X1 = End.X;
	const int32 Y1 = End.Y;
	const int32 Dx = FMath::Abs(X1 - X0);
	const int32 Dy = -FMath::Abs(Y1 - Y0);
	const int32 StepX = X0 < X1 ? 1 : -1;
	const int32 StepY = Y0 < Y1 ? 1 : -1;
	int32 Error = Dx + Dy;

	while (true)
	{
		Points.Add(FIntPoint(X0, Y0));

		if (X0 == X1 && Y0 == Y1)
		{
			break;
		}

		const int32 Error2 = 2 * Error;
		if (Error2 >= Dy)
		{
			Error += Dy;
			X0 += StepX;
		}

		if (Error2 <= Dx)
		{
			Error += Dx;
			Y0 += StepY;
		}
	}

	return Points;
}

TArray<FIntPoint> UEslon2DPlaneTileMapRendererComponent::BuildRectanglePoints(const FIntPoint Min, const FIntPoint Max, const bool bFilled)
{
	TArray<FIntPoint> Points;
	TSet<FIntPoint> SeenPoints;

	for (int32 Y = Min.Y; Y <= Max.Y; ++Y)
	{
		for (int32 X = Min.X; X <= Max.X; ++X)
		{
			if (bFilled || X == Min.X || X == Max.X || Y == Min.Y || Y == Max.Y)
			{
				AddUniquePoint(Points, SeenPoints, FIntPoint(X, Y));
			}
		}
	}

	return Points;
}

TArray<FIntPoint> UEslon2DPlaneTileMapRendererComponent::BuildEllipsePoints(const FIntPoint Center, const int32 RadiusX, const int32 RadiusY, const bool bFilled)
{
	TArray<FIntPoint> Points;
	TSet<FIntPoint> SeenPoints;
	const int32 Rx = FMath::Abs(RadiusX);
	const int32 Ry = FMath::Abs(RadiusY);

	if (Rx == 0 && Ry == 0)
	{
		Points.Add(Center);
		return Points;
	}

	if (bFilled)
	{
		for (int32 Y = -Ry; Y <= Ry; ++Y)
		{
			for (int32 X = -Rx; X <= Rx; ++X)
			{
				const float NormalizedX = Rx > 0 ? FMath::Square(static_cast<float>(X) / static_cast<float>(Rx)) : 0.0f;
				const float NormalizedY = Ry > 0 ? FMath::Square(static_cast<float>(Y) / static_cast<float>(Ry)) : 0.0f;
				if (NormalizedX + NormalizedY <= 1.0f)
				{
					AddUniquePoint(Points, SeenPoints, FIntPoint(Center.X + X, Center.Y + Y));
				}
			}
		}
	}
	else
	{
		for (int32 X = -Rx; X <= Rx; ++X)
		{
			const float Ratio = Rx > 0 ? static_cast<float>(X) / static_cast<float>(Rx) : 0.0f;
			const int32 Y = FMath::RoundToInt(static_cast<float>(Ry) * FMath::Sqrt(FMath::Max(0.0f, 1.0f - FMath::Square(Ratio))));
			AddUniquePoint(Points, SeenPoints, FIntPoint(Center.X + X, Center.Y + Y));
			AddUniquePoint(Points, SeenPoints, FIntPoint(Center.X + X, Center.Y - Y));
		}

		for (int32 Y = -Ry; Y <= Ry; ++Y)
		{
			const float Ratio = Ry > 0 ? static_cast<float>(Y) / static_cast<float>(Ry) : 0.0f;
			const int32 X = FMath::RoundToInt(static_cast<float>(Rx) * FMath::Sqrt(FMath::Max(0.0f, 1.0f - FMath::Square(Ratio))));
			AddUniquePoint(Points, SeenPoints, FIntPoint(Center.X + X, Center.Y + Y));
			AddUniquePoint(Points, SeenPoints, FIntPoint(Center.X - X, Center.Y + Y));
		}
	}

	return Points;
}

FIntVector UEslon2DPlaneTileMapRendererComponent::MakeCellKey(const int32 X, const int32 Y, const int32 LayerIndex)
{
	return FIntVector(X, Y, LayerIndex);
}
