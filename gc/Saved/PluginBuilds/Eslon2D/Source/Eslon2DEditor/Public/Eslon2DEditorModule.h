#pragma once

#include "Modules/ModuleManager.h"

class FEslon2DEditorModule final : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void RegisterMenus();
	TSharedRef<class SDockTab> SpawnViewportTab(const class FSpawnTabArgs& Args);
};
