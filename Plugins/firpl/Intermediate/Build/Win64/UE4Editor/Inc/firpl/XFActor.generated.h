// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRPL_XFActor_generated_h
#error "XFActor.generated.h already included, missing '#pragma once' in XFActor.h"
#endif
#define FIRPL_XFActor_generated_h

#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execXFResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->XFResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXFQuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->XFQuit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXFStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->XFStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXFOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->XFOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXFInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->XFInit(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execXFResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->XFResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXFQuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->XFQuit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXFStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->XFStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXFOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->XFOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execXFInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->XFInit(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXFActor(); \
	friend FIRPL_API class UClass* Z_Construct_UClass_AXFActor(); \
public: \
	DECLARE_CLASS(AXFActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/firpl"), NO_API) \
	DECLARE_SERIALIZER(AXFActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAXFActor(); \
	friend FIRPL_API class UClass* Z_Construct_UClass_AXFActor(); \
public: \
	DECLARE_CLASS(AXFActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/firpl"), NO_API) \
	DECLARE_SERIALIZER(AXFActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AXFActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXFActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXFActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXFActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXFActor(AXFActor&&); \
	NO_API AXFActor(const AXFActor&); \
public:


#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXFActor(AXFActor&&); \
	NO_API AXFActor(const AXFActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXFActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXFActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AXFActor)


#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_19_PROLOG
#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_RPC_WRAPPERS \
	HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_INCLASS \
	HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_firpl_Source_firpl_Public_XFActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
