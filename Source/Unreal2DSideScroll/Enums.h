// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class UNREAL2DSIDESCROLL_API Enums
{
public:
	Enums();
	~Enums();
};

UENUM(BlueprintType)
enum class ELevelType : uint8
{
    LT_Title UMETA(DisplayName = "Title"),
    LT_Main  UMETA(DisplayName = "Main")
};

UENUM(BlueprintType)
enum EErrorMessageType
{
    LoginId,
    LoginPassword
};
