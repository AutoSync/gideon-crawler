#include "Eslon2DFlipbookBrushComponent.h"

#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "PaperFlipbookComponent.h"
#include "PaperTileMapComponent.h"

UEslon2DFlipbookBrushComponent::UEslon2DFlipbookBrushComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UEslon2DFlipbookBrushComponent::SetTargetTileMap(UPaperTileMapComponent* InTargetTileMap)
{
	TargetTileMap = InTargetTileMap;
}

void UEslon2DFlipbookBrushComponent::SetTargetLayer(const int32 InLayerIndex)
{
	TargetLayerIndex = FMath::Max(0, InLayerIndex);
}

void UEslon2DFlipbookBrushComponent::SetBrush(const FEslon2DFlipbookBrush& InBrush)
{
	CurrentBrush = InBrush;
	CurrentBrush.EmptyChance = FMath::Clamp(CurrentBrush.EmptyChance, 0.0f, 1.0f);
}

int32 UEslon2DFlipbookBrushComponent::SpawnSingle(const int32 X, const int32 Y, const int32 LayerIndex)
{
	return SpawnAtPoints({ FIntPoint(X, Y) }, LayerIndex);
}

int32 UEslon2DFlipbookBrushComponent::SpawnLine(const int32 StartX, const int32 StartY, const int32 EndX, const int32 EndY, const int32 LayerIndex)
{
	return SpawnAtPoints(BuildLinePoints(FIntPoint(StartX, StartY), FIntPoint(EndX, EndY)), LayerIndex);
}

int32 UEslon2DFlipbookBrushComponent::SpawnRectangle(const int32 MinX, const int32 MinY, const int32 MaxX, const int32 MaxY, const bool bFilled, const int32 LayerIndex)
{
	const FIntPoint Min(FMath::Min(MinX, MaxX), FMath::Min(MinY, MaxY));
	const FIntPoint Max(FMath::Max(MinX, MaxX), FMath::Max(MinY, MaxY));
	return SpawnAtPoints(BuildRectanglePoints(Min, Max, bFilled), LayerIndex);
}

int32 UEslon2DFlipbookBrushComponent::SpawnEllipse(const int32 CenterX, const int32 CenterY, const int32 RadiusX, const int32 RadiusY, const bool bFilled, const int32 LayerIndex)
{
	return SpawnAtPoints(BuildEllipsePoints(FIntPoint(CenterX, CenterY), RadiusX, RadiusY, bFilled), LayerIndex);
}

int32 UEslon2DFlipbookBrushComponent::ClearSpawnedFlipbooks(const bool bDestroyOnlyBrushTagged)
{
	int32 DestroyedCount = 0;

	for (int32 Index = SpawnedFlipbooks.Num() - 1; Index >= 0; --Index)
	{
		UPaperFlipbookComponent* Component = SpawnedFlipbooks[Index];
		if (!IsValid(Component))
		{
			SpawnedFlipbooks.RemoveAt(Index);
			continue;
		}

		if (bDestroyOnlyBrushTagged && !Component->ComponentTags.Contains(CurrentBrush.ComponentTag))
		{
			continue;
		}

		Component->DestroyComponent();
		SpawnedFlipbooks.RemoveAt(Index);
		++DestroyedCount;
	}

	return DestroyedCount;
}

int32 UEslon2DFlipbookBrushComponent::GetSpawnedFlipbookCount() const
{
	int32 Count = 0;
	for (UPaperFlipbookComponent* Component : SpawnedFlipbooks)
	{
		if (IsValid(Component))
		{
			++Count;
		}
	}

	return Count;
}

void UEslon2DFlipbookBrushComponent::GetSpawnedFlipbooks(TArray<UPaperFlipbookComponent*>& OutComponents) const
{
	OutComponents.Reset();
	for (UPaperFlipbookComponent* Component : SpawnedFlipbooks)
	{
		if (IsValid(Component))
		{
			OutComponents.Add(Component);
		}
	}
}

bool UEslon2DFlipbookBrushComponent::GetTargetMapInfo(const int32 RequestedLayerIndex, int32& OutLayerIndex, int32& OutMapWidth, int32& OutMapHeight, int32& OutNumLayers) const
{
	if (!TargetTileMap)
	{
		return false;
	}

	TargetTileMap->GetMapSize(OutMapWidth, OutMapHeight, OutNumLayers);
	OutLayerIndex = RequestedLayerIndex >= 0 ? RequestedLayerIndex : TargetLayerIndex;
	return OutMapWidth > 0 && OutMapHeight > 0 && OutLayerIndex >= 0 && OutLayerIndex < OutNumLayers;
}

int32 UEslon2DFlipbookBrushComponent::SpawnAtPoints(const TArray<FIntPoint>& Points, const int32 LayerIndex)
{
	PruneInvalidSpawnedComponents();

	if (!CurrentBrush.HasValidEntries())
	{
		return 0;
	}

	int32 EffectiveLayer = 0;
	int32 MapWidth = 0;
	int32 MapHeight = 0;
	int32 NumLayers = 0;
	if (!GetTargetMapInfo(LayerIndex, EffectiveLayer, MapWidth, MapHeight, NumLayers))
	{
		return 0;
	}

#if WITH_EDITOR
	if (AActor* Owner = GetOwner())
	{
		Owner->Modify();
	}
#endif

	FRandomStream RandomStream(CurrentBrush.bUseDeterministicSeed ? CurrentBrush.Seed : FMath::Rand());
	TSet<FIntPoint> SeenPoints;
	int32 SpawnedCount = 0;

	for (const FIntPoint& Point : Points)
	{
		if (SeenPoints.Contains(Point))
		{
			continue;
		}

		SeenPoints.Add(Point);

		if (Point.X < 0 || Point.Y < 0 || Point.X >= MapWidth || Point.Y >= MapHeight)
		{
			continue;
		}

		if (CurrentBrush.EmptyChance > 0.0f && RandomStream.GetFraction() < CurrentBrush.EmptyChance)
		{
			continue;
		}

		FEslon2DFlipbookBrushEntry Entry;
		if (!ChooseEntry(RandomStream, Entry))
		{
			continue;
		}

		if (UPaperFlipbookComponent* Component = SpawnComponentAtTile(Point, EffectiveLayer, Entry))
		{
			SpawnedFlipbooks.Add(Component);
			OnFlipbookSpawned.Broadcast(Point.X, Point.Y, Component);
			++SpawnedCount;
		}
	}

	return SpawnedCount;
}

bool UEslon2DFlipbookBrushComponent::ChooseEntry(FRandomStream& RandomStream, FEslon2DFlipbookBrushEntry& OutEntry) const
{
	float TotalWeight = 0.0f;
	for (const FEslon2DFlipbookBrushEntry& Entry : CurrentBrush.Entries)
	{
		if (Entry.IsValid())
		{
			TotalWeight += FMath::Max(0.0f, Entry.Weight);
		}
	}

	if (TotalWeight <= 0.0f)
	{
		return false;
	}

	float Roll = RandomStream.GetFraction() * TotalWeight;
	for (const FEslon2DFlipbookBrushEntry& Entry : CurrentBrush.Entries)
	{
		if (!Entry.IsValid())
		{
			continue;
		}

		Roll -= FMath::Max(0.0f, Entry.Weight);
		if (Roll <= 0.0f)
		{
			OutEntry = Entry;
			return true;
		}
	}

	return false;
}

UPaperFlipbookComponent* UEslon2DFlipbookBrushComponent::SpawnComponentAtTile(const FIntPoint& Tile, const int32 LayerIndex, const FEslon2DFlipbookBrushEntry& Entry)
{
	AActor* Owner = GetOwner();
	if (!Owner || !TargetTileMap || !Entry.IsValid())
	{
		return nullptr;
	}

	const FName ComponentName = MakeUniqueObjectName(Owner, UPaperFlipbookComponent::StaticClass(), TEXT("Eslon2D_FlipbookTile"));
	UPaperFlipbookComponent* Component = NewObject<UPaperFlipbookComponent>(Owner, ComponentName, RF_Transactional);
	if (!Component)
	{
		return nullptr;
	}

	const FVector TileCenter = TargetTileMap->GetTileCenterPosition(Tile.X, Tile.Y, LayerIndex, true);
	const FVector WorldOffset = TargetTileMap->GetComponentTransform().TransformVectorNoScale(Entry.LocalOffset);
	const FRotator WorldRotation = TargetTileMap->GetComponentRotation() + Entry.Rotation;

	Component->CreationMethod = EComponentCreationMethod::Instance;
	Component->ComponentTags.AddUnique(CurrentBrush.ComponentTag);
	Component->SetMobility(EComponentMobility::Movable);
	Component->SetFlipbook(Entry.Flipbook);
	Component->SetLooping(Entry.bLooping);
	Component->SetPlayRate(Entry.PlayRate);
	Component->SetSpriteColor(Entry.Color);
	Component->SetWorldLocationAndRotation(TileCenter + WorldOffset, WorldRotation);
	Component->SetWorldScale3D(Entry.Scale);

	Owner->AddInstanceComponent(Component);
	Component->RegisterComponent();

	USceneComponent* AttachParent = CurrentBrush.bAttachToTileMap ? Cast<USceneComponent>(TargetTileMap) : Owner->GetRootComponent();
	if (!AttachParent)
	{
		AttachParent = Owner->GetRootComponent();
	}

	if (AttachParent)
	{
		Component->AttachToComponent(AttachParent, FAttachmentTransformRules::KeepWorldTransform);
	}

	Component->PlayFromStart();
	if (Entry.StartTime > 0.0f)
	{
		Component->SetNewTime(Entry.StartTime);
	}

	return Component;
}

void UEslon2DFlipbookBrushComponent::PruneInvalidSpawnedComponents()
{
	for (int32 Index = SpawnedFlipbooks.Num() - 1; Index >= 0; --Index)
	{
		if (!IsValid(SpawnedFlipbooks[Index]))
		{
			SpawnedFlipbooks.RemoveAt(Index);
		}
	}
}

void UEslon2DFlipbookBrushComponent::AddUniquePoint(TArray<FIntPoint>& Points, TSet<FIntPoint>& SeenPoints, const FIntPoint& Point)
{
	if (!SeenPoints.Contains(Point))
	{
		SeenPoints.Add(Point);
		Points.Add(Point);
	}
}

TArray<FIntPoint> UEslon2DFlipbookBrushComponent::BuildLinePoints(const FIntPoint Start, const FIntPoint End)
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

TArray<FIntPoint> UEslon2DFlipbookBrushComponent::BuildRectanglePoints(const FIntPoint Min, const FIntPoint Max, const bool bFilled)
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

TArray<FIntPoint> UEslon2DFlipbookBrushComponent::BuildEllipsePoints(const FIntPoint Center, const int32 RadiusX, const int32 RadiusY, const bool bFilled)
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
