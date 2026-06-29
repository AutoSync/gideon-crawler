#pragma once

#include "CoreMinimal.h"
#include "EditorViewportClient.h"
#include "Eslon2DViewportTypes.h"

class SEslon2DViewport;

class FEslon2DViewportClient final : public FEditorViewportClient
{
public:
	explicit FEslon2DViewportClient(const TSharedRef<SEslon2DViewport>& InViewport);

	virtual UWorld* GetWorld() const override;
	virtual bool InputKey(const FInputKeyEventArgs& EventArgs) override;
	virtual bool InputAxis(const FInputKeyEventArgs& Args) override;
	virtual void Tick(float DeltaSeconds) override;

	void SetPlane(EEslon2DViewportPlane InPlane);
	EEslon2DViewportPlane GetPlane() const { return Plane; }

private:
	void ApplyLockedView();
	FVector GetPanRightVector() const;
	FVector GetPanUpVector() const;

	EEslon2DViewportPlane Plane = EEslon2DViewportPlane::TopDown;
	bool bRightMouseButtonDown = false;
};
