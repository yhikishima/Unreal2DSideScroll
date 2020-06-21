// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal2DSideScrollGameMode.h"
#include "Unreal2DSideScrollCharacter.h"

AUnreal2DSideScrollGameMode::AUnreal2DSideScrollGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AUnreal2DSideScrollCharacter::StaticClass();	
}
