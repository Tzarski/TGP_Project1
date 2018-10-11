// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TGP_Project1GameMode.h"
#include "TGP_Project1HUD.h"
#include "TGP_Project1Character.h"
#include "UObject/ConstructorHelpers.h"

ATGP_Project1GameMode::ATGP_Project1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATGP_Project1HUD::StaticClass();
}
