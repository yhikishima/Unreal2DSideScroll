// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MessageController.generated.h"

UCLASS()
class UNREAL2DSIDESCROLL_API UMessageController : public UObject
{
	GENERATED_BODY()
	
public:	
	UFUNCTION(BlueprintCallable, Category = "Message")
	static FString GetText(int type);
};
