#pragma once
/*

拷贝iat_record_sample.c

* 语音听写(iFly Auto Transform)技术能够实时地将语音转换成对应的文字。
*/

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <errno.h>
#include <process.h>

#include "msp_cmn.h"
#include "msp_errors.h"

#include "XFSpeechRecoginzer.h"


#define FRAME_LEN	640 
#define	BUFFER_SIZE	4096

//
enum {
	EVT_START = 0,
	EVT_STOP,
	EVT_QUIT,
	EVT_TOTAL
};


class FXRecord
{
	public:
		FXRecord();
		FXRecord(FString);
		~FXRecord();

		void Start();//开始录音
		void Stop();//结束
		void Quit();//退出程序

		//演示识别来自麦克风的音频
		void demo_mic(const char* session_begin_params);
		//演示从文件中发送音频数据
		void demo_file(const char* audio_file, const char* session_begin_params);

		//将识别结果返回
		//const char* get_result() const;
		FString& get_result() const;

		
};

static FXRecord * xunfeispeech = new FXRecord(FString("static FXRecord be created !"));