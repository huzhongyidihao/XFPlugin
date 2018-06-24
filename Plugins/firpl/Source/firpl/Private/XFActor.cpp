// Fill out your copyright notice in the Description page of Project Settings.

#pragma  once

#include "XFActor.h"
//引入UE4  JSON库 F:\UE418\UE_4.18\Engine\Source\Runtime\Json
#include "Serialization/JsonReader.h"
#include "Dom/JsonObject.h"
#include "Serialization//JsonSerializer.h"


#include "firpl.h"



// Sets default values
AXFActor::AXFActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AXFActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("-----BeginPlay-----"));
}

// Called every frame
void AXFActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
//	UE_LOG(LogTemp, Log, TEXT("-----Tick-----"));
}

void AXFActor::XFInit()
{
	//创建一个speechtask 实例 ue4的类构建方式
	FAutoDeleteAsyncTask<FSpeechTask>*SpeechTask = new FAutoDeleteAsyncTask<FSpeechTask>();

	if (SpeechTask)
	{
		SpeechTask->StartBackgroundTask();//另起线程异步执行SpeechTask中的DoWork方法
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("XF task object could not be create!\n"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("XF task object Stopped !\n"));
	return;

}

void AXFActor::XFOpen()
{
	xunfeispeech->Start();


}

void AXFActor::XFStop()
{
	xunfeispeech->Stop();
}

void AXFActor::XFQuit()
{
	xunfeispeech->Quit();
	Sleep(300);//延迟0.3秒
}

FString AXFActor::XFResult()
{
	Result = xunfeispeech->get_result();


	return Result;
}

