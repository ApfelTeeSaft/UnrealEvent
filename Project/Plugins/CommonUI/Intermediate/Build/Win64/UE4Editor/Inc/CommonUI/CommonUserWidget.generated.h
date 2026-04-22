// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPointerEvent;
#ifdef COMMONUI_CommonUserWidget_generated_h
#error "CommonUserWidget.generated.h already included, missing '#pragma once' in CommonUserWidget.h"
#endif
#define COMMONUI_CommonUserWidget_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetConsumePointerInput) \
	{ \
		P_GET_UBOOL(Z_Param_bInConsumePointerInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConsumePointerInput(Z_Param_bInConsumePointerInput); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetConsumePointerInput) \
	{ \
		P_GET_UBOOL(Z_Param_bInConsumePointerInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConsumePointerInput(Z_Param_bInConsumePointerInput); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_EVENT_PARMS \
	struct CommonUserWidget_eventOnTouchLeave_Parms \
	{ \
		FPointerEvent TouchEvent; \
	};


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUserWidget(); \
	friend struct Z_Construct_UClass_UCommonUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUserWidget(); \
	friend struct Z_Construct_UClass_UCommonUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUserWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserWidget(UCommonUserWidget&&); \
	NO_API UCommonUserWidget(const UCommonUserWidget&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserWidget(UCommonUserWidget&&); \
	NO_API UCommonUserWidget(const UCommonUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUserWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bConsumePointerInput() { return STRUCT_OFFSET(UCommonUserWidget, bConsumePointerInput); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_8_PROLOG \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_EVENT_PARMS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
