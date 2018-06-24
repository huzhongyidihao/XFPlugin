// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/XFActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXFActor() {}
// Cross Module References
	FIRPL_API UClass* Z_Construct_UClass_AXFActor_NoRegister();
	FIRPL_API UClass* Z_Construct_UClass_AXFActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_firpl();
	FIRPL_API UFunction* Z_Construct_UFunction_AXFActor_XFInit();
	FIRPL_API UFunction* Z_Construct_UFunction_AXFActor_XFOpen();
	FIRPL_API UFunction* Z_Construct_UFunction_AXFActor_XFQuit();
	FIRPL_API UFunction* Z_Construct_UFunction_AXFActor_XFResult();
	FIRPL_API UFunction* Z_Construct_UFunction_AXFActor_XFStop();
// End Cross Module References
	void AXFActor::StaticRegisterNativesAXFActor()
	{
		UClass* Class = AXFActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "XFInit", (Native)&AXFActor::execXFInit },
			{ "XFOpen", (Native)&AXFActor::execXFOpen },
			{ "XFQuit", (Native)&AXFActor::execXFQuit },
			{ "XFResult", (Native)&AXFActor::execXFResult },
			{ "XFStop", (Native)&AXFActor::execXFStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AXFActor_XFInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "XunFei" },
				{ "DisplayName", "XFInit" },
				{ "Keywords", "Init" },
				{ "ModuleRelativePath", "Public/XFActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFActor, "XFInit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AXFActor_XFOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "XunFei" },
				{ "DisplayName", "XFOpen" },
				{ "Keywords", "Open" },
				{ "ModuleRelativePath", "Public/XFActor.h" },
				{ "ToolTip", "???????\xdc\xb3?\xca\xbc??" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFActor, "XFOpen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AXFActor_XFQuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "XunFei" },
				{ "DisplayName", "XFQuit" },
				{ "Keywords", "Quit" },
				{ "ModuleRelativePath", "Public/XFActor.h" },
				{ "ToolTip", "\xcd\xa3\xd6\xb9\xc2\xbc??????" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFActor, "XFQuit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AXFActor_XFResult()
	{
		struct XFActor_eventXFResult_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(XFActor_eventXFResult_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "XunFei" },
				{ "DisplayName", "XFResult" },
				{ "Keywords", "GetResult" },
				{ "ModuleRelativePath", "Public/XFActor.h" },
				{ "ToolTip", "?\xcb\xb3?\xc2\xbc???????\xcd\xb7???\xd4\xb4" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFActor, "XFResult", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(XFActor_eventXFResult_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AXFActor_XFStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "XunFei" },
				{ "DisplayName", "XFStop" },
				{ "Keywords", "Stop" },
				{ "ModuleRelativePath", "Public/XFActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFActor, "XFStop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AXFActor_NoRegister()
	{
		return AXFActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AXFActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_firpl,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AXFActor_XFInit, "XFInit" }, // 2571090540
				{ &Z_Construct_UFunction_AXFActor_XFOpen, "XFOpen" }, // 3747007368
				{ &Z_Construct_UFunction_AXFActor_XFQuit, "XFQuit" }, // 662359676
				{ &Z_Construct_UFunction_AXFActor_XFResult, "XFResult" }, // 3485327215
				{ &Z_Construct_UFunction_AXFActor_XFStop, "XFStop" }, // 950482776
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "XFActor.h" },
				{ "ModuleRelativePath", "Public/XFActor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AXFActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AXFActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXFActor, 2526085104);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXFActor(Z_Construct_UClass_AXFActor, &AXFActor::StaticClass, TEXT("/Script/firpl"), TEXT("AXFActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXFActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
