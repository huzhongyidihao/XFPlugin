// Fill out your copyright notice in the Description page of Project Settings.
//为蓝图暴露操作方法:
//create_recorder   	创建录音对象
//open_recorder      	打开录音机，配置录音格式
//start_record       	开始录音，录音数据在注册的回调函数中获取
//stop_record        	停止录音
//close_recorder   	 	关闭录音机，对应open_recorder
//destroy_recorder  	销毁录音对象，对应 create_recorder


#pragma once

#include "SpeechTask.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XFActor.generated.h"

UCLASS()
class FIRPL_API AXFActor : public AActor
{
	GENERATED_BODY()
	
private:
	FString Result;;//用来存放语音识别结果

public:	
	// Sets default values for this actor's properties
	AXFActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*---  拓展方法    --*/
public:
	UFUNCTION(BlueprintCallable, Category = "XunFei", meta = (DisplayName = "XFInit", Keywords = "Init"))
		void XFInit();//语音功能初始化
	UFUNCTION(BlueprintCallable, Category = "XunFei", meta = (DisplayName = "XFOpen", Keywords = "Open"))
		void XFOpen();//启动录音功能
	UFUNCTION(BlueprintCallable, Category = "XunFei", meta = (DisplayName = "XFStop", Keywords = "Stop"))
		void XFStop();//停止录音功能
	UFUNCTION(BlueprintCallable, Category = "XunFei", meta = (DisplayName = "XFQuit", Keywords = "Quit"))
		void XFQuit();//退出录音，并释放资源
	UFUNCTION(BlueprintCallable, Category = "XunFei", meta = (DisplayName = "XFResult", Keywords = "GetResult"))
		FString XFResult();//获取录音结果
};
