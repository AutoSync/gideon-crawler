#include "Eslon2DTileMapComponent.h"

UEslon2DTileMapComponent::UEslon2DTileMapComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UEslon2DTileMapComponent::InitializeFromAsset(UEslon2DTileMapAsset* InTileMapAsset)
{
	TileMapAsset = InTileMapAsset;

	if (TileMapAsset)
	{
		Width = FMath::Max(1, TileMapAsset->Width);
		Height = FMath::Max(1, TileMapAsset->Height);
		RuntimeLayers = TileMapAsset->Layers;

		for (FEslon2DTileLayer& Layer : RuntimeLayers)
		{
			EnsureLayerSize(Layer);
		}
	}
}

void UEslon2DTileMapComponent::ResizeMap(const int32 NewWidth, const int32 NewHeight)
{
	Width = FMath::Max(1, NewWidth);
	Height = FMath::Max(1, NewHeight);

	for (FEslon2DTileLayer& Layer : RuntimeLayers)
	{
		EnsureLayerSize(Layer);
	}
}

bool UEslon2DTileMapComponent::SetTile(const int32 X, const int32 Y, const FName LayerName, const FEslon2DTileRef& Tile)
{
	if (!IsValidCoordinate(X, Y))
	{
		return false;
	}

	FEslon2DTileLayer* Layer = FindLayer(LayerName);
	if (!Layer)
	{
		Layer = &RuntimeLayers.AddDefaulted_GetRef();
		Layer->LayerName = LayerName.IsNone() ? TEXT("Default") : LayerName;
		EnsureLayerSize(*Layer);
	}

	const int32 TileIndex = ToTileIndex(X, Y);
	Layer->Tiles[TileIndex] = Tile;
	Layer->Tiles[TileIndex].bIsEmpty = false;
	OnTileChanged.Broadcast(X, Y, Layer->LayerName, Layer->Tiles[TileIndex]);
	return true;
}

bool UEslon2DTileMapComponent::GetTile(const int32 X, const int32 Y, const FName LayerName, FEslon2DTileRef& OutTile) const
{
	const FEslon2DTileLayer* Layer = FindLayer(LayerName);
	const int32 TileIndex = ToTileIndex(X, Y);

	if (!Layer || TileIndex == INDEX_NONE || !Layer->Tiles.IsValidIndex(TileIndex))
	{
		return false;
	}

	OutTile = Layer->Tiles[TileIndex];
	return !OutTile.bIsEmpty;
}

bool UEslon2DTileMapComponent::ClearTile(const int32 X, const int32 Y, const FName LayerName)
{
	FEslon2DTileLayer* Layer = FindLayer(LayerName);
	const int32 TileIndex = ToTileIndex(X, Y);

	if (!Layer || TileIndex == INDEX_NONE || !Layer->Tiles.IsValidIndex(TileIndex))
	{
		return false;
	}

	Layer->Tiles[TileIndex] = FEslon2DTileRef();
	OnTileChanged.Broadcast(X, Y, Layer->LayerName, Layer->Tiles[TileIndex]);
	return true;
}

bool UEslon2DTileMapComponent::IsValidCoordinate(const int32 X, const int32 Y) const
{
	return X >= 0 && Y >= 0 && X < Width && Y < Height;
}

FEslon2DTileLayer* UEslon2DTileMapComponent::FindLayer(const FName LayerName)
{
	const FName NormalizedLayerName = LayerName.IsNone() ? TEXT("Default") : LayerName;
	return RuntimeLayers.FindByPredicate([NormalizedLayerName](const FEslon2DTileLayer& Layer)
	{
		return Layer.LayerName == NormalizedLayerName;
	});
}

const FEslon2DTileLayer* UEslon2DTileMapComponent::FindLayer(const FName LayerName) const
{
	const FName NormalizedLayerName = LayerName.IsNone() ? TEXT("Default") : LayerName;
	return RuntimeLayers.FindByPredicate([NormalizedLayerName](const FEslon2DTileLayer& Layer)
	{
		return Layer.LayerName == NormalizedLayerName;
	});
}

int32 UEslon2DTileMapComponent::ToTileIndex(const int32 X, const int32 Y) const
{
	return IsValidCoordinate(X, Y) ? X + (Y * Width) : INDEX_NONE;
}

void UEslon2DTileMapComponent::EnsureLayerSize(FEslon2DTileLayer& Layer)
{
	Layer.Tiles.SetNum(Width * Height);
}
