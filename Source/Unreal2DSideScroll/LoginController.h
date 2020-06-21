// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Http.h"
#include "LoginController.generated.h"

UCLASS()
class ULoginController: public UObject
{
	GENERATED_BODY()

	public:

		UFUNCTION(BlueprintCallable, Category = "Login")
		void RequestLogin(bool& failed, FString id, FString password);

		UFUNCTION(BlueprintCallable, Category = "Login")
		static void GetLevelType(FName& out, int in);
};

