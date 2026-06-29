#include "Eslon2DViewportClient.h"

#include "Editor.h"
#include "Engine/Selection.h"
#include "Engine/World.h"
#include "InputCoreTypes.h"
#include "SEslon2DViewport.h"

FEslon2DViewportClient::FEslon2DViewportClient(const TSharedRef<SEslon2DViewport>& InViewport)
	: FEditorViewportClient(nullptr, nullptr, StaticCastSharedRef<SEditorViewport>(InViewport))
{
	bSetListenerPosition = false;
	SetRealtime(true);
	SetViewMode(VMI_Lit);
	SetOrthoZoom(4096.0f);
	SetViewLocation(FVector::ZeroVector);
	ApplyLockedView();
}

UWorld* FEslon2DViewportClient::GetWorld() const
{
	return GEditor ? GEditor->GetEditorWorldContext().World() : nullptr;
}

bool FEslon2DViewportClient::InputKey(const FInputKeyEventArgs& EventArgs)
{
	if (EventArgs.Key == EKeys::RightMouseButton)
	{
		bRightMouseButtonDown = EventArgs.Event == IE_Pressed || EventArgs.Event == IE_Repeat;
		return true;
	}

	if (EventArgs.Key == EKeys::MouseScrollUp && EventArgs.Event == IE_Pressed)
	{
		SetOrthoZoom(FMath::Max(128.0f, GetOrthoZoom() * 0.9f));
		return true;
	}

	if (EventArgs.Key == EKeys::MouseScrollDown && EventArgs.Event == IE_Pressed)
	{
		SetOrthoZoom(FMath::Min(262144.0f, GetOrthoZoom() * 1.1f));
		return true;
	}

	return FEditorViewportClient::InputKey(EventArgs);
}

bool FEslon2DViewportClient::InputAxis(const FInputKeyEventArgs& Args)
{
	if (bRightMouseButtonDown && (Args.Key == EKeys::MouseX || Args.Key == EKeys::MouseY))
	{
		const FIntPoint Size = Args.Viewport ? Args.Viewport->GetSizeXY() : FIntPoint(1, 1);
		const float UnitsPerPixel = GetOrthoZoom() / FMath::Max(1, Size.X);
		const FVector Offset = (Args.Key == EKeys::MouseX ? -GetPanRightVector() : GetPanUpVector()) * Args.AmountDepressed * UnitsPerPixel;
		SetViewLocation(GetViewLocation() + Offset);
		return true;
	}

	return FEditorViewportClient::InputAxis(Args);
}

void FEslon2DViewportClient::Tick(float DeltaSeconds)
{
	FEditorViewportClient::Tick(DeltaSeconds);
	ApplyLockedView();
}

void FEslon2DViewportClient::SetPlane(const EEslon2DViewportPlane InPlane)
{
	if (Plane != InPlane)
	{
		Plane = InPlane;
		ApplyLockedView();
		Invalidate();
	}
}

void FEslon2DViewportClient::ApplyLockedView()
{
	switch (Plane)
	{
	case EEslon2DViewportPlane::TopDown:
		SetViewportType(LVT_OrthoXY);
		SetViewRotation(FRotator(-90.0f, 0.0f, 0.0f));
		break;
	case EEslon2DViewportPlane::SideScroller:
		SetViewportType(LVT_OrthoXZ);
		SetViewRotation(FRotator(0.0f, 90.0f, 0.0f));
		break;
	case EEslon2DViewportPlane::Front:
		SetViewportType(LVT_OrthoYZ);
		SetViewRotation(FRotator(0.0f, 180.0f, 0.0f));
		break;
	default:
		break;
	}
}

FVector FEslon2DViewportClient::GetPanRightVector() const
{
	switch (Plane)
	{
	case EEslon2DViewportPlane::TopDown:
		return FVector::RightVector;
	case EEslon2DViewportPlane::SideScroller:
		return FVector::ForwardVector;
	case EEslon2DViewportPlane::Front:
		return FVector::RightVector;
	default:
		return FVector::RightVector;
	}
}

FVector FEslon2DViewportClient::GetPanUpVector() const
{
	switch (Plane)
	{
	case EEslon2DViewportPlane::TopDown:
		return FVector::ForwardVector;
	case EEslon2DViewportPlane::SideScroller:
	case EEslon2DViewportPlane::Front:
		return FVector::UpVector;
	default:
		return FVector::UpVector;
	}
}
