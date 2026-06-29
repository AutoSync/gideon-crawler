#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Eslon2DTileMapAsset.h"
#include "Eslon2DTileMapComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEslon2DTileChangedSignature, int32, X, int32, Y, FName, LayerName, FEslon2DTileRef, Tile);

UCLASS(BlueprintType, ClassGroup = (Eslon2D), meta = (BlueprintSpawnableComponent))
class ESLON2D_API UEslon2DTileMapComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEslon2DTileMapComponent();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Eslon 2D|Tilemap")
	TObjectPtr<UEslon2DTileMapAsset> TileMapAsset;

	UPROPERTY(BlueprintAssignable, Category = "Eslon 2D|Tilemap")
	FEslon2DTileChangedSignature OnTileChanged;

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Tilemap")
	void InitializeFromAsset(UEslon2DTileMapAsset* InTileMapAsset);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Tilemap")
	void ResizeMap(int32 NewWidth, int32 NewHeight);

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Tilemap")
	bool SetTile(int32 X, int32 Y, FName LayerName, const FEslon2DTileRef& Tile);

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Tilemap")
	bool GetTile(int32 X, int32 Y, FName LayerName, FEslon2DTileRef& OutTile) const;

	UFUNCTION(BlueprintCallable, Category = "Eslon 2D|Tilemap")
	bool ClearTile(int32 X, int32 Y, FName LayerName);

	UFUNCTION(BlueprintPure, Category = "Eslon 2D|Tilemap")
	bool IsValidCoordinate(int32 X, int32 Y) const;

private:
	UPROPERTY()
	int32 Width = 16;

	UPROPERTY()
	int32 Height = 16;

	UPROPERTY()
	TArray<FEslon2DTileLayer> RuntimeLayers;

	FEslon2DTileLayer* FindLayer(FName LayerName);
	const FEslon2DTileLayer* FindLayer(FName LayerName) const;
	int32 ToTileIndex(int32 X, int32 Y) const;
	void EnsureLayerSize(FEslon2DTileLayer& Layer);
};
