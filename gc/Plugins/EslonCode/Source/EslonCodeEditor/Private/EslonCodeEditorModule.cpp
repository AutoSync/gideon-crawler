#include "EslonCodeEditorModule.h"

#include "EslonCodeStudioWidget.h"
#include "Framework/Docking/TabManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "Widgets/Docking/SDockTab.h"
#include "ToolMenus.h"

#define LOCTEXT_NAMESPACE "FEslonCodeEditorModule"

namespace
{
	static const FName EslonCodeStudioTabName(TEXT("EslonCodeStudio"));
}

void FEslonCodeEditorModule::StartupModule()
{
	RegisterTabSpawner();
	ToolMenusStartupCallbackHandle = UToolMenus::RegisterStartupCallback(
		FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FEslonCodeEditorModule::RegisterMenus));
}

void FEslonCodeEditorModule::ShutdownModule()
{
	UnregisterTabSpawner();
	if (UToolMenus::IsToolMenuUIEnabled())
	{
		if (ToolMenusStartupCallbackHandle.IsValid())
		{
			UToolMenus::UnRegisterStartupCallback(ToolMenusStartupCallbackHandle);
			ToolMenusStartupCallbackHandle.Reset();
		}
		UToolMenus::UnregisterOwner(this);
	}
}

void FEslonCodeEditorModule::RegisterTabSpawner()
{
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
		EslonCodeStudioTabName,
		FOnSpawnTab::CreateRaw(this, &FEslonCodeEditorModule::SpawnEslonCodeStudioTab))
		.SetDisplayName(LOCTEXT("EslonCodeStudioTabTitle", "EslonCode Studio"))
		.SetTooltipText(LOCTEXT("EslonCodeStudioTabTooltip", "Open the EslonCode text-to-Blueprint studio."));
}

void FEslonCodeEditorModule::UnregisterTabSpawner()
{
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(EslonCodeStudioTabName);
}

void FEslonCodeEditorModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);

	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Tools");
	FToolMenuSection& Section = Menu->FindOrAddSection("EslonCode");
	Section.AddMenuEntry(
		"OpenEslonCodeStudio",
		LOCTEXT("OpenEslonCodeStudioLabel", "EslonCode Studio"),
		LOCTEXT("OpenEslonCodeStudioTooltip", "Open the in-editor EslonCode studio."),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateRaw(this, &FEslonCodeEditorModule::OpenEslonCodeStudio)));
	Section.AddMenuEntry(
		"OpenEslonCodeFolder",
		LOCTEXT("OpenEslonCodeFolderLabel", "EslonCode Folder"),
		LOCTEXT("OpenEslonCodeFolderTooltip", "Open the local EslonCode plugin folder."),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda([]()
		{
			if (const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("EslonCode")))
			{
				FPlatformProcess::ExploreFolder(*Plugin->GetBaseDir());
			}
		})));
}

void FEslonCodeEditorModule::OpenEslonCodeStudio()
{
	FGlobalTabmanager::Get()->TryInvokeTab(EslonCodeStudioTabName);
}

TSharedRef<SDockTab> FEslonCodeEditorModule::SpawnEslonCodeStudioTab(const FSpawnTabArgs& SpawnTabArgs)
{
	(void)SpawnTabArgs;

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SEslonCodeStudio)
		];
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEslonCodeEditorModule, EslonCodeEditor)
