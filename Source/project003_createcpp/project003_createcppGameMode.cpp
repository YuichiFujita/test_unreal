// Copyright Epic Games, Inc. All Rights Reserved.

#include "project003_createcppGameMode.h"
#include "project003_createcppCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aproject003_createcppGameMode::Aproject003_createcppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
