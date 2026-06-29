#include "Eslon2DTileMapAssetTypeActions.h"

#include "Math/ColorList.h"
#include "Eslon2DTileMapAsset.h"

#define LOCTEXT_NAMESPACE "FEslon2DTileMapAssetTypeActions"

FEslon2DTileMapAssetTypeActions::FEslon2DTileMapAssetTypeActions(const EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FEslon2DTileMapAssetTypeActions::GetName() const
{
	return LOCTEXT("Eslon2DTileMapName", "Tilemap");
}

FColor FEslon2DTileMapAssetTypeActions::GetTypeColor() const
{
	return FColor(184, 134, 11);
}

UClass* FEslon2DTileMapAssetTypeActions::GetSupportedClass() const
{
	return UEslon2DTileMapAsset::StaticClass();
}

uint32 FEslon2DTileMapAssetTypeActions::GetCategories()
{
	return AssetCategory;
}

#undef LOCTEXT_NAMESPACE
