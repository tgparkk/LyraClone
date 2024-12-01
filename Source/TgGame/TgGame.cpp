// Copyright Epic Games, Inc. All Rights Reserved.

#include "TgGame.h"
#include "Modules/ModuleManager.h"

#include "TgLogChannels.h"

class FTgGameModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

void FTgGameModule::StartupModule()
{
	UE_LOG(LogTg, Warning, TEXT("FTgGameModule"));
	FDefaultGameModuleImpl::StartupModule();
}

void FTgGameModule::ShutdownModule()
{
	
	FDefaultGameModuleImpl::ShutdownModule();
}


IMPLEMENT_PRIMARY_GAME_MODULE(FTgGameModule, TgGame, "TgGame" );


