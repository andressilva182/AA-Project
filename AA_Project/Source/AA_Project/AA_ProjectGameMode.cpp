// Copyright Epic Games, Inc. All Rights Reserved.

#include "AA_ProjectGameMode.h"
#include "AA_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAA_ProjectGameMode::AAA_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
