#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FSpawnTabArgs;

class FEslonCodeEditorModule final : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void RegisterMenus();
	void RegisterTabSpawner();
	void UnregisterTabSpawner();
	void OpenEslonCodeStudio();
	TSharedRef<class SDockTab> SpawnEslonCodeStudioTab(const FSpawnTabArgs& SpawnTabArgs);

private:
	FDelegateHandle ToolMenusStartupCallbackHandle;
};
