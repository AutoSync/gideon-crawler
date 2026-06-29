#pragma once

#include "AssetTypeCategories.h"
#include "Factories/Factory.h"
#include "Eslon2DTileMapFactory.generated.h"

class UPaperTileSet;

UCLASS()
class ESLON2DEDITOR_API UEslon2DTileMapFactory : public UFactory
{
	GENERATED_BODY()

public:
	UEslon2DTileMapFactory(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, Category = "Eslon 2D|Tilemap")
	TObjectPtr<UPaperTileSet> InitialTileSet = nullptr;

	UPROPERTY(EditAnywhere, Category = "Eslon 2D|Tilemap", meta = (ClampMin = "1"))
	int32 InitialWidth = 16;

	UPROPERTY(EditAnywhere, Category = "Eslon 2D|Tilemap", meta = (ClampMin = "1"))
	int32 InitialHeight = 16;

	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	virtual bool ShouldShowInNewMenu() const override;
	virtual uint32 GetMenuCategories() const override;
	virtual const TArray<FText>& GetMenuCategorySubMenus() const override;
	// End of UFactory interface

private:
	TArray<FText> MenuCategorySubMenus;
	EAssetTypeCategories::Type AssetCategoryBit = EAssetTypeCategories::Misc;
};
