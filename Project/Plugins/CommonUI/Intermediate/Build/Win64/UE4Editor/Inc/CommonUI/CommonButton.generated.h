// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
class UCommonTextStyle;
struct FDataTableRowHandle;
class UMaterialInstanceDynamic;
class UCommonButtonStyle;
enum class ECommonInputType : uint8;
struct FSlateBrush;
class UCommonActivatablePanel;
#ifdef COMMONUI_CommonButton_generated_h
#error "CommonButton.generated.h already included, missing '#pragma once' in CommonButton.h"
#endif
#define COMMONUI_CommonButton_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableButtonWithReason) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_DisabledReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableButtonWithReason(Z_Param_Out_DisabledReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentButtonPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutButtonPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentButtonPadding(Z_Param_Out_OutButtonPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCustomPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutCustomPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentCustomPadding(Z_Param_Out_OutCustomPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetCurrentTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTextStyleClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UCommonTextStyle> *)Z_Param__Result=P_THIS->GetCurrentTextStyleClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInputAction(Z_Param_Out_InputActionRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetSelected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldSelectUponReceivingFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShouldSelectUponReceivingFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSingleMaterialStyleMID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetSingleMaterialStyleMID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonButtonStyle**)Z_Param__Result=P_THIS->GetStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleButtonClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleButtonPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleButtonPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleButtonReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleButtonReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleFocusReceived) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleFocusReceived(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTriggeringActionCommited) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bPassThrough); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTriggeringActionCommited(Z_Param_Out_bPassThrough); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInteractionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNativeOnActionComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NativeOnActionComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNativeOnActionProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HeldPercent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NativeOnActionProgress(Z_Param_HeldPercent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInputMethodChanged) \
	{ \
		P_GET_ENUM(ECommonInputType,Z_Param_CurrentInputType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInputMethodChanged(ECommonInputType(Z_Param_CurrentInputType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClickMethod) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InClickMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClickMethod(EButtonClickMethod::Type(Z_Param_InClickMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionProgressMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InProgressMaterialBrush); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InProgressMaterialParam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionProgressMaterial(Z_Param_Out_InProgressMaterialBrush,Z_Param_Out_InProgressMaterialParam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsInteractableWhenSelected) \
	{ \
		P_GET_UBOOL(Z_Param_bInInteractableWhenSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsInteractableWhenSelected(Z_Param_bInInteractableWhenSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsInteractionEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsInteractionEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsInteractionEnabled(Z_Param_bInIsInteractionEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsSelectable) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsSelectable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsSelectable(Z_Param_bInIsSelectable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsSelected) \
	{ \
		P_GET_UBOOL(Z_Param_InSelected); \
		P_GET_UBOOL(Z_Param_bGiveClickFeedback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsSelected(Z_Param_InSelected,Z_Param_bGiveClickFeedback); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsToggleable) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsToggleable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsToggleable(Z_Param_bInIsToggleable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDimensions) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InMinWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InMinHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDimensions(Z_Param_InMinWidth,Z_Param_InMinHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPressMethod) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InPressMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPressMethod(EButtonPressMethod::Type(Z_Param_InPressMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedInternal) \
	{ \
		P_GET_UBOOL(Z_Param_bInSelected); \
		P_GET_UBOOL(Z_Param_bAllowSound); \
		P_GET_UBOOL(Z_Param_bBroadcast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedInternal(Z_Param_bInSelected,Z_Param_bAllowSound,Z_Param_bBroadcast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldSelectUponReceivingFocus) \
	{ \
		P_GET_UBOOL(Z_Param_bInShouldSelectUponReceivingFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldSelectUponReceivingFocus(Z_Param_bInShouldSelectUponReceivingFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldUseFallbackDefaultInputAction) \
	{ \
		P_GET_UBOOL(Z_Param_bInShouldUseFallbackDefaultInputAction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldUseFallbackDefaultInputAction(Z_Param_bInShouldUseFallbackDefaultInputAction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStyle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStyle(Z_Param_InStyle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTouchMethod) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InTouchMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTouchMethod(EButtonTouchMethod::Type(Z_Param_InTouchMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTriggeredInputAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRow); \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_OldPanel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTriggeredInputAction(Z_Param_Out_InputActionRow,Z_Param_OldPanel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTriggeringInputAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTriggeringInputAction(Z_Param_Out_InputActionRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDoubleClickPropagation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDoubleClickPropagation(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableButtonWithReason) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_DisabledReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableButtonWithReason(Z_Param_Out_DisabledReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentButtonPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutButtonPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentButtonPadding(Z_Param_Out_OutButtonPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCustomPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutCustomPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentCustomPadding(Z_Param_Out_OutCustomPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetCurrentTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTextStyleClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UCommonTextStyle> *)Z_Param__Result=P_THIS->GetCurrentTextStyleClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInputAction(Z_Param_Out_InputActionRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetSelected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldSelectUponReceivingFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShouldSelectUponReceivingFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSingleMaterialStyleMID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetSingleMaterialStyleMID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonButtonStyle**)Z_Param__Result=P_THIS->GetStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleButtonClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleButtonPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleButtonPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleButtonReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleButtonReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleFocusReceived) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleFocusReceived(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTriggeringActionCommited) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bPassThrough); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTriggeringActionCommited(Z_Param_Out_bPassThrough); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInteractionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNativeOnActionComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NativeOnActionComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNativeOnActionProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HeldPercent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NativeOnActionProgress(Z_Param_HeldPercent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInputMethodChanged) \
	{ \
		P_GET_ENUM(ECommonInputType,Z_Param_CurrentInputType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInputMethodChanged(ECommonInputType(Z_Param_CurrentInputType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClickMethod) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InClickMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClickMethod(EButtonClickMethod::Type(Z_Param_InClickMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionProgressMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InProgressMaterialBrush); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InProgressMaterialParam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionProgressMaterial(Z_Param_Out_InProgressMaterialBrush,Z_Param_Out_InProgressMaterialParam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsInteractableWhenSelected) \
	{ \
		P_GET_UBOOL(Z_Param_bInInteractableWhenSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsInteractableWhenSelected(Z_Param_bInInteractableWhenSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsInteractionEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsInteractionEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsInteractionEnabled(Z_Param_bInIsInteractionEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsSelectable) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsSelectable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsSelectable(Z_Param_bInIsSelectable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsSelected) \
	{ \
		P_GET_UBOOL(Z_Param_InSelected); \
		P_GET_UBOOL(Z_Param_bGiveClickFeedback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsSelected(Z_Param_InSelected,Z_Param_bGiveClickFeedback); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsToggleable) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsToggleable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsToggleable(Z_Param_bInIsToggleable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDimensions) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InMinWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InMinHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDimensions(Z_Param_InMinWidth,Z_Param_InMinHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPressMethod) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InPressMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPressMethod(EButtonPressMethod::Type(Z_Param_InPressMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedInternal) \
	{ \
		P_GET_UBOOL(Z_Param_bInSelected); \
		P_GET_UBOOL(Z_Param_bAllowSound); \
		P_GET_UBOOL(Z_Param_bBroadcast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedInternal(Z_Param_bInSelected,Z_Param_bAllowSound,Z_Param_bBroadcast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldSelectUponReceivingFocus) \
	{ \
		P_GET_UBOOL(Z_Param_bInShouldSelectUponReceivingFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldSelectUponReceivingFocus(Z_Param_bInShouldSelectUponReceivingFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldUseFallbackDefaultInputAction) \
	{ \
		P_GET_UBOOL(Z_Param_bInShouldUseFallbackDefaultInputAction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldUseFallbackDefaultInputAction(Z_Param_bInShouldUseFallbackDefaultInputAction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStyle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStyle(Z_Param_InStyle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTouchMethod) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InTouchMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTouchMethod(EButtonTouchMethod::Type(Z_Param_InTouchMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTriggeredInputAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRow); \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_OldPanel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTriggeredInputAction(Z_Param_Out_InputActionRow,Z_Param_OldPanel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTriggeringInputAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTriggeringInputAction(Z_Param_Out_InputActionRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDoubleClickPropagation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDoubleClickPropagation(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_EVENT_PARMS \
	struct CommonButton_eventOnActionProgress_Parms \
	{ \
		float HeldPercent; \
	}; \
	struct CommonButton_eventOnTriggeredInputActionChanged_Parms \
	{ \
		FDataTableRowHandle NewTriggeredAction; \
	};


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButton(); \
	friend struct Z_Construct_UClass_UCommonButton_Statics; \
public: \
	DECLARE_CLASS(UCommonButton, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButton)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButton(); \
	friend struct Z_Construct_UClass_UCommonButton_Statics; \
public: \
	DECLARE_CLASS(UCommonButton, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButton)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButton(UCommonButton&&); \
	NO_API UCommonButton(const UCommonButton&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButton(UCommonButton&&); \
	NO_API UCommonButton(const UCommonButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonButton)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinWidth() { return STRUCT_OFFSET(UCommonButton, MinWidth); } \
	FORCEINLINE static uint32 __PPO__MinHeight() { return STRUCT_OFFSET(UCommonButton, MinHeight); } \
	FORCEINLINE static uint32 __PPO__Style() { return STRUCT_OFFSET(UCommonButton, Style); } \
	FORCEINLINE static uint32 __PPO__bHideInputAction() { return STRUCT_OFFSET(UCommonButton, bHideInputAction); } \
	FORCEINLINE static uint32 __PPO__PressedSlateSoundOverride() { return STRUCT_OFFSET(UCommonButton, PressedSlateSoundOverride); } \
	FORCEINLINE static uint32 __PPO__HoveredSlateSoundOverride() { return STRUCT_OFFSET(UCommonButton, HoveredSlateSoundOverride); } \
	FORCEINLINE static uint32 __PPO__OnSelectedChanged() { return STRUCT_OFFSET(UCommonButton, OnSelectedChanged); } \
	FORCEINLINE static uint32 __PPO__OnButtonClicked() { return STRUCT_OFFSET(UCommonButton, OnButtonClicked); } \
	FORCEINLINE static uint32 __PPO__OnButtonDoubleClicked() { return STRUCT_OFFSET(UCommonButton, OnButtonDoubleClicked); } \
	FORCEINLINE static uint32 __PPO__OnButtonHovered() { return STRUCT_OFFSET(UCommonButton, OnButtonHovered); } \
	FORCEINLINE static uint32 __PPO__OnButtonUnhovered() { return STRUCT_OFFSET(UCommonButton, OnButtonUnhovered); } \
	FORCEINLINE static uint32 __PPO__InputActionWidget() { return STRUCT_OFFSET(UCommonButton, InputActionWidget); } \
	FORCEINLINE static uint32 __PPO__SingleMaterialStyleMID() { return STRUCT_OFFSET(UCommonButton, SingleMaterialStyleMID); } \
	FORCEINLINE static uint32 __PPO__NormalStyle() { return STRUCT_OFFSET(UCommonButton, NormalStyle); } \
	FORCEINLINE static uint32 __PPO__SelectedStyle() { return STRUCT_OFFSET(UCommonButton, SelectedStyle); } \
	FORCEINLINE static uint32 __PPO__DisabledStyle() { return STRUCT_OFFSET(UCommonButton, DisabledStyle); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_19_PROLOG \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_EVENT_PARMS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
