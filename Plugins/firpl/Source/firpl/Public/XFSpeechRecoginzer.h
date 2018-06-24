#pragma once
//直接拷贝 官方例子speech_recognizer.h 

/*
@file
@brief 基于录音接口和讯飞MSC接口封装一个MIC录音识别的模块

@author		taozhang9
@date		2018/06/15
*/


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "qisr.h"
#include "msp_cmn.h"
#include "msp_errors.h"


#include "UseXF.h"
#include "XFActor.h"


enum sr_audsrc
{
	SR_MIC,	/* write data from mic */
	SR_USER	/* write data from user by calling API */
};

#define DEFAULT_INPUT_DEVID     (-1)


#define E_SR_NOACTIVEDEVICE		1
#define E_SR_NOMEM				2
#define E_SR_INVAL				3
#define E_SR_RECORDFAIL			4
#define E_SR_ALREADY			5


extern FString _TempResult;

struct speech_rec_notifier {
	void(*on_result)(const char *result, char is_last);
	void(*on_speech_begin)();
	void(*on_speech_end)(int reason);	/* 0 if VAD.  others, error : see E_SR_xxx and msp_errors.h  */
};

#define END_REASON_VAD_DETECT	0	/* detected speech done  */

struct speech_rec {
	enum sr_audsrc aud_src;  /* from mic or manual  stream write */
	struct speech_rec_notifier notif;
	const char * session_id;
	int ep_stat;
	int rec_stat;
	int audio_status;
	struct recorder *recorder;
	volatile int state;
	char * session_begin_params;
};


class XFSpeechRecoginzer
{
	friend static void iat_cb(char *data, unsigned long len, void *user_para);
public:
	XFSpeechRecoginzer();
	XFSpeechRecoginzer(FString);
	~XFSpeechRecoginzer();

public:
	/* must init before start . devid = -1, then the default device will be used.
	devid will be ignored if the aud_src is not SR_MIC */
	int sr_init(struct speech_rec * sr, const char * session_begin_params, enum sr_audsrc aud_src, int devid, struct speech_rec_notifier * notifier);
	
	int sr_start_listening(struct speech_rec *sr);
	int sr_stop_listening(struct speech_rec *sr);
	/* only used for the manual write way. */
	int sr_write_audio_data(struct speech_rec *sr, char *data, unsigned int len);
	/* must call uninit after you don't use it */
	void sr_uninit(struct speech_rec * sr);

private:
	void end_sr_on_error(struct speech_rec *sr, int errcode);
	void end_sr_on_vad(struct speech_rec *sr);
	char * skip_space(char *s);
	int update_format_from_sessionparam(const char * session_para, WAVEFORMATEX *wavefmt);
	//在停止记录之后，仍然有一些数据回调
	void wait_for_rec_stop(struct recorder *rec, unsigned int timeout_ms);


};
static XFSpeechRecoginzer*speechrecoginzer = new XFSpeechRecoginzer("Static XFSpeechRecoginzer create!");