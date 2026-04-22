// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
class UCommonPopupMenu;
struct FCommonInputActionHandlerData;
struct FDataTableRowHandle;
enum class EInputActionState : uint8;
#ifdef COMMONUI_CommonActivatablePanel_generated_h
#error "CommonActivatablePanel.generated.h already included, missing '#pragma once' in CommonActivatablePanel.h"
#endif
#define COMMONUI_CommonActivatablePanel_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_RPC_WRAPPERS \
	virtual void OnBeginIntro_Implementation(); \
	virtual void OnBeginOutro_Implementation(); \
 \
	DECLARE_FUNCTION(execAddInputActionHandler) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionHandler(Z_Param_DataTable,Z_Param_RowName,FCommonActionCommited(Z_Param_CommitedEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInputActionHandlerWithPopup) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_OBJECT(UCommonPopupMenu,Z_Param_PopupMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionHandlerWithPopup(Z_Param_DataTable,Z_Param_RowName,FCommonActionCommited(Z_Param_CommitedEvent),Z_Param_PopupMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInputActionHandlerWithProgress) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ProgressEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionHandlerWithProgress(Z_Param_DataTable,Z_Param_RowName,FCommonActionCommited(Z_Param_CommitedEvent),FCommonActionProgressSingle(Z_Param_ProgressEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInputActionHandlerWithProgressPopup) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ProgressEvent); \
		P_GET_OBJECT(UCommonPopupMenu,Z_Param_PopupMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionHandlerWithProgressPopup(Z_Param_DataTable,Z_Param_RowName,FCommonActionCommited(Z_Param_CommitedEvent),FCommonActionProgressSingle(Z_Param_ProgressEvent),Z_Param_PopupMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInputActionNoHandler) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionNoHandler(Z_Param_DataTable,Z_Param_RowName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginIntro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginIntro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOutro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOutro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndIntro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndIntro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndOutro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOutro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputActions) \
	{ \
		P_GET_TARRAY_REF(FCommonInputActionHandlerData,Z_Param_Out_InputActionDataRows); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInputActions(Z_Param_Out_InputActionDataRows); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInputActionHandler) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasInputActionHandler(Z_Param_InputActionRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActivated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActivated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInActivationStack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInActivationStack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsIntroed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsIntroed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginIntro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginIntro_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOutro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOutro_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopPanel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopPanel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllInputActionHandlers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllInputActionHandlers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInputActionHandler) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInputActionHandler(Z_Param_InputActionRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionHandlerState) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_ENUM(EInputActionState,Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActionHandlerState(Z_Param_DataTable,Z_Param_RowName,EInputActionState(Z_Param_State)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionHandlerStateFromHandle) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_ENUM(EInputActionState,Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActionHandlerStateFromHandle(Z_Param_InputActionRow,EInputActionState(Z_Param_State)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionHandlerStateFromHandleWithDisabledCommitEvent) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_ENUM(EInputActionState,Z_Param_State); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_DisabledCommitEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActionHandlerStateFromHandleWithDisabledCommitEvent(Z_Param_InputActionRow,EInputActionState(Z_Param_State),FCommonActionCommited(Z_Param_DisabledCommitEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionHandlerStateWithDisabledCommitEvent) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_ENUM(EInputActionState,Z_Param_State); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_DisabledCommitEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActionHandlerStateWithDisabledCommitEvent(Z_Param_DataTable,Z_Param_RowName,EInputActionState(Z_Param_State),FCommonActionCommited(Z_Param_DisabledCommitEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionHandler) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionHandler(Z_Param_InputActionRow,FCommonActionCommited(Z_Param_CommitedEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionHandlerWithPopupMenu) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_OBJECT(UCommonPopupMenu,Z_Param_PopupMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionHandlerWithPopupMenu(Z_Param_InputActionRow,FCommonActionCommited(Z_Param_CommitedEvent),Z_Param_PopupMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionHandlerWithProgress) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ProgressEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionHandlerWithProgress(Z_Param_InputActionRow,FCommonActionCommited(Z_Param_CommitedEvent),FCommonActionProgressSingle(Z_Param_ProgressEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionHandlerWithProgressPopupMenu) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ProgressEvent); \
		P_GET_OBJECT(UCommonPopupMenu,Z_Param_PopupMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionHandlerWithProgressPopupMenu(Z_Param_InputActionRow,FCommonActionCommited(Z_Param_CommitedEvent),FCommonActionProgressSingle(Z_Param_ProgressEvent),Z_Param_PopupMenu); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnBeginIntro_Implementation(); \
	virtual void OnBeginOutro_Implementation(); \
 \
	DECLARE_FUNCTION(execAddInputActionHandler) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionHandler(Z_Param_DataTable,Z_Param_RowName,FCommonActionCommited(Z_Param_CommitedEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInputActionHandlerWithPopup) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_OBJECT(UCommonPopupMenu,Z_Param_PopupMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionHandlerWithPopup(Z_Param_DataTable,Z_Param_RowName,FCommonActionCommited(Z_Param_CommitedEvent),Z_Param_PopupMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInputActionHandlerWithProgress) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ProgressEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionHandlerWithProgress(Z_Param_DataTable,Z_Param_RowName,FCommonActionCommited(Z_Param_CommitedEvent),FCommonActionProgressSingle(Z_Param_ProgressEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInputActionHandlerWithProgressPopup) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ProgressEvent); \
		P_GET_OBJECT(UCommonPopupMenu,Z_Param_PopupMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionHandlerWithProgressPopup(Z_Param_DataTable,Z_Param_RowName,FCommonActionCommited(Z_Param_CommitedEvent),FCommonActionProgressSingle(Z_Param_ProgressEvent),Z_Param_PopupMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInputActionNoHandler) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInputActionNoHandler(Z_Param_DataTable,Z_Param_RowName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginIntro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginIntro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOutro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOutro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndIntro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndIntro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndOutro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOutro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputActions) \
	{ \
		P_GET_TARRAY_REF(FCommonInputActionHandlerData,Z_Param_Out_InputActionDataRows); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInputActions(Z_Param_Out_InputActionDataRows); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInputActionHandler) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasInputActionHandler(Z_Param_InputActionRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActivated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActivated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInActivationStack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInActivationStack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsIntroed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsIntroed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginIntro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginIntro_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOutro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOutro_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopPanel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopPanel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllInputActionHandlers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllInputActionHandlers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInputActionHandler) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInputActionHandler(Z_Param_InputActionRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionHandlerState) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_ENUM(EInputActionState,Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActionHandlerState(Z_Param_DataTable,Z_Param_RowName,EInputActionState(Z_Param_State)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionHandlerStateFromHandle) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_ENUM(EInputActionState,Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActionHandlerStateFromHandle(Z_Param_InputActionRow,EInputActionState(Z_Param_State)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionHandlerStateFromHandleWithDisabledCommitEvent) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_ENUM(EInputActionState,Z_Param_State); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_DisabledCommitEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActionHandlerStateFromHandleWithDisabledCommitEvent(Z_Param_InputActionRow,EInputActionState(Z_Param_State),FCommonActionCommited(Z_Param_DisabledCommitEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionHandlerStateWithDisabledCommitEvent) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_ENUM(EInputActionState,Z_Param_State); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_DisabledCommitEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActionHandlerStateWithDisabledCommitEvent(Z_Param_DataTable,Z_Param_RowName,EInputActionState(Z_Param_State),FCommonActionCommited(Z_Param_DisabledCommitEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionHandler) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionHandler(Z_Param_InputActionRow,FCommonActionCommited(Z_Param_CommitedEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionHandlerWithPopupMenu) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_OBJECT(UCommonPopupMenu,Z_Param_PopupMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionHandlerWithPopupMenu(Z_Param_InputActionRow,FCommonActionCommited(Z_Param_CommitedEvent),Z_Param_PopupMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionHandlerWithProgress) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ProgressEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionHandlerWithProgress(Z_Param_InputActionRow,FCommonActionCommited(Z_Param_CommitedEvent),FCommonActionProgressSingle(Z_Param_ProgressEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionHandlerWithProgressPopupMenu) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_CommitedEvent); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ProgressEvent); \
		P_GET_OBJECT(UCommonPopupMenu,Z_Param_PopupMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputActionHandlerWithProgressPopupMenu(Z_Param_InputActionRow,FCommonActionCommited(Z_Param_CommitedEvent),FCommonActionProgressSingle(Z_Param_ProgressEvent),Z_Param_PopupMenu); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_EVENT_PARMS \
	struct CommonActivatablePanel_eventOnInputModeChanged_Parms \
	{ \
		bool bUsingGamepad; \
	};


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonActivatablePanel(); \
	friend struct Z_Construct_UClass_UCommonActivatablePanel_Statics; \
public: \
	DECLARE_CLASS(UCommonActivatablePanel, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonActivatablePanel) \
	virtual UObject* _getUObject() const override { return const_cast<UCommonActivatablePanel*>(this); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCommonActivatablePanel(); \
	friend struct Z_Construct_UClass_UCommonActivatablePanel_Statics; \
public: \
	DECLARE_CLASS(UCommonActivatablePanel, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonActivatablePanel) \
	virtual UObject* _getUObject() const override { return const_cast<UCommonActivatablePanel*>(this); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonActivatablePanel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActivatablePanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActivatablePanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActivatablePanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActivatablePanel(UCommonActivatablePanel&&); \
	NO_API UCommonActivatablePanel(const UCommonActivatablePanel&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActivatablePanel(UCommonActivatablePanel&&); \
	NO_API UCommonActivatablePanel(const UCommonActivatablePanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActivatablePanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActivatablePanel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonActivatablePanel)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bConsumeAllActions() { return STRUCT_OFFSET(UCommonActivatablePanel, bConsumeAllActions); } \
	FORCEINLINE static uint32 __PPO__bExposeActionsExternally() { return STRUCT_OFFSET(UCommonActivatablePanel, bExposeActionsExternally); } \
	FORCEINLINE static uint32 __PPO__bShouldBypassStack() { return STRUCT_OFFSET(UCommonActivatablePanel, bShouldBypassStack); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_16_PROLOG \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_EVENT_PARMS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActivatablePanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
