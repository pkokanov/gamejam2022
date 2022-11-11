// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJam2022GameMode.h"
#include "GameJam2022Character.h"
#include "UObject/ConstructorHelpers.h"

AGameJam2022GameMode::AGameJam2022GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
