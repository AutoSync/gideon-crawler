#include "SEslon2DViewport.h"

#include "Editor.h"
#include "Engine/Selection.h"
#include "GameFramework/Actor.h"
#include "ScopedTransaction.h"
#include "Styling/AppStyle.h"
#include "Eslon2DViewportClient.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SComboButton.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SSpacer.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SOverlay.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "SEslon2DViewport"

void SEslon2DViewport::Construct(const FArguments& InArgs)
{
	SEditorViewport::Construct(SEditorViewport::FArguments());
}

TSharedRef<FEditorViewportClient> SEslon2DViewport::MakeEditorViewportClient()
{
	ViewportClient = MakeShared<FEslon2DViewportClient>(SharedThis(this));
	return ViewportClient.ToSharedRef();
}

void SEslon2DViewport::PopulateViewportOverlays(TSharedRef<SOverlay> Overlay)
{
	Overlay->AddSlot()
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Top)
		.Padding(8.0f)
		[
			MakeLayerToolbar()
		];
}

TSharedRef<SWidget> SEslon2DViewport::MakeLayerToolbar()
{
	const auto MakePlaneEntry = [this](const EEslon2DViewportPlane Plane)
	{
		return SNew(SButton)
			.ButtonStyle(FAppStyle::Get(), "Menu.Button")
			.OnClicked_Lambda([this, Plane]()
			{
				SetPlane(Plane);
				return FReply::Handled();
			})
			[
				SNew(STextBlock).Text(Eslon2DViewport::PlaneToText(Plane))
			];
	};

	const auto MakeLayerEntry = [this](const EEslon2DActorLayer Layer)
	{
		return SNew(SButton)
			.ButtonStyle(FAppStyle::Get(), "Menu.Button")
			.OnClicked_Lambda([this, Layer]()
			{
				SetLayer(Layer);
				return FReply::Handled();
			})
			[
				SNew(STextBlock).Text(Eslon2DViewport::LayerToText(Layer))
			];
	};

	return SNew(SBorder)
		.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
		.Padding(FMargin(6.0f, 4.0f))
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(0.0f, 0.0f, 6.0f, 0.0f)
			[
				SNew(SComboButton)
				.ButtonContent()
				[
					SNew(STextBlock).Text(this, &SEslon2DViewport::GetPlaneText)
				]
				.MenuContent()
				[
					SNew(SVerticalBox)
					+ SVerticalBox::Slot().AutoHeight()[MakePlaneEntry(EEslon2DViewportPlane::TopDown)]
					+ SVerticalBox::Slot().AutoHeight()[MakePlaneEntry(EEslon2DViewportPlane::SideScroller)]
					+ SVerticalBox::Slot().AutoHeight()[MakePlaneEntry(EEslon2DViewportPlane::Front)]
				]
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(0.0f, 0.0f, 6.0f, 0.0f)
			[
				SNew(SComboButton)
				.ButtonContent()
				[
					SNew(STextBlock).Text(this, &SEslon2DViewport::GetLayerText)
				]
				.MenuContent()
				[
					SNew(SVerticalBox)
					+ SVerticalBox::Slot().AutoHeight()[MakeLayerEntry(EEslon2DActorLayer::Background)]
					+ SVerticalBox::Slot().AutoHeight()[MakeLayerEntry(EEslon2DActorLayer::Default)]
					+ SVerticalBox::Slot().AutoHeight()[MakeLayerEntry(EEslon2DActorLayer::Gameplay)]
					+ SVerticalBox::Slot().AutoHeight()[MakeLayerEntry(EEslon2DActorLayer::Foreground)]
					+ SVerticalBox::Slot().AutoHeight()[MakeLayerEntry(EEslon2DActorLayer::UI)]
				]
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(0.0f, 0.0f, 6.0f, 0.0f)
			[
				SNew(SButton)
				.Text(LOCTEXT("AssignLayer", "Assign Selected"))
				.ToolTipText(LOCTEXT("AssignLayerTooltip", "Move selected actors to the active 2D layer depth, set their folder, and tag them."))
				.OnClicked(this, &SEslon2DViewport::AssignSelectedActorsToLayer)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(SButton)
				.Text(LOCTEXT("FrameSelection", "Frame Selected"))
				.OnClicked(this, &SEslon2DViewport::FocusSelectedActors)
			]
			+ SHorizontalBox::Slot()
			.FillWidth(1.0f)
			[
				SNew(SSpacer)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("LockedViewportHint", "Orthographic locked"))
				.ColorAndOpacity(FSlateColor::UseSubduedForeground())
			]
		];
}

FText SEslon2DViewport::GetPlaneText() const
{
	return Eslon2DViewport::PlaneToText(ActivePlane);
}

FText SEslon2DViewport::GetLayerText() const
{
	return Eslon2DViewport::LayerToText(ActiveLayer);
}

void SEslon2DViewport::SetPlane(const EEslon2DViewportPlane InPlane)
{
	ActivePlane = InPlane;
	if (ViewportClient.IsValid())
	{
		ViewportClient->SetPlane(InPlane);
	}
}

void SEslon2DViewport::SetLayer(const EEslon2DActorLayer InLayer)
{
	ActiveLayer = InLayer;
}

FReply SEslon2DViewport::AssignSelectedActorsToLayer()
{
	if (!GEditor)
	{
		return FReply::Handled();
	}

	const FScopedTransaction Transaction(LOCTEXT("AssignSelectedActorsTo2DLayer", "Assign Selected Actors to 2D Layer"));
	USelection* Selection = GEditor->GetSelectedActors();

	for (FSelectionIterator It(*Selection); It; ++It)
	{
		if (AActor* Actor = Cast<AActor>(*It))
		{
			ApplyLayerToActor(*Actor);
		}
	}

	if (ViewportClient.IsValid())
	{
		ViewportClient->Invalidate();
	}

	return FReply::Handled();
}

FReply SEslon2DViewport::FocusSelectedActors()
{
	if (ViewportClient.IsValid() && GEditor)
	{
		FBox SelectionBounds(ForceInit);
		USelection* Selection = GEditor->GetSelectedActors();

		for (FSelectionIterator It(*Selection); It; ++It)
		{
			if (AActor* Actor = Cast<AActor>(*It))
			{
				SelectionBounds += Actor->GetComponentsBoundingBox(true);
			}
		}

		if (SelectionBounds.IsValid)
		{
			ViewportClient->FocusViewportOnBox(SelectionBounds);
		}
	}

	return FReply::Handled();
}

FName SEslon2DViewport::GetLayerFolderPath() const
{
	return FName(*FString::Printf(TEXT("2D/%s"), *Eslon2DViewport::LayerToName(ActiveLayer).ToString()));
}

void SEslon2DViewport::ApplyLayerToActor(AActor& Actor) const
{
	Actor.Modify();

	for (int32 Index = Actor.Tags.Num() - 1; Index >= 0; --Index)
	{
		if (Actor.Tags[Index].ToString().StartsWith(Eslon2DViewport::LayerTagPrefix))
		{
			Actor.Tags.RemoveAt(Index);
		}
	}

	Actor.Tags.AddUnique(FName(*FString::Printf(TEXT("%s%s"), Eslon2DViewport::LayerTagPrefix, *Eslon2DViewport::LayerToName(ActiveLayer).ToString())));
	Actor.SetFolderPath(GetLayerFolderPath());

	FVector Location = Actor.GetActorLocation();
	const float Depth = Eslon2DViewport::LayerDepth(ActiveLayer);

	switch (ActivePlane)
	{
	case EEslon2DViewportPlane::TopDown:
		Location.Z = Depth;
		break;
	case EEslon2DViewportPlane::SideScroller:
		Location.Y = Depth;
		break;
	case EEslon2DViewportPlane::Front:
		Location.X = Depth;
		break;
	default:
		break;
	}

	Actor.SetActorLocation(Location, false, nullptr, ETeleportType::TeleportPhysics);
}

#undef LOCTEXT_NAMESPACE
