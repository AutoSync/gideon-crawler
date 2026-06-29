#include "Eslon2DTileMapFactory.h"

#include "Eslon2DEditorModule.h"
#include "Eslon2DTileMapAsset.h"
#include "PaperTileSet.h"

UEslon2DTileMapFactory::UEslon2DTileMapFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	const FEslon2DEditorModule& EditorModule = FModuleManager::LoadModuleChecked<FEslon2DEditorModule>("Eslon2DEditor");

	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UEslon2DTileMapAsset::StaticClass();
	ContextClass = UPaperTileSet::StaticClass();
	AssetCategoryBit = EditorModule.GetEslon2DAssetCategory();
	MenuCategorySubMenus.Add(FText::FromString(TEXT("Tilemap")));
}

UObject* UEslon2DTileMapFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UEslon2DTileMapAsset* NewAsset = NewObject<UEslon2DTileMapAsset>(InParent, Class, Name, Flags | RF_Transactional);

	UPaperTileSet* TileSet = InitialTileSet;
	if (!TileSet)
	{
		TileSet = Cast<UPaperTileSet>(Context);
	}

	NewAsset->InitializeFromPaperTileSet(TileSet, InitialWidth, InitialHeight, true);
	return NewAsset;
}

bool UEslon2DTileMapFactory::ShouldShowInNewMenu() const
{
	return true;
}

uint32 UEslon2DTileMapFactory::GetMenuCategories() const
{
	return AssetCategoryBit;
}

const TArray<FText>& UEslon2DTileMapFactory::GetMenuCategorySubMenus() const
{
	return MenuCategorySubMenus;
}
