// Copyright Epic Games, Inc. All Rights Reserved.

#include "ParseGameMode.h"
#include "ParseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParseGameMode::AParseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
