#pragma once

#include "CoreMinimal.h"
#include "SEditorViewport.h"
#include "Eslon2DViewportTypes.h"

class FEslon2DViewportClient;

class SEslon2DViewport final : public SEditorViewport
{
public:
	SLATE_BEGIN_ARGS(SEslon2DViewport) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	virtual TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override;
	virtual void PopulateViewportOverlays(TSharedRef<class SOverlay> Overlay) override;

private:
	TSharedRef<SWidget> MakeLayerToolbar();
	FText GetPlaneText() const;
	FText GetLayerText() const;
	void SetPlane(EEslon2DViewportPlane InPlane);
	void SetLayer(EEslon2DActorLayer InLayer);
	FReply AssignSelectedActorsToLayer();
	FReply FocusSelectedActors();
	FName GetLayerFolderPath() const;
	void ApplyLayerToActor(class AActor& Actor) const;

	TSharedPtr<FEslon2DViewportClient> ViewportClient;
	EEslon2DViewportPlane ActivePlane = EEslon2DViewportPlane::TopDown;
	EEslon2DActorLayer ActiveLayer = EEslon2DActorLayer::Default;
};
