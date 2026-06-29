#pragma once

#include "AssetTypeCategories.h"
#include "Modules/ModuleManager.h"

class FEslon2DEditorModule final : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	EAssetTypeCategories::Type GetEslon2DAssetCategory() const { return Eslon2DAssetCategoryBit; }

private:
	void RegisterMenus();
	TSharedRef<class SDockTab> SpawnViewportTab(const class FSpawnTabArgs& Args);
	void RegisterAssetTypes();
	void UnregisterAssetTypes();

	EAssetTypeCategories::Type Eslon2DAssetCategoryBit = EAssetTypeCategories::Misc;
	TArray<TSharedPtr<class IAssetTypeActions>> CreatedAssetTypeActions;
};
