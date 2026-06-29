#pragma once

#include "Modules/ModuleManager.h"

class FEslon2DModule final : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
