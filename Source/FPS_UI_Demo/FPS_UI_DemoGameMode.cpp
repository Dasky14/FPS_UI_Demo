// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_UI_DemoGameMode.h"
#include "FPS_UI_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_UI_DemoGameMode::AFPS_UI_DemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
