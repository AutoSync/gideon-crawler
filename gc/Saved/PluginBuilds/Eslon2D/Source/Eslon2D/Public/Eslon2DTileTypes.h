#pragma once

#include "CoreMinimal.h"
#include "Eslon2DTileTypes.generated.h"

USTRUCT(BlueprintType)
struct ESLON2D_API FEslon2DTileRef
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile")
	FName TileId = NAME_None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile")
	int32 Variant = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile")
	FName Animation = NAME_None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tile")
	bool bIsEmpty = true;
};

USTRUCT(BlueprintType)
struct ESLON2D_API FEslon2DTileLayer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tilemap")
	FName LayerName = TEXT("Default");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Eslon 2D|Tilemap")
	TArray<FEslon2DTileRef> Tiles;
};
