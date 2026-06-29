#include "Eslon2DEditorModule.h"

#include "AssetToolsModule.h"
#include "ContentBrowserExtensions/Eslon2DContentBrowserExtensions.h"
#include "Eslon2DTileMapAssetTypeActions.h"
#include "Eslon2DTileMapFactory.h"
#include "LevelEditor.h"
#include "SEslon2DViewport.h"
#include "ToolMenus.h"
#include "Eslon2DViewportTypes.h"
#include "Widgets/Docking/SDockTab.h"

#define LOCTEXT_NAMESPACE "FEslon2DEditorModule"

void FEslon2DEditorModule::StartupModule()
{
	RegisterAssetTypes();

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
		Eslon2DViewport::TabId,
		FOnSpawnTab::CreateRaw(this, &FEslon2DEditorModule::SpawnViewportTab))
		.SetDisplayName(LOCTEXT("ViewportTabTitle", "2D Development Viewport"))
		.SetTooltipText(LOCTEXT("ViewportTabTooltip", "Open a locked orthographic viewport for 2D level editing."))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FEslon2DEditorModule::RegisterMenus));
	FEslon2DContentBrowserExtensions::InstallHooks();
}

void FEslon2DEditorModule::ShutdownModule()
{
	FEslon2DContentBrowserExtensions::RemoveHooks();

	if (UToolMenus::IsToolMenuUIEnabled())
	{
		UToolMenus::UnRegisterStartupCallback(this);
		UToolMenus::UnregisterOwner(this);
	}

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(Eslon2DViewport::TabId);
	UnregisterAssetTypes();
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

void FEslon2DEditorModule::RegisterAssetTypes()
{
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
	}

	IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
	Eslon2DAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Eslon2D")), LOCTEXT("Eslon2DAssetCategory", "Eslon2D"));

	TSharedRef<IAssetTypeActions> TilemapAction = MakeShareable(new FEslon2DTileMapAssetTypeActions(Eslon2DAssetCategoryBit));
	AssetTools.RegisterAssetTypeActions(TilemapAction);
	CreatedAssetTypeActions.Add(TilemapAction);
}

void FEslon2DEditorModule::UnregisterAssetTypes()
{
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (const TSharedPtr<IAssetTypeActions>& Action : CreatedAssetTypeActions)
		{
			if (Action.IsValid())
			{
				AssetTools.UnregisterAssetTypeActions(Action.ToSharedRef());
			}
		}
	}

	CreatedAssetTypeActions.Empty();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEslon2DEditorModule, Eslon2DEditor)
