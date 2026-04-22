// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButton;
class UCommonWidgetSwitcher;
class UWidget;
enum class ESlateVisibility : uint8;
#ifdef COMMONUI_CommonTabListWidget_generated_h
#error "CommonTabListWidget.generated.h already included, missing '#pragma once' in CommonTabListWidget.h"
#endif
#define COMMONUI_CommonTabListWidget_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_22_DELEGATE \
struct CommonTabListWidget_eventOnTabButtonCreated_Parms \
{ \
	FName TabId; \
	UCommonButton* TabButton; \
}; \
static inline void FOnTabButtonCreated_DelegateWrapper(const FMulticastScriptDelegate& OnTabButtonCreated, FName TabId, UCommonButton* TabButton) \
{ \
	CommonTabListWidget_eventOnTabButtonCreated_Parms Parms; \
	Parms.TabId=TabId; \
	Parms.TabButton=TabButton; \
	OnTabButtonCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_21_DELEGATE \
struct CommonTabListWidget_eventOnTabButtonRemoved_Parms \
{ \
	FName TabId; \
	UCommonButton* TabButton; \
}; \
static inline void FOnTabButtonRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnTabButtonRemoved, FName TabId, UCommonButton* TabButton) \
{ \
	CommonTabListWidget_eventOnTabButtonRemoved_Parms Parms; \
	Parms.TabId=TabId; \
	Parms.TabButton=TabButton; \
	OnTabButtonRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_20_DELEGATE \
struct CommonTabListWidget_eventOnTabSelected_Parms \
{ \
	FName TabId; \
}; \
static inline void FOnTabSelected_DelegateWrapper(const FMulticastScriptDelegate& OnTabSelected, FName TabId) \
{ \
	CommonTabListWidget_eventOnTabSelected_Parms Parms; \
	Parms.TabId=TabId; \
	OnTabSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_RPC_WRAPPERS \
	virtual void HandleTabCreated_Implementation(FName TabNameID, UCommonButton* TabButton); \
	virtual void HandleTabRemoved_Implementation(FName TabNameID, UCommonButton* TabButton); \
 \
	DECLARE_FUNCTION(execDisableTabWithReason) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Reason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableTabWithReason(Z_Param_TabNameID,Z_Param_Out_Reason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveTab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetActiveTab(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLinkedSwitcher) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonWidgetSwitcher**)Z_Param__Result=P_THIS->GetLinkedSwitcher(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTabId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetSelectedTabId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTabButtonByID) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonButton**)Z_Param__Result=P_THIS->GetTabButtonByID(Z_Param_TabNameID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTabCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTabCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTabIdAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetTabIdAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleNextTabInputAction) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bPassThrough); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleNextTabInputAction(Z_Param_Out_bPassThrough); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePreviousTabInputAction) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bPassThrough); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePreviousTabInputAction(Z_Param_Out_bPassThrough); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTabButtonSelected) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_SelectedTabButton); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ButtonIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTabButtonSelected(Z_Param_SelectedTabButton,Z_Param_ButtonIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTabCreated) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_OBJECT(UCommonButton,Z_Param_TabButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTabCreated_Implementation(Z_Param_TabNameID,Z_Param_TabButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTabRemoved) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_OBJECT(UCommonButton,Z_Param_TabButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTabRemoved_Implementation(Z_Param_TabNameID,Z_Param_TabButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterTab) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_OBJECT(UClass,Z_Param_ButtonWidgetType); \
		P_GET_OBJECT(UWidget,Z_Param_ContentWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegisterTab(Z_Param_TabNameID,Z_Param_ButtonWidgetType,Z_Param_ContentWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllTabs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllTabs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTab) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveTab(Z_Param_TabNameID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTabByID) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_UBOOL(Z_Param_bSuppressClickFeedback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SelectTabByID(Z_Param_TabNameID,Z_Param_bSuppressClickFeedback); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinkedSwitcher) \
	{ \
		P_GET_OBJECT(UCommonWidgetSwitcher,Z_Param_CommonSwitcher); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinkedSwitcher(Z_Param_CommonSwitcher); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetListeningForInput) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldListen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetListeningForInput(Z_Param_bShouldListen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTabEnabled) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTabEnabled(Z_Param_TabNameID,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTabInteractionEnabled) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTabInteractionEnabled(Z_Param_TabNameID,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTabVisibility) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_ENUM(ESlateVisibility,Z_Param_NewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTabVisibility(Z_Param_TabNameID,ESlateVisibility(Z_Param_NewVisibility)); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleTabCreated_Implementation(FName TabNameID, UCommonButton* TabButton); \
	virtual void HandleTabRemoved_Implementation(FName TabNameID, UCommonButton* TabButton); \
 \
	DECLARE_FUNCTION(execDisableTabWithReason) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Reason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableTabWithReason(Z_Param_TabNameID,Z_Param_Out_Reason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveTab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetActiveTab(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLinkedSwitcher) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonWidgetSwitcher**)Z_Param__Result=P_THIS->GetLinkedSwitcher(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTabId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetSelectedTabId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTabButtonByID) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonButton**)Z_Param__Result=P_THIS->GetTabButtonByID(Z_Param_TabNameID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTabCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTabCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTabIdAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetTabIdAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleNextTabInputAction) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bPassThrough); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleNextTabInputAction(Z_Param_Out_bPassThrough); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePreviousTabInputAction) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bPassThrough); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePreviousTabInputAction(Z_Param_Out_bPassThrough); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTabButtonSelected) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_SelectedTabButton); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ButtonIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTabButtonSelected(Z_Param_SelectedTabButton,Z_Param_ButtonIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTabCreated) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_OBJECT(UCommonButton,Z_Param_TabButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTabCreated_Implementation(Z_Param_TabNameID,Z_Param_TabButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTabRemoved) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_OBJECT(UCommonButton,Z_Param_TabButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTabRemoved_Implementation(Z_Param_TabNameID,Z_Param_TabButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterTab) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_OBJECT(UClass,Z_Param_ButtonWidgetType); \
		P_GET_OBJECT(UWidget,Z_Param_ContentWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegisterTab(Z_Param_TabNameID,Z_Param_ButtonWidgetType,Z_Param_ContentWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllTabs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllTabs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTab) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveTab(Z_Param_TabNameID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTabByID) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_UBOOL(Z_Param_bSuppressClickFeedback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SelectTabByID(Z_Param_TabNameID,Z_Param_bSuppressClickFeedback); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinkedSwitcher) \
	{ \
		P_GET_OBJECT(UCommonWidgetSwitcher,Z_Param_CommonSwitcher); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinkedSwitcher(Z_Param_CommonSwitcher); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetListeningForInput) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldListen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetListeningForInput(Z_Param_bShouldListen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTabEnabled) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTabEnabled(Z_Param_TabNameID,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTabInteractionEnabled) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTabInteractionEnabled(Z_Param_TabNameID,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTabVisibility) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TabNameID); \
		P_GET_ENUM(ESlateVisibility,Z_Param_NewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTabVisibility(Z_Param_TabNameID,ESlateVisibility(Z_Param_NewVisibility)); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_EVENT_PARMS \
	struct CommonTabListWidget_eventHandleTabCreated_Parms \
	{ \
		FName TabNameID; \
		UCommonButton* TabButton; \
	}; \
	struct CommonTabListWidget_eventHandleTabRemoved_Parms \
	{ \
		FName TabNameID; \
		UCommonButton* TabButton; \
	};


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonTabListWidget(); \
	friend struct Z_Construct_UClass_UCommonTabListWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonTabListWidget, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTabListWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCommonTabListWidget(); \
	friend struct Z_Construct_UClass_UCommonTabListWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonTabListWidget, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTabListWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonTabListWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTabListWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTabListWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTabListWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTabListWidget(UCommonTabListWidget&&); \
	NO_API UCommonTabListWidget(const UCommonTabListWidget&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTabListWidget(UCommonTabListWidget&&); \
	NO_API UCommonTabListWidget(const UCommonTabListWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTabListWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTabListWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonTabListWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NextTabInputActionData() { return STRUCT_OFFSET(UCommonTabListWidget, NextTabInputActionData); } \
	FORCEINLINE static uint32 __PPO__PreviousTabInputActionData() { return STRUCT_OFFSET(UCommonTabListWidget, PreviousTabInputActionData); } \
	FORCEINLINE static uint32 __PPO__bAutoListenForInput() { return STRUCT_OFFSET(UCommonTabListWidget, bAutoListenForInput); } \
	FORCEINLINE static uint32 __PPO__LinkedSwitcher() { return STRUCT_OFFSET(UCommonTabListWidget, LinkedSwitcher); } \
	FORCEINLINE static uint32 __PPO__RegisteredTabsByID() { return STRUCT_OFFSET(UCommonTabListWidget, RegisteredTabsByID); } \
	FORCEINLINE static uint32 __PPO__TabButtonGroup() { return STRUCT_OFFSET(UCommonTabListWidget, TabButtonGroup); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_16_PROLOG \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_EVENT_PARMS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTabListWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
