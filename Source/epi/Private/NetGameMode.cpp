// Fill out your copyright notice in the Description page of Project Settings.


#include "NetGameMode.h"
#include "NetCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetGameMode::ANetGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Net/Blueprints/NetCharacter"));
	// DefaultPawnClass = PlayerPawnClassFinder.Class;

	if (PlayerPawnClassFinder.Class != NULL) {
		DefaultPawnClass = PlayerPawnClassFinder.Class;
	}

}



