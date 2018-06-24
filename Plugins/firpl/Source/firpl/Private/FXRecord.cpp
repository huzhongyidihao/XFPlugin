#pragma  once

#include "FXRecord.h"

#include "Serialization/JsonReader.h"
#include "Dom/JsonObject.h"
#include "Serialization//JsonSerializer.h"

static char*g_result = nullptr;
static unsigned int g_buffersize = BUFFER_SIZE;

static HANDLE events[EVT_TOTAL] = { NULL,NULL,NULL };

static void on_result(const char *result, char is_last);
static void on_speech_begin();
static void on_speech_end(int reason);



// static functions
void on_result(const char *result, char is_last)
{
	if (result) {
		size_t left = g_buffersize - 1 - strlen(g_result);
		size_t size = strlen(result);
		if (left < size) {
			g_result = (char*)realloc(g_result, g_buffersize + BUFFER_SIZE);
			if (g_result)
				g_buffersize += BUFFER_SIZE;
			else {
				//printf("mem alloc failed\n");
				UE_LOG(LogTemp, Warning, TEXT("mem alloc failed\n"));
				return;
			}
		}
		
		/*  在此处解析json   */  
		auto str = result;
		FString tempjson = FString(UTF8_TO_TCHAR(str));
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef< TJsonReader<TCHAR> > Reader = TJsonReaderFactory<TCHAR>::Create(tempjson);
		if (FJsonSerializer::Deserialize(Reader, JsonObject))
		{
			tempjson.Reset();//清空字符串数据
			TArray< TSharedPtr<FJsonValue> > TempArray = JsonObject->GetArrayField("ws");
			for (auto rs : TempArray)
			{
				tempjson.Append((rs->AsObject()->GetArrayField("cw"))[0]->AsObject()->GetStringField("w"));
			}

			UE_LOG(LogTemp, Error, TEXT("----new Json Result=%s-------"),*tempjson);
		}


		//auto tempfs = tempjson;
		//const char* tempplain = TCHAR_TO_UTF8(*tempfs);
		//strncat(g_result, result, size);//拼接
		//tempjson = tempjson + tempjson;
		//auto strshow = g_result;
		//FString tResult = FString(UTF8_TO_TCHAR(strshow));
	
		_TempResult = _TempResult + tempjson;
		UE_LOG(LogTemp, Error, TEXT("------this QISRGetResult is %s !----- \n"), *_TempResult);
	}
}

void on_speech_begin()
{
	if (g_result)
	{
		free(g_result);
	}
	g_result = (char*)malloc(BUFFER_SIZE);//分配内存
	g_buffersize = BUFFER_SIZE;
	memset(g_result, 0, g_buffersize);//为s 做初始化

	UE_LOG(LogTemp, Warning, TEXT("Start Listening...\n"));
}

void on_speech_end(int reason)
{
	

	_TempResult.Reset();

	if (reason == END_REASON_VAD_DETECT)
	{
		UE_LOG(LogTemp, Warning, TEXT("\n Speaking done \n"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\nRecognizer error \n"));
	}
}


FXRecord::FXRecord()
{
}

FXRecord::FXRecord(FString s)
{
	UE_LOG(LogTemp, Error, TEXT("FXRecord() Create :.\n"));
}

FXRecord::~FXRecord()
{
}

void FXRecord::Start()
{
	SetEvent(events[EVT_START]);
	
}

void FXRecord::Stop()
{
	SetEvent(events[EVT_STOP]);
}

void FXRecord::Quit()
{
	SetEvent(events[EVT_QUIT]);
}

void FXRecord::demo_mic(const char * session_begin_params)
{
	int errcode;
	int i = 0;
	HANDLE helper_thread = NULL;

	struct speech_rec iat;
	DWORD waitres;
	char isquit = 0;

	struct speech_rec_notifier recnotifier = {
		on_result,
		on_speech_begin,
		on_speech_end
	};

	//启动语音识别
	errcode = speechrecoginzer->sr_init(&iat, session_begin_params, SR_MIC, DEFAULT_INPUT_DEVID, &recnotifier);
	if (errcode) {
		UE_LOG(LogTemp, Error, TEXT("XFspeech recognizer init failed\n"));
		return;
	}
	//创建识别事件状态
	for (i = 0; i < EVT_TOTAL; ++i) {
		events[i] = CreateEvent(NULL, FALSE, FALSE, NULL);
	}

	//监听识别状态
	while (1) {
		waitres = WaitForMultipleObjects(EVT_TOTAL, events, FALSE, INFINITE);
		switch (waitres) {
		case WAIT_FAILED:
		case WAIT_TIMEOUT:
			//printf("Why it happened !?\n");
			UE_LOG(LogTemp, Error, TEXT("Why it happened !?\n"));
			break;
		case WAIT_OBJECT_0 + EVT_START:
			//开启监听
			errcode = speechrecoginzer->sr_start_listening(&iat);
			if (errcode) {
				//printf("start listen failed %d\n", errcode);
				UE_LOG(LogTemp, Error, TEXT("start listen failed %d\n"), errcode);
				isquit = 1;
			}
			break;
		case WAIT_OBJECT_0 + EVT_STOP:
			//停止监听
			errcode = speechrecoginzer->sr_stop_listening(&iat);
			if (errcode) {

				UE_LOG(LogTemp, Error, TEXT("stop listening failed %d\n"), errcode);
				isquit = 1;
			}
			break;
		case WAIT_OBJECT_0 + EVT_QUIT:
			UE_LOG(LogTemp, Error, TEXT("------enter  quit !----- \n"));
			speechrecoginzer->sr_stop_listening(&iat);
			isquit = 1;
			break;
		default:
			break;
		}
		if (isquit)//为1则跳出 监听循环,也说明要关闭功能了
			break;
	}

//exit:
//	if (helper_thread != NULL) {
//		WaitForSingleObject(helper_thread, INFINITE);
//		CloseHandle(helper_thread);
//	}

	for (i = 0; i < EVT_TOTAL; ++i) {
		if (events[i])
			CloseHandle(events[i]);
	}

	//在此处关闭语音识别功能，不使用识别功能时关闭
	UE_LOG(LogTemp, Error, TEXT("-----call sr_uninit Close XF------- \n"));
	speechrecoginzer->sr_uninit(&iat);

}

void FXRecord::demo_file(const char * audio_file, const char * session_begin_params)
{
	

}

FString& FXRecord::get_result() const
{
	
	//return g_result;
	return _TempResult;
}

