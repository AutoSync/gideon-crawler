#include "Eslon2DTileMapAsset.h"

bool UEslon2DTileMapAsset::IsValidCoordinate(const int32 X, const int32 Y) const
{
	return X >= 0 && Y >= 0 && X < Width && Y < Height;
}

int32 UEslon2DTileMapAsset::ToTileIndex(const int32 X, const int32 Y) const
{
	return IsValidCoordinate(X, Y) ? X + (Y * Width) : INDEX_NONE;
}

void UEslon2DTileMapAsset::InitializeFromPaperTileSet(UPaperTileSet* InTileSet, const int32 InWidth, const int32 InHeight, const bool bCreateDefaultLayer)
{
	SourceTileSet = InTileSet;
	Width = FMath::Max(1, InWidth);
	Height = FMath::Max(1, InHeight);

	if (SourceTileSet)
	{
		TileSize = SourceTileSet->GetTileSize();
	}

	if (bCreateDefaultLayer)
	{
		EnsureDefaultLayer();
	}
}

void UEslon2DTileMapAsset::EnsureDefaultLayer()
{
	FEslon2DTileLayer* DefaultLayer = Layers.FindByPredicate([](const FEslon2DTileLayer& Layer)
	{
		return Layer.LayerName == TEXT("Default");
	});

	if (!DefaultLayer)
	{
		DefaultLayer = &Layers.AddDefaulted_GetRef();
		DefaultLayer->LayerName = TEXT("Default");
	}

	DefaultLayer->Tiles.SetNum(Width * Height);
}
