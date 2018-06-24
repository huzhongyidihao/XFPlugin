#pragma once
//用来将语音识别 作为独立线程启动，避免开启功能时阻塞主进程


#include "FXRecord.h"
#include "AsyncWork.h"

class FSpeechTask:public FNonAbandonableTask
{
	friend class FAutoDeleteAsyncTask<FSpeechTask>;

	FSpeechTask()
	{
		UE_LOG(LogTemp, Warning, TEXT("-------Speech Task  Create!-----------."));
	}
	void DoWork();//语音识别的流程
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FSpeechTask, STATGROUP_ThreadPoolAsyncTasks);
	}
};