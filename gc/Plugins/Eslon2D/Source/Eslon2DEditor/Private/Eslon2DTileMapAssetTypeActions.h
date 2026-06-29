#pragma once

#include "AssetTypeActions_Base.h"

class FEslon2DTileMapAssetTypeActions final : public FAssetTypeActions_Base
{
public:
	explicit FEslon2DTileMapAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;

private:
	EAssetTypeCategories::Type AssetCategory;
};
