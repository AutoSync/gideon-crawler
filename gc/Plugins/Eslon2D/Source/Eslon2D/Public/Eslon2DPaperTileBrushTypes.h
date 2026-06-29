#pragma once

#include "CoreMinimal.h"
#include "PaperTileLayer.h"
#include "Eslon2DPaperTileBrushTypes.generated.h"

class UPaperFlipbook;
class UPaperTileSet;

USTRUCT(BlueprintType)
struct ESLON2D_API FEslon2DPaperTileRef
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tile")
	TObjectPtr<UPaperTileSet> TileSet = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tile")
	int32 TileIndex = INDEX_NONE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tile")
	bool bFlipHorizontal = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tile")
	bool bFlipVertical = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Paper Tile")
	bool bFlipDiagonal = false;

	bool IsValid() const
	{
		return TileSet != nullptr && TileIndex != INDEX_NONE;
	}

	FPaperTileInfo ToPaperTileInfo() const
	{
		FPaperTileInfo TileInfo;
		TileInfo.TileSet = TileSet;
		TileInfo.PackedTileIndex = TileIndex;
		TileInfo.SetFlagValue(EPaperTileFlags::FlipHorizontal, bFlipHorizontal);
		TileInfo.SetFlagValue(EPaperTileFlags::FlipVertical, bFlipVertical);
		TileInfo.SetFlagValue(EPaperTileFlags::FlipDiagonal, bFlipDiagonal);
		return TileInfo;
	}

	static FEslon2DPaperTileRef FromPaperTileInfo(const FPaperTileInfo& TileInfo)
	{
		FEslon2DPaperTileRef TileRef;
		TileRef.TileSet = TileInfo.TileSet;
		TileRef.TileIndex = TileInfo.GetTileIndex();
		TileRef.bFlipHorizontal = TileInfo.HasFlag(EPaperTileFlags::FlipHorizontal);
		TileRef.bFlipVertical = TileInfo.HasFlag(EPaperTileFlags::FlipVertical);
		TileRef.bFlipDiagonal = TileInfo.HasFlag(EPaperTileFlags::FlipDiagonal);
		return TileRef;
	}
};

USTRUCT(BlueprintType)
struct ESLON2D_API FEslon2DTileBrushCell
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush")
	FIntPoint Offset = FIntPoint::ZeroValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush")
	FEslon2DPaperTileRef Tile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush")
	bool bErase = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush", meta = (ClampMin = "0.0"))
	float Weight = 1.0f;

	bool CanPaint() const
	{
		return bErase || Tile.IsValid();
	}
};

USTRUCT(BlueprintType)
struct ESLON2D_API FEslon2DTileBrush
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush")
	TArray<FEslon2DTileBrushCell> Cells;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush", meta = (ClampMin = "1"))
	FIntPoint PatternSize = FIntPoint(1, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush")
	bool bRepeatPattern = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush")
	bool bRandomizeTiles = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float EmptyChance = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush")
	bool bUseDeterministicSeed = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile Brush")
	int32 Seed = 1337;

	bool HasPaintableCells() const
	{
		for (const FEslon2DTileBrushCell& Cell : Cells)
		{
			if (Cell.CanPaint())
			{
				return true;
			}
		}

		return false;
	}
};

USTRUCT(BlueprintType)
struct ESLON2D_API FEslon2DFlipbookBrushEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	TObjectPtr<UPaperFlipbook> Flipbook = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	FVector LocalOffset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	FRotator Rotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	FVector Scale = FVector::OneVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	FLinearColor Color = FLinearColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush", meta = (ClampMin = "0.0"))
	float PlayRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	bool bLooping = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush", meta = (ClampMin = "0.0"))
	float StartTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush", meta = (ClampMin = "0.0"))
	float Weight = 1.0f;

	bool IsValid() const
	{
		return Flipbook != nullptr;
	}
};

USTRUCT(BlueprintType)
struct ESLON2D_API FEslon2DFlipbookBrush
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	TArray<FEslon2DFlipbookBrushEntry> Entries;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float EmptyChance = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	bool bAttachToTileMap = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	FName ComponentTag = TEXT("Eslon2D.FlipbookBrush");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	bool bUseDeterministicSeed = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Flipbook Brush")
	int32 Seed = 1337;

	bool HasValidEntries() const
	{
		for (const FEslon2DFlipbookBrushEntry& Entry : Entries)
		{
			if (Entry.IsValid())
			{
				return true;
			}
		}

		return false;
	}
};

USTRUCT(BlueprintType)
struct ESLON2D_API FEslon2DAnimatedTileDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile")
	FName AnimationName = TEXT("AnimatedTile");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile")
	TArray<FEslon2DPaperTileRef> Frames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile", meta = (ClampMin = "0.01"))
	float FramesPerSecond = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile")
	bool bLooping = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile")
	bool bRandomStartFrame = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile")
	FVector LocalOffset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile")
	FLinearColor Color = FLinearColor::White;

	bool IsValid() const
	{
		if (AnimationName.IsNone())
		{
			return false;
		}

		for (const FEslon2DPaperTileRef& Frame : Frames)
		{
			if (Frame.IsValid())
			{
				return true;
			}
		}

		return false;
	}
};

USTRUCT(BlueprintType)
struct ESLON2D_API FEslon2DAnimatedTileInstance
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile")
	FIntPoint Coordinate = FIntPoint::ZeroValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile", meta = (ClampMin = "0"))
	int32 LayerIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile")
	FName AnimationName = TEXT("AnimatedTile");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Animated Tile", meta = (ClampMin = "0.0"))
	float StartTimeOffset = 0.0f;
};
