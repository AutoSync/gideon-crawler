#include "Eslon2DTileMapAsset.h"

bool UEslon2DTileMapAsset::IsValidCoordinate(const int32 X, const int32 Y) const
{
	return X >= 0 && Y >= 0 && X < Width && Y < Height;
}

int32 UEslon2DTileMapAsset::ToTileIndex(const int32 X, const int32 Y) const
{
	return IsValidCoordinate(X, Y) ? X + (Y * Width) : INDEX_NONE;
}
