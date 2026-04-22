// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECommonInputType : uint8;
enum class ECommonGamepadType : uint8;
#ifdef COMMONINPUT_CommonInputSubsystem_generated_h
#error "CommonInputSubsystem.generated.h already included, missing '#pragma once' in CommonInputSubsystem.h"
#endif
#define COMMONINPUT_CommonInputSubsystem_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_12_DELEGATE \
struct CommonInputSubsystem_eventInputMethodChangedDelegate_Parms \
{ \
	ECommonInputType bNewInputType; \
}; \
static inline void FInputMethodChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputMethodChangedDelegate, ECommonInputType bNewInputType) \
{ \
	CommonInputSubsystem_eventInputMethodChangedDelegate_Parms Parms; \
	Parms.bNewInputType=bNewInputType; \
	InputMethodChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentGamepadType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECommonGamepadType*)Z_Param__Result=P_THIS->GetCurrentGamepadType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentInputType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECommonInputType*)Z_Param__Result=P_THIS->GetCurrentInputType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultInputType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECommonInputType*)Z_Param__Result=P_THIS->GetDefaultInputType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUsingPointerInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUsingPointerInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentInputType) \
	{ \
		P_GET_ENUM(ECommonInputType,Z_Param_NewInputType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentInputType(ECommonInputType(Z_Param_NewInputType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadInputType) \
	{ \
		P_GET_ENUM(ECommonGamepadType,Z_Param_InGamepadInputType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadInputType(ECommonGamepadType(Z_Param_InGamepadInputType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowInputKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowInputKeys(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentGamepadType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECommonGamepadType*)Z_Param__Result=P_THIS->GetCurrentGamepadType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentInputType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECommonInputType*)Z_Param__Result=P_THIS->GetCurrentInputType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultInputType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECommonInputType*)Z_Param__Result=P_THIS->GetDefaultInputType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUsingPointerInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUsingPointerInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentInputType) \
	{ \
		P_GET_ENUM(ECommonInputType,Z_Param_NewInputType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentInputType(ECommonInputType(Z_Param_NewInputType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadInputType) \
	{ \
		P_GET_ENUM(ECommonGamepadType,Z_Param_InGamepadInputType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadInputType(ECommonGamepadType(Z_Param_InGamepadInputType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowInputKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowInputKeys(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputSubsystem(); \
	friend struct Z_Construct_UClass_UCommonInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonInputSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonInput"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputSubsystem)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCommonInputSubsystem(); \
	friend struct Z_Construct_UClass_UCommonInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonInputSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonInput"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputSubsystem)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonInputSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputSubsystem(UCommonInputSubsystem&&); \
	NO_API UCommonInputSubsystem(const UCommonInputSubsystem&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputSubsystem(UCommonInputSubsystem&&); \
	NO_API UCommonInputSubsystem(const UCommonInputSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonInputSubsystem)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastInputType() { return STRUCT_OFFSET(UCommonInputSubsystem, LastInputType); } \
	FORCEINLINE static uint32 __PPO__CurrentInputType() { return STRUCT_OFFSET(UCommonInputSubsystem, CurrentInputType); } \
	FORCEINLINE static uint32 __PPO__GamepadInputType() { return STRUCT_OFFSET(UCommonInputSubsystem, GamepadInputType); } \
	FORCEINLINE static uint32 __PPO__CurrentInputLocks() { return STRUCT_OFFSET(UCommonInputSubsystem, CurrentInputLocks); } \
	FORCEINLINE static uint32 __PPO__bIsGamepadSimulatedClick() { return STRUCT_OFFSET(UCommonInputSubsystem, bIsGamepadSimulatedClick); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_8_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
