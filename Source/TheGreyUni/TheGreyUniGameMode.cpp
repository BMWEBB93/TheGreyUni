// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheGreyUniGameMode.h"
#include "TheGreyUniCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheGreyUniGameMode::ATheGreyUniGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
