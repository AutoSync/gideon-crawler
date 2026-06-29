#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Eslon2DTileTypes.h"
#include "Eslon2DTileMapAsset.generated.h"

UCLASS(BlueprintType)
class ESLON2D_API UEslon2DTileMapAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Eslon 2D|Tilemap", meta = (ClampMin = "1"))
	int32 Width = 16;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Eslon 2D|Tilemap", meta = (ClampMin = "1"))
	int32 Height = 16;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Eslon 2D|Tilemap", meta = (ClampMin = "1"))
	FIntPoint TileSize = FIntPoint(32, 32);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Eslon 2D|Tilemap")
	TArray<FEslon2DTileLayer> Layers;

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Tilemap")
	bool IsValidCoordinate(int32 X, int32 Y) const;

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Tilemap")
	int32 ToTileIndex(int32 X, int32 Y) const;
};
