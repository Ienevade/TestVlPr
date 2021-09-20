// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestVlPrGameMode.h"
#include "TestVlPrCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestVlPrGameMode::ATestVlPrGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
