// Copyright Epic Games, Inc. All Rights Reserved.

#include "ScreamJam2024GameMode.h"
#include "ScreamJam2024Character.h"
#include "UObject/ConstructorHelpers.h"

AScreamJam2024GameMode::AScreamJam2024GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
