#include "Eslon2DGeneratedTileSprite.h"

#include "PaperTileSet.h"

bool UEslon2DGeneratedTileSprite::InitializeFromTile(UPaperTileSet* InTileSet, const int32 InTileIndex, const float InPixelsPerUnrealUnit)
{
	if (!InTileSet || InTileIndex < 0 || InTileIndex >= InTileSet->GetTileCount())
	{
		return false;
	}

	UTexture2D* TileSheetTexture = InTileSet->GetTileSheetTexture();
	if (!TileSheetTexture)
	{
		return false;
	}

	FVector2D TileUV;
	if (!InTileSet->GetTileUV(InTileIndex, TileUV))
	{
		return false;
	}

	SourceTileSet = InTileSet;
	SourceTileIndex = InTileIndex;

	const FIntPoint TileSize = InTileSet->GetTileSize();
	const FIntPoint TextureSize = TileSheetTexture->GetImportedSize();
	const float EffectivePixelsPerUnrealUnit = FMath::Max(InPixelsPerUnrealUnit, KINDA_SMALL_NUMBER);

	PixelsPerUnrealUnit = EffectivePixelsPerUnrealUnit;
	BakedSourceTexture = TileSheetTexture;
	BakedSourceUV = TileUV;
	BakedSourceDimension = FVector2D(TileSize);
	AdditionalSourceTextures.Reset();
	for (UTexture* AdditionalTexture : InTileSet->GetAdditionalTextures())
	{
		AdditionalSourceTextures.Add(AdditionalTexture);
	}
	AlternateMaterialSplitIndex = INDEX_NONE;

#if WITH_EDITORONLY_DATA
	SourceTexture = TileSheetTexture;
	SourceTextureDimension = FVector2D(TextureSize);
	SourceUV = TileUV;
	SourceDimension = FVector2D(TileSize);
	PivotMode = ESpritePivotMode::Center_Center;
	CustomPivotPoint = TileUV + (FVector2D(TileSize) * 0.5f);
#endif

	const float HalfWidth = (static_cast<float>(TileSize.X) / EffectivePixelsPerUnrealUnit) * 0.5f;
	const float HalfHeight = (static_cast<float>(TileSize.Y) / EffectivePixelsPerUnrealUnit) * 0.5f;
	const float U0 = TileUV.X / static_cast<float>(TextureSize.X);
	const float V0 = TileUV.Y / static_cast<float>(TextureSize.Y);
	const float U1 = (TileUV.X + static_cast<float>(TileSize.X)) / static_cast<float>(TextureSize.X);
	const float V1 = (TileUV.Y + static_cast<float>(TileSize.Y)) / static_cast<float>(TextureSize.Y);

	BakedRenderData.Reset(6);
	BakedRenderData.Add(FVector4(-HalfWidth, HalfHeight, U0, V0));
	BakedRenderData.Add(FVector4(HalfWidth, -HalfHeight, U1, V1));
	BakedRenderData.Add(FVector4(HalfWidth, HalfHeight, U1, V0));
	BakedRenderData.Add(FVector4(-HalfWidth, HalfHeight, U0, V0));
	BakedRenderData.Add(FVector4(-HalfWidth, -HalfHeight, U0, V1));
	BakedRenderData.Add(FVector4(HalfWidth, -HalfHeight, U1, V1));

	return true;
}
