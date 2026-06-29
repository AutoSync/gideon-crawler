#include "Eslon2DEditorModule.h"

#include "LevelEditor.h"
#include "SEslon2DViewport.h"
#include "ToolMenus.h"
#include "Eslon2DViewportTypes.h"
#include "Widgets/Docking/SDockTab.h"

#define LOCTEXT_NAMESPACE "FEslon2DEditorModule"

void FEslon2DEditorModule::StartupModule()
{
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
		Eslon2DViewport::TabId,
		FOnSpawnTab::CreateRaw(this, &FEslon2DEditorModule::SpawnViewportTab))
		.SetDisplayName(LOCTEXT("ViewportTabTitle", "2D Development Viewport"))
		.SetTooltipText(LOCTEXT("ViewportTabTooltip", "Open a locked orthographic viewport for 2D level editing."))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FEslon2DEditorModule::RegisterMenus));
}

void FEslon2DEditorModule::ShutdownModule()
{
	if (UToolMenus::IsToolMenuUIEnabled())
	{
		UToolMenus::UnRegisterStartupCallback(this);
		UToolMenus::UnregisterOwner(this);
	}

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(Eslon2DViewport::TabId);
}

void FEslon2DEditorModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);

	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
	FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
	Section.AddMenuEntry(
		"OpenEslon2DViewport",
		LOCTEXT("OpenViewportLabel", "Eslon 2D Viewport"),
		LOCTEXT("OpenViewportTooltip", "Open the custom locked orthographic Eslon 2D viewport."),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda([]()
		{
			FGlobalTabmanager::Get()->TryInvokeTab(Eslon2DViewport::TabId);
		})));
}

TSharedRef<SDockTab> FEslon2DEditorModule::SpawnViewportTab(const FSpawnTabArgs& Args)
{
	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SEslon2DViewport)
		];
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEslon2DEditorModule, Eslon2DEditor)
