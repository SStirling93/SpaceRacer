#pragma once

DECLARE_LOG_CATEGORY_EXTERN(ModuleLog, Log, All);

class SPACERACER_API iTweenModule : public IModuleInterface
{
private:

public:
	iTweenModule();

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
