// Fill out your copyright notice in the Description page of Project Settings.

#include "LoginController.h"

void ULoginController::RequestLogin(bool& failed, FString id, FString password)
{
	TSharedRef<IHttpRequest> request = FHttpModule::Get().CreateRequest();
	request->SetURL("http://localhost:8080/login?name=" + id + "&password=" + password);

	request->OnProcessRequestComplete()
		.BindLambda([&failed](FHttpRequestPtr req, FHttpResponsePtr res, bool suc) -> void
		{ 
			if (suc)
			{
				UE_LOG(LogTemp, Log, TEXT("ddddddddd"));
			}

			failed = !suc;

		});
	
	// リクエストを処理
	request->ProcessRequest();
}

void ULoginController::GetLevelType(FName& out, int in)
{
	switch (in)
	{
	case 0:
		out = "Title";
		break;
	case 1:
		out = "Main";
		break;
	default:
		break;
	}
}
