// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_Loa_5_2GameMode.h"
#include "CPP_Loa_5_2PlayerController.h"
#include "CPP_Loa_5_2Character.h"
#include "UObject/ConstructorHelpers.h"

ACPP_Loa_5_2GameMode::ACPP_Loa_5_2GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACPP_Loa_5_2PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}