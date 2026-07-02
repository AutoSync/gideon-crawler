#include "EslonCodeEditorModule.h"

#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "ToolMenus.h"

#define LOCTEXT_NAMESPACE "FEslonCodeEditorModule"

void FEslonCodeEditorModule::StartupModule()
{
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FEslonCodeEditorModule::RegisterMenus));
}

void FEslonCodeEditorModule::ShutdownModule()
{
	if (UToolMenus::IsToolMenuUIEnabled())
	{
		UToolMenus::UnRegisterStartupCallback(this);
		UToolMenus::UnregisterOwner(this);
	}
}

void FEslonCodeEditorModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);

	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Tools");
	FToolMenuSection& Section = Menu->FindOrAddSection("EslonCode");
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

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEslonCodeEditorModule, EslonCodeEditor)
