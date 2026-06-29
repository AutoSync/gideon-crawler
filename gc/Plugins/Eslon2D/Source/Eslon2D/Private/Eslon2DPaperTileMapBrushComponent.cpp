#include "Eslon2DPaperTileMapBrushComponent.h"

#include "Containers/Queue.h"
#include "GameFramework/Actor.h"
#include "PaperTileMapComponent.h"

UEslon2DPaperTileMapBrushComponent::UEslon2DPaperTileMapBrushComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UEslon2DPaperTileMapBrushComponent::SetTargetTileMap(UPaperTileMapComponent* InTargetTileMap)
{
	TargetTileMap = InTargetTileMap;
}

void UEslon2DPaperTileMapBrushComponent::SetTargetLayer(const int32 InLayerIndex)
{
	TargetLayerIndex = FMath::Max(0, InLayerIndex);
}

void UEslon2DPaperTileMapBrushComponent::SetBrush(const FEslon2DTileBrush& InBrush)
{
	CurrentBrush = InBrush;
	NormalizeCurrentBrush();
}

void UEslon2DPaperTileMapBrushComponent::SetSingleTileBrush(const FEslon2DPaperTileRef& Tile)
{
	CurrentBrush = FEslon2DTileBrush();

	if (Tile.IsValid())
	{
		FEslon2DTileBrushCell& Cell = CurrentBrush.Cells.AddDefaulted_GetRef();
		Cell.Tile = Tile;
	}
}

void UEslon2DPaperTileMapBrushComponent::SetPaletteBrush(const TArray<FEslon2DPaperTileRef>& Tiles, const bool bRandomizeTiles)
{
	CurrentBrush = FEslon2DTileBrush();
	CurrentBrush.bRandomizeTiles = bRandomizeTiles;

	for (const FEslon2DPaperTileRef& Tile : Tiles)
	{
		if (Tile.IsValid())
		{
			FEslon2DTileBrushCell& Cell = CurrentBrush.Cells.AddDefaulted_GetRef();
			Cell.Tile = Tile;
		}
	}

	CurrentBrush.bRandomizeTiles = CurrentBrush.bRandomizeTiles && CurrentBrush.Cells.Num() > 1;
}

void UEslon2DPaperTileMapBrushComponent::SetPatternBrush(const TArray<FEslon2DTileBrushCell>& Cells, const FIntPoint PatternSize, const bool bRepeatPattern)
{
	CurrentBrush = FEslon2DTileBrush();
	CurrentBrush.Cells = Cells;
	CurrentBrush.PatternSize = PatternSize;
	CurrentBrush.bRepeatPattern = bRepeatPattern;
	NormalizeCurrentBrush();
}

int32 UEslon2DPaperTileMapBrushComponent::CaptureBrushFromMap(const int32 MinX, const int32 MinY, const int32 MaxX, const int32 MaxY, const int32 LayerIndex, const bool bIncludeEmptyCells)
{
	int32 EffectiveLayer = 0;
	int32 MapWidth = 0;
	int32 MapHeight = 0;
	int32 NumLayers = 0;
	if (!GetTargetMapInfo(LayerIndex, EffectiveLayer, MapWidth, MapHeight, NumLayers))
	{
		return 0;
	}

	const int32 X0 = FMath::Clamp(FMath::Min(MinX, MaxX), 0, MapWidth - 1);
	const int32 X1 = FMath::Clamp(FMath::Max(MinX, MaxX), 0, MapWidth - 1);
	const int32 Y0 = FMath::Clamp(FMath::Min(MinY, MaxY), 0, MapHeight - 1);
	const int32 Y1 = FMath::Clamp(FMath::Max(MinY, MaxY), 0, MapHeight - 1);

	FEslon2DTileBrush NewBrush;
	NewBrush.PatternSize = FIntPoint(FMath::Max(1, X1 - X0 + 1), FMath::Max(1, Y1 - Y0 + 1));

	for (int32 Y = Y0; Y <= Y1; ++Y)
	{
		for (int32 X = X0; X <= X1; ++X)
		{
			const FPaperTileInfo TileInfo = TargetTileMap->GetTile(X, Y, EffectiveLayer);
			if (TileInfo.IsValid())
			{
				FEslon2DTileBrushCell& Cell = NewBrush.Cells.AddDefaulted_GetRef();
				Cell.Offset = FIntPoint(X - X0, Y - Y0);
				Cell.Tile = FEslon2DPaperTileRef::FromPaperTileInfo(TileInfo);
			}
			else if (bIncludeEmptyCells)
			{
				FEslon2DTileBrushCell& Cell = NewBrush.Cells.AddDefaulted_GetRef();
				Cell.Offset = FIntPoint(X - X0, Y - Y0);
				Cell.bErase = true;
			}
		}
	}

	CurrentBrush = NewBrush;
	return CurrentBrush.Cells.Num();
}

int32 UEslon2DPaperTileMapBrushComponent::PaintSingle(const int32 X, const int32 Y, const int32 LayerIndex)
{
	return PaintPoints({ FIntPoint(X, Y) }, FIntPoint(X, Y), LayerIndex);
}

int32 UEslon2DPaperTileMapBrushComponent::PaintLine(const int32 StartX, const int32 StartY, const int32 EndX, const int32 EndY, const int32 LayerIndex)
{
	return PaintPoints(BuildLinePoints(FIntPoint(StartX, StartY), FIntPoint(EndX, EndY)), FIntPoint(StartX, StartY), LayerIndex);
}

int32 UEslon2DPaperTileMapBrushComponent::PaintRectangle(const int32 MinX, const int32 MinY, const int32 MaxX, const int32 MaxY, const bool bFilled, const int32 LayerIndex)
{
	const FIntPoint Min(FMath::Min(MinX, MaxX), FMath::Min(MinY, MaxY));
	const FIntPoint Max(FMath::Max(MinX, MaxX), FMath::Max(MinY, MaxY));
	return PaintPoints(BuildRectanglePoints(Min, Max, bFilled), Min, LayerIndex);
}

int32 UEslon2DPaperTileMapBrushComponent::PaintEllipse(const int32 CenterX, const int32 CenterY, const int32 RadiusX, const int32 RadiusY, const bool bFilled, const int32 LayerIndex)
{
	return PaintPoints(BuildEllipsePoints(FIntPoint(CenterX, CenterY), RadiusX, RadiusY, bFilled), FIntPoint(CenterX - FMath::Abs(RadiusX), CenterY - FMath::Abs(RadiusY)), LayerIndex);
}

int32 UEslon2DPaperTileMapBrushComponent::FloodFill(const int32 StartX, const int32 StartY, const int32 LayerIndex, const int32 MaxTiles)
{
	if (MaxTiles <= 0)
	{
		return 0;
	}

	int32 EffectiveLayer = 0;
	int32 MapWidth = 0;
	int32 MapHeight = 0;
	if (!PrepareTargetForPaint(LayerIndex, EffectiveLayer, MapWidth, MapHeight))
	{
		return 0;
	}

	if (StartX < 0 || StartY < 0 || StartX >= MapWidth || StartY >= MapHeight)
	{
		return 0;
	}

	const FPaperTileInfo OriginalTile = TargetTileMap->GetTile(StartX, StartY, EffectiveLayer);
	TQueue<FIntPoint> Pending;
	TSet<FIntPoint> Visited;
	TArray<FIntPoint> Region;

	Pending.Enqueue(FIntPoint(StartX, StartY));

	while (!Pending.IsEmpty() && Region.Num() < MaxTiles)
	{
		FIntPoint Current;
		Pending.Dequeue(Current);

		if (Visited.Contains(Current))
		{
			continue;
		}

		Visited.Add(Current);

		if (Current.X < 0 || Current.Y < 0 || Current.X >= MapWidth || Current.Y >= MapHeight)
		{
			continue;
		}

		const FPaperTileInfo CurrentTile = TargetTileMap->GetTile(Current.X, Current.Y, EffectiveLayer);
		if (CurrentTile != OriginalTile)
		{
			continue;
		}

		Region.Add(Current);
		Pending.Enqueue(FIntPoint(Current.X + 1, Current.Y));
		Pending.Enqueue(FIntPoint(Current.X - 1, Current.Y));
		Pending.Enqueue(FIntPoint(Current.X, Current.Y + 1));
		Pending.Enqueue(FIntPoint(Current.X, Current.Y - 1));
	}

	return PaintPoints(Region, FIntPoint(StartX, StartY), EffectiveLayer);
}

int32 UEslon2DPaperTileMapBrushComponent::EraseSingle(const int32 X, const int32 Y, const int32 LayerIndex)
{
	return ErasePoints({ FIntPoint(X, Y) }, LayerIndex);
}

int32 UEslon2DPaperTileMapBrushComponent::EraseLine(const int32 StartX, const int32 StartY, const int32 EndX, const int32 EndY, const int32 LayerIndex)
{
	return ErasePoints(BuildLinePoints(FIntPoint(StartX, StartY), FIntPoint(EndX, EndY)), LayerIndex);
}

int32 UEslon2DPaperTileMapBrushComponent::EraseRectangle(const int32 MinX, const int32 MinY, const int32 MaxX, const int32 MaxY, const bool bFilled, const int32 LayerIndex)
{
	const FIntPoint Min(FMath::Min(MinX, MaxX), FMath::Min(MinY, MaxY));
	const FIntPoint Max(FMath::Max(MinX, MaxX), FMath::Max(MinY, MaxY));
	return ErasePoints(BuildRectanglePoints(Min, Max, bFilled), LayerIndex);
}

int32 UEslon2DPaperTileMapBrushComponent::EraseEllipse(const int32 CenterX, const int32 CenterY, const int32 RadiusX, const int32 RadiusY, const bool bFilled, const int32 LayerIndex)
{
	return ErasePoints(BuildEllipsePoints(FIntPoint(CenterX, CenterY), RadiusX, RadiusY, bFilled), LayerIndex);
}

bool UEslon2DPaperTileMapBrushComponent::PickTile(const int32 X, const int32 Y, FEslon2DPaperTileRef& OutTile, const int32 LayerIndex) const
{
	int32 EffectiveLayer = 0;
	int32 MapWidth = 0;
	int32 MapHeight = 0;
	int32 NumLayers = 0;
	if (!GetTargetMapInfo(LayerIndex, EffectiveLayer, MapWidth, MapHeight, NumLayers))
	{
		return false;
	}

	if (X < 0 || Y < 0 || X >= MapWidth || Y >= MapHeight)
	{
		return false;
	}

	const FPaperTileInfo TileInfo = TargetTileMap->GetTile(X, Y, EffectiveLayer);
	if (!TileInfo.IsValid())
	{
		return false;
	}

	OutTile = FEslon2DPaperTileRef::FromPaperTileInfo(TileInfo);
	return true;
}

bool UEslon2DPaperTileMapBrushComponent::PrepareTargetForPaint(const int32 RequestedLayerIndex, int32& OutLayerIndex, int32& OutMapWidth, int32& OutMapHeight) const
{
	if (!TargetTileMap)
	{
		return false;
	}

#if WITH_EDITOR
	if (AActor* Owner = TargetTileMap->GetOwner())
	{
		Owner->Modify();
	}
	TargetTileMap->Modify();
#endif

	if (bMakeTileMapEditableBeforePaint)
	{
		TargetTileMap->MakeTileMapEditable();
	}

	int32 NumLayers = 0;
	TargetTileMap->GetMapSize(OutMapWidth, OutMapHeight, NumLayers);
	OutLayerIndex = RequestedLayerIndex >= 0 ? RequestedLayerIndex : TargetLayerIndex;

	while (OutLayerIndex >= NumLayers && OutLayerIndex >= 0)
	{
		TargetTileMap->AddNewLayer();
		TargetTileMap->GetMapSize(OutMapWidth, OutMapHeight, NumLayers);
	}

	return OutMapWidth > 0 && OutMapHeight > 0 && OutLayerIndex >= 0 && OutLayerIndex < NumLayers;
}

bool UEslon2DPaperTileMapBrushComponent::GetTargetMapInfo(const int32 RequestedLayerIndex, int32& OutLayerIndex, int32& OutMapWidth, int32& OutMapHeight, int32& OutNumLayers) const
{
	if (!TargetTileMap)
	{
		return false;
	}

	TargetTileMap->GetMapSize(OutMapWidth, OutMapHeight, OutNumLayers);
	OutLayerIndex = RequestedLayerIndex >= 0 ? RequestedLayerIndex : TargetLayerIndex;
	return OutMapWidth > 0 && OutMapHeight > 0 && OutLayerIndex >= 0 && OutLayerIndex < OutNumLayers;
}

int32 UEslon2DPaperTileMapBrushComponent::PaintPoints(const TArray<FIntPoint>& Points, const FIntPoint& BrushOrigin, const int32 LayerIndex)
{
	if (!CurrentBrush.HasPaintableCells())
	{
		return 0;
	}

	int32 EffectiveLayer = 0;
	int32 MapWidth = 0;
	int32 MapHeight = 0;
	if (!PrepareTargetForPaint(LayerIndex, EffectiveLayer, MapWidth, MapHeight))
	{
		return 0;
	}

	FRandomStream RandomStream(CurrentBrush.bUseDeterministicSeed ? CurrentBrush.Seed : FMath::Rand());
	TSet<FIntPoint> SeenPoints;
	int32 PaintedCount = 0;

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

		FEslon2DTileBrushCell BrushCell;
		if (!ResolveBrushCell(Point, BrushOrigin, RandomStream, BrushCell))
		{
			continue;
		}

		FPaperTileInfo TileInfo;
		bool bErased = false;
		if (BrushCell.bErase)
		{
			bErased = true;
		}
		else
		{
			if (!BrushCell.Tile.IsValid())
			{
				continue;
			}

			TileInfo = BrushCell.Tile.ToPaperTileInfo();
		}

		TargetTileMap->SetTile(Point.X, Point.Y, EffectiveLayer, TileInfo);
		OnTilePainted.Broadcast(Point.X, Point.Y, EffectiveLayer, TileInfo, bErased);
		++PaintedCount;
	}

	if (PaintedCount > 0 && bRebuildCollisionAfterPaint)
	{
		TargetTileMap->RebuildCollision();
	}

	return PaintedCount;
}

int32 UEslon2DPaperTileMapBrushComponent::ErasePoints(const TArray<FIntPoint>& Points, const int32 LayerIndex)
{
	int32 EffectiveLayer = 0;
	int32 MapWidth = 0;
	int32 MapHeight = 0;
	if (!PrepareTargetForPaint(LayerIndex, EffectiveLayer, MapWidth, MapHeight))
	{
		return 0;
	}

	TSet<FIntPoint> SeenPoints;
	int32 ErasedCount = 0;

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

		FPaperTileInfo EmptyTile;
		TargetTileMap->SetTile(Point.X, Point.Y, EffectiveLayer, EmptyTile);
		OnTilePainted.Broadcast(Point.X, Point.Y, EffectiveLayer, EmptyTile, true);
		++ErasedCount;
	}

	if (ErasedCount > 0 && bRebuildCollisionAfterPaint)
	{
		TargetTileMap->RebuildCollision();
	}

	return ErasedCount;
}

bool UEslon2DPaperTileMapBrushComponent::ResolveBrushCell(const FIntPoint& Point, const FIntPoint& BrushOrigin, FRandomStream& RandomStream, FEslon2DTileBrushCell& OutCell) const
{
	if (CurrentBrush.Cells.IsEmpty())
	{
		return false;
	}

	if (CurrentBrush.EmptyChance > 0.0f && RandomStream.GetFraction() < CurrentBrush.EmptyChance)
	{
		return false;
	}

	if (CurrentBrush.bRandomizeTiles)
	{
		float TotalWeight = 0.0f;
		for (const FEslon2DTileBrushCell& Cell : CurrentBrush.Cells)
		{
			if (Cell.CanPaint())
			{
				TotalWeight += FMath::Max(0.0f, Cell.Weight);
			}
		}

		if (TotalWeight <= 0.0f)
		{
			return false;
		}

		float Roll = RandomStream.GetFraction() * TotalWeight;
		for (const FEslon2DTileBrushCell& Cell : CurrentBrush.Cells)
		{
			if (!Cell.CanPaint())
			{
				continue;
			}

			Roll -= FMath::Max(0.0f, Cell.Weight);
			if (Roll <= 0.0f)
			{
				OutCell = Cell;
				OutCell.Offset = FIntPoint::ZeroValue;
				return true;
			}
		}

		return false;
	}

	const FIntPoint PatternSize(FMath::Max(1, CurrentBrush.PatternSize.X), FMath::Max(1, CurrentBrush.PatternSize.Y));
	FIntPoint Relative = Point - BrushOrigin;

	if (CurrentBrush.bRepeatPattern)
	{
		Relative.X = PositiveModulo(Relative.X, PatternSize.X);
		Relative.Y = PositiveModulo(Relative.Y, PatternSize.Y);
	}
	else if (Relative.X < 0 || Relative.Y < 0 || Relative.X >= PatternSize.X || Relative.Y >= PatternSize.Y)
	{
		return false;
	}

	for (const FEslon2DTileBrushCell& Cell : CurrentBrush.Cells)
	{
		if (Cell.Offset == Relative && Cell.CanPaint())
		{
			OutCell = Cell;
			return true;
		}
	}

	return false;
}

void UEslon2DPaperTileMapBrushComponent::NormalizeCurrentBrush()
{
	int32 MaxX = 0;
	int32 MaxY = 0;
	for (const FEslon2DTileBrushCell& Cell : CurrentBrush.Cells)
	{
		MaxX = FMath::Max(MaxX, Cell.Offset.X);
		MaxY = FMath::Max(MaxY, Cell.Offset.Y);
	}

	CurrentBrush.PatternSize.X = FMath::Max(CurrentBrush.PatternSize.X, MaxX + 1);
	CurrentBrush.PatternSize.Y = FMath::Max(CurrentBrush.PatternSize.Y, MaxY + 1);
	CurrentBrush.PatternSize.X = FMath::Max(1, CurrentBrush.PatternSize.X);
	CurrentBrush.PatternSize.Y = FMath::Max(1, CurrentBrush.PatternSize.Y);
	CurrentBrush.EmptyChance = FMath::Clamp(CurrentBrush.EmptyChance, 0.0f, 1.0f);
}

void UEslon2DPaperTileMapBrushComponent::AddUniquePoint(TArray<FIntPoint>& Points, TSet<FIntPoint>& SeenPoints, const FIntPoint& Point)
{
	if (!SeenPoints.Contains(Point))
	{
		SeenPoints.Add(Point);
		Points.Add(Point);
	}
}

TArray<FIntPoint> UEslon2DPaperTileMapBrushComponent::BuildLinePoints(const FIntPoint Start, const FIntPoint End)
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

TArray<FIntPoint> UEslon2DPaperTileMapBrushComponent::BuildRectanglePoints(const FIntPoint Min, const FIntPoint Max, const bool bFilled)
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

TArray<FIntPoint> UEslon2DPaperTileMapBrushComponent::BuildEllipsePoints(const FIntPoint Center, const int32 RadiusX, const int32 RadiusY, const bool bFilled)
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

int32 UEslon2DPaperTileMapBrushComponent::PositiveModulo(const int32 Value, const int32 Divisor)
{
	if (Divisor <= 0)
	{
		return 0;
	}

	const int32 Remainder = Value % Divisor;
	return Remainder < 0 ? Remainder + Divisor : Remainder;
}
