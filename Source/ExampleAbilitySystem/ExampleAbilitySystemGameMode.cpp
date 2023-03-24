// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExampleAbilitySystemGameMode.h"
#include "ExampleAbilitySystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExampleAbilitySystemGameMode::AExampleAbilitySystemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
