// Copyright Epic Games, Inc. All Rights Reserved.

#include "RelicHunterGameMode.h"
#include "RelicHunterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARelicHunterGameMode::ARelicHunterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
