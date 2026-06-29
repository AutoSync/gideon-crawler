#pragma once

#include "CoreMinimal.h"
#include "PaperSprite.h"
#include "Eslon2DGeneratedTileSprite.generated.h"

class UPaperTileSet;

UCLASS(BlueprintType, Transient)
class ESLON2D_API UEslon2DGeneratedTileSprite : public UPaperSprite
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Generated Tile Sprite")
	bool InitializeFromTile(UPaperTileSet* InTileSet, int32 InTileIndex, float InPixelsPerUnrealUnit);

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Generated Tile Sprite")
	UPaperTileSet* GetSourceTileSet() const { return SourceTileSet; }

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Generated Tile Sprite")
	int32 GetSourceTileIndex() const { return SourceTileIndex; }

private:
	UPROPERTY(Transient)
	TObjectPtr<UPaperTileSet> SourceTileSet = nullptr;

	UPROPERTY(Transient)
	int32 SourceTileIndex = INDEX_NONE;
};
