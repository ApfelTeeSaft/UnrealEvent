// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatablePanel;
class UWidget;
#ifdef COMMONUI_CommonWidgetSwitcher_generated_h
#error "CommonWidgetSwitcher.generated.h already included, missing '#pragma once' in CommonWidgetSwitcher.h"
#endif
#define COMMONUI_CommonWidgetSwitcher_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateNextWidget) \
	{ \
		P_GET_UBOOL(Z_Param_bCanWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateNextWidget(Z_Param_bCanWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivatePreviousWidget) \
	{ \
		P_GET_UBOOL(Z_Param_bCanWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivatePreviousWidget(Z_Param_bCanWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleActiveWidgetDeactivated) \
	{ \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_DeactivatedPanel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleActiveWidgetDeactivated(Z_Param_DeactivatedPanel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasWidgets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidget_Advanced) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_GET_UBOOL(Z_Param_AttemptActivationChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveWidget_Advanced(Z_Param_Widget,Z_Param_AttemptActivationChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidgetIndex_Advanced) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_UBOOL(Z_Param_AttemptActivationChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveWidgetIndex_Advanced(Z_Param_Index,Z_Param_AttemptActivationChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableTransitionAnimation) \
	{ \
		P_GET_UBOOL(Z_Param_bDisableAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisableTransitionAnimation(Z_Param_bDisableAnimation); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateNextWidget) \
	{ \
		P_GET_UBOOL(Z_Param_bCanWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateNextWidget(Z_Param_bCanWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivatePreviousWidget) \
	{ \
		P_GET_UBOOL(Z_Param_bCanWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivatePreviousWidget(Z_Param_bCanWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleActiveWidgetDeactivated) \
	{ \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_DeactivatedPanel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleActiveWidgetDeactivated(Z_Param_DeactivatedPanel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasWidgets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidget_Advanced) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_GET_UBOOL(Z_Param_AttemptActivationChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveWidget_Advanced(Z_Param_Widget,Z_Param_AttemptActivationChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidgetIndex_Advanced) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_UBOOL(Z_Param_AttemptActivationChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveWidgetIndex_Advanced(Z_Param_Index,Z_Param_AttemptActivationChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableTransitionAnimation) \
	{ \
		P_GET_UBOOL(Z_Param_bDisableAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisableTransitionAnimation(Z_Param_bDisableAnimation); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonWidgetSwitcher(); \
	friend struct Z_Construct_UClass_UCommonWidgetSwitcher_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetSwitcher, UWidgetSwitcher, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetSwitcher)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCommonWidgetSwitcher(); \
	friend struct Z_Construct_UClass_UCommonWidgetSwitcher_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetSwitcher, UWidgetSwitcher, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetSwitcher)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonWidgetSwitcher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonWidgetSwitcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetSwitcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetSwitcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetSwitcher(UCommonWidgetSwitcher&&); \
	NO_API UCommonWidgetSwitcher(const UCommonWidgetSwitcher&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetSwitcher(UCommonWidgetSwitcher&&); \
	NO_API UCommonWidgetSwitcher(const UCommonWidgetSwitcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetSwitcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetSwitcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonWidgetSwitcher)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransitionType() { return STRUCT_OFFSET(UCommonWidgetSwitcher, TransitionType); } \
	FORCEINLINE static uint32 __PPO__TransitionCurveType() { return STRUCT_OFFSET(UCommonWidgetSwitcher, TransitionCurveType); } \
	FORCEINLINE static uint32 __PPO__TransitionDuration() { return STRUCT_OFFSET(UCommonWidgetSwitcher, TransitionDuration); } \
	FORCEINLINE static uint32 __PPO__bWidgetActivationEnabled() { return STRUCT_OFFSET(UCommonWidgetSwitcher, bWidgetActivationEnabled); } \
	FORCEINLINE static uint32 __PPO__bOutroPanelBelow() { return STRUCT_OFFSET(UCommonWidgetSwitcher, bOutroPanelBelow); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_14_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetSwitcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
