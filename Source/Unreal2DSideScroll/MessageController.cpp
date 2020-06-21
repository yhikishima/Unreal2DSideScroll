// Fill out your copyright notice in the Description page of Project Settings.


#include "MessageController.h"
#include "Enums.h"


// Called every frame
FString UMessageController::GetText(int type)
{

	switch (type)
	{
	case 0:
		return "hoge";
		break;
	case 1:
		return "hoge";
		break;
	default:
		return "hoge";
		break;
	}

}

