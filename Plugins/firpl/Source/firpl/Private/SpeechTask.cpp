#pragma  once

#include "SpeechTask.h"

//仿照iat_record_sample  main 方法
void FSpeechTask::DoWork()
{
	int			ret = MSP_SUCCESS;
	int			upload_on = 0; //是否上传用户词表 选择不上传
	const char* login_params = "appid = 5b22eaf4, work_dir = ."; // 登录参数，appid与msc库绑定,请勿随意改动
	int aud_src = 0;

	/*
	* sub:				请求业务类型
	* domain:			领域
	* language:			语言
	* accent:			方言
	* sample_rate:		音频采样率
	* result_type:		识别结果格式
	* result_encoding:	结果编码格式
	*
	*/
	const char* session_begin_params = "sub = iat,domain = iat,language = zh_cn, accent = mandarin, sample_rate = 16000, result_type = json, result_encoding = UTF-8";

	/* 用户登录 */
	ret = MSPLogin(NULL, NULL, login_params); //第一个参数是用户名，第二个参数是密码，均传NULL即可，第三个参数是登录参数	
	if (MSP_SUCCESS != ret) {
		UE_LOG(LogTemp, Error, TEXT("MSPLogin failed , Error code .\n"));
		goto exit; //登录失败，退出登录
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("MSPLogin succ!\n"));
	}

	xunfeispeech->demo_mic(session_begin_params);

exit:
	MSPLogout(); //退出登录

	return;
}
