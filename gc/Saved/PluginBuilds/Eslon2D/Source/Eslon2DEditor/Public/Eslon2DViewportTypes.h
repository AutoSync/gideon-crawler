#pragma once

#include "CoreMinimal.h"

enum class EEslon2DViewportPlane : uint8
{
	TopDown,
	SideScroller,
	Front
};

enum class EEslon2DActorLayer : uint8
{
	Background,
	Default,
	Foreground,
	Gameplay,
	UI
};

namespace Eslon2DViewport
{
	static const FName TabId(TEXT("Eslon2DViewport"));
	static const TCHAR* LayerTagPrefix = TEXT("2DLayer.");

	inline FText PlaneToText(const EEslon2DViewportPlane Plane)
	{
		switch (Plane)
		{
		case EEslon2DViewportPlane::TopDown:
			return NSLOCTEXT("Eslon2D", "PlaneTopDown", "Top Down");
		case EEslon2DViewportPlane::SideScroller:
			return NSLOCTEXT("Eslon2D", "PlaneSideScroller", "Side Scroller");
		case EEslon2DViewportPlane::Front:
			return NSLOCTEXT("Eslon2D", "PlaneFront", "Front");
		default:
			return FText::GetEmpty();
		}
	}

	inline FText LayerToText(const EEslon2DActorLayer Layer)
	{
		switch (Layer)
		{
		case EEslon2DActorLayer::Background:
			return NSLOCTEXT("Eslon2D", "LayerBackground", "Background");
		case EEslon2DActorLayer::Default:
			return NSLOCTEXT("Eslon2D", "LayerDefault", "Default");
		case EEslon2DActorLayer::Foreground:
			return NSLOCTEXT("Eslon2D", "LayerForeground", "Foreground");
		case EEslon2DActorLayer::Gameplay:
			return NSLOCTEXT("Eslon2D", "LayerGameplay", "Gameplay");
		case EEslon2DActorLayer::UI:
			return NSLOCTEXT("Eslon2D", "LayerUI", "UI");
		default:
			return FText::GetEmpty();
		}
	}

	inline FName LayerToName(const EEslon2DActorLayer Layer)
	{
		switch (Layer)
		{
		case EEslon2DActorLayer::Background:
			return TEXT("Background");
		case EEslon2DActorLayer::Default:
			return TEXT("Default");
		case EEslon2DActorLayer::Foreground:
			return TEXT("Foreground");
		case EEslon2DActorLayer::Gameplay:
			return TEXT("Gameplay");
		case EEslon2DActorLayer::UI:
			return TEXT("UI");
		default:
			return NAME_None;
		}
	}

	inline float LayerDepth(const EEslon2DActorLayer Layer)
	{
		switch (Layer)
		{
		case EEslon2DActorLayer::Background:
			return -1000.0f;
		case EEslon2DActorLayer::Default:
			return 0.0f;
		case EEslon2DActorLayer::Foreground:
			return 1000.0f;
		case EEslon2DActorLayer::Gameplay:
			return 100.0f;
		case EEslon2DActorLayer::UI:
			return 2000.0f;
		default:
			return 0.0f;
		}
	}
}
