// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDataTableRowHandle;
enum class ECommonInputType : uint8;
enum class ECommonGamepadType : uint8;
struct FSlateBrush;
class UCommonInputManager;
#ifdef COMMONUI_CommonUISubsystem_generated_h
#error "CommonUISubsystem.generated.h already included, missing '#pragma once' in CommonUISubsystem.h"
#endif
#define COMMONUI_CommonUISubsystem_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_18_DELEGATE \
struct CommonUISubsystem_eventInputMethodChangedDelegate_Parms \
{ \
	bool bUsingGamepad; \
}; \
static inline void FInputMethodChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputMethodChangedDelegate, bool bUsingGamepad) \
{ \
	CommonUISubsystem_eventInputMethodChangedDelegate_Parms Parms; \
	Parms.bUsingGamepad=bUsingGamepad ? true : false; \
	InputMethodChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_17_DELEGATE \
struct CommonUISubsystem_eventInputSuspensionChanged_Parms \
{ \
	bool bInputSuspended; \
}; \
static inline void FInputSuspensionChanged_DelegateWrapper(const FMulticastScriptDelegate& InputSuspensionChanged, bool bInputSuspended) \
{ \
	CommonUISubsystem_eventInputSuspensionChanged_Parms Parms; \
	Parms.bInputSuspended=bInputSuspended ? true : false; \
	InputSuspensionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputActionButtonIcon) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRowHandle); \
		P_GET_ENUM(ECommonInputType,Z_Param_InputType); \
		P_GET_ENUM(ECommonGamepadType,Z_Param_GamepadType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetInputActionButtonIcon(Z_Param_Out_InputActionRowHandle,ECommonInputType(Z_Param_InputType),ECommonGamepadType(Z_Param_GamepadType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonInputManager**)Z_Param__Result=P_THIS->GetInputManager(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputActionButtonIcon) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRowHandle); \
		P_GET_ENUM(ECommonInputType,Z_Param_InputType); \
		P_GET_ENUM(ECommonGamepadType,Z_Param_GamepadType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetInputActionButtonIcon(Z_Param_Out_InputActionRowHandle,ECommonInputType(Z_Param_InputType),ECommonGamepadType(Z_Param_GamepadType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonInputManager**)Z_Param__Result=P_THIS->GetInputManager(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUISubsystem(); \
	friend struct Z_Construct_UClass_UCommonUISubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonUISubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUISubsystem)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUISubsystem(); \
	friend struct Z_Construct_UClass_UCommonUISubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonUISubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUISubsystem)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUISubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUISubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUISubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUISubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUISubsystem(UCommonUISubsystem&&); \
	NO_API UCommonUISubsystem(const UCommonUISubsystem&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUISubsystem(UCommonUISubsystem&&); \
	NO_API UCommonUISubsystem(const UCommonUISubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUISubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUISubsystem)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CommonInputManager() { return STRUCT_OFFSET(UCommonUISubsystem, CommonInputManager); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_13_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUISubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
