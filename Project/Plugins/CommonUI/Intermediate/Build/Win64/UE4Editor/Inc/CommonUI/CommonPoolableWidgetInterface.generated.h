// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonPoolableWidgetInterface_generated_h
#error "CommonPoolableWidgetInterface.generated.h already included, missing '#pragma once' in CommonPoolableWidgetInterface.h"
#endif
#define COMMONUI_CommonPoolableWidgetInterface_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_RPC_WRAPPERS \
	virtual void OnAcquireFromPool_Implementation() {}; \
	virtual void OnReleaseToPool_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnAcquireFromPool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAcquireFromPool_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReleaseToPool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReleaseToPool_Implementation(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAcquireFromPool_Implementation() {}; \
	virtual void OnReleaseToPool_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnAcquireFromPool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAcquireFromPool_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReleaseToPool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReleaseToPool_Implementation(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_EVENT_PARMS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonPoolableWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPoolableWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPoolableWidgetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPoolableWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPoolableWidgetInterface(UCommonPoolableWidgetInterface&&); \
	NO_API UCommonPoolableWidgetInterface(const UCommonPoolableWidgetInterface&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonPoolableWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPoolableWidgetInterface(UCommonPoolableWidgetInterface&&); \
	NO_API UCommonPoolableWidgetInterface(const UCommonPoolableWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPoolableWidgetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPoolableWidgetInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPoolableWidgetInterface)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCommonPoolableWidgetInterface(); \
	friend struct Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UCommonPoolableWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonPoolableWidgetInterface)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_GENERATED_UINTERFACE_BODY() \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_GENERATED_UINTERFACE_BODY() \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICommonPoolableWidgetInterface() {} \
public: \
	typedef UCommonPoolableWidgetInterface UClassType; \
	typedef ICommonPoolableWidgetInterface ThisClass; \
	static void Execute_OnAcquireFromPool(UObject* O); \
	static void Execute_OnReleaseToPool(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ICommonPoolableWidgetInterface() {} \
public: \
	typedef UCommonPoolableWidgetInterface UClassType; \
	typedef ICommonPoolableWidgetInterface ThisClass; \
	static void Execute_OnAcquireFromPool(UObject* O); \
	static void Execute_OnReleaseToPool(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_6_PROLOG \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_EVENT_PARMS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
