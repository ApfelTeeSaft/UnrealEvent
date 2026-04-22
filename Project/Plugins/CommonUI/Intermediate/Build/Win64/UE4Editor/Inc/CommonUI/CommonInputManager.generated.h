// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCommonInputActionHandlerData;
class UCommonActivatablePanel;
struct FDataTableRowHandle;
#ifdef COMMONUI_CommonInputManager_generated_h
#error "CommonInputManager.generated.h already included, missing '#pragma once' in CommonInputManager.h"
#endif
#define COMMONUI_CommonInputManager_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvailableInputActions) \
	{ \
		P_GET_TARRAY_REF(FCommonInputActionHandlerData,Z_Param_Out_AvailableInputActions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAvailableInputActions(Z_Param_Out_AvailableInputActions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalInputHandlerPriorityFilter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGlobalInputHandlerPriorityFilter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTopPanel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonActivatablePanel**)Z_Param__Result=P_THIS->GetTopPanel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInputSuspended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInputSuspended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPanelOnStack) \
	{ \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_InPanel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPanelOnStack(Z_Param_InPanel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopActivatablePanel) \
	{ \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_ActivatablePanel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopActivatablePanel(Z_Param_ActivatablePanel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushActivatablePanel) \
	{ \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_ActivatablePanel); \
		P_GET_UBOOL(Z_Param_bIntroPanel); \
		P_GET_UBOOL(Z_Param_bOutroPanelBelow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PushActivatablePanel(Z_Param_ActivatablePanel,Z_Param_bIntroPanel,Z_Param_bOutroPanelBelow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeStartingOperationProcessing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResumeStartingOperationProcessing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalInputHandlerPriorityFilter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InFilterPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGlobalInputHandlerPriorityFilter(Z_Param_InFilterPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartListeningForExistingHeldAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionDataRow); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompleteEvent); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_ProgressEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartListeningForExistingHeldAction(Z_Param_Out_InputActionDataRow,FCommonActionCompleteSingle(Z_Param_Out_CompleteEvent),FCommonActionProgressSingle(Z_Param_Out_ProgressEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForExistingHeldAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionDataRow); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompleteEvent); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_ProgressEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StopListeningForExistingHeldAction(Z_Param_Out_InputActionDataRow,FCommonActionCompleteSingle(Z_Param_Out_CompleteEvent),FCommonActionProgressSingle(Z_Param_Out_ProgressEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendStartingOperationProcessing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuspendStartingOperationProcessing(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvailableInputActions) \
	{ \
		P_GET_TARRAY_REF(FCommonInputActionHandlerData,Z_Param_Out_AvailableInputActions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAvailableInputActions(Z_Param_Out_AvailableInputActions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalInputHandlerPriorityFilter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGlobalInputHandlerPriorityFilter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTopPanel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonActivatablePanel**)Z_Param__Result=P_THIS->GetTopPanel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInputSuspended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInputSuspended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPanelOnStack) \
	{ \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_InPanel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPanelOnStack(Z_Param_InPanel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopActivatablePanel) \
	{ \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_ActivatablePanel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopActivatablePanel(Z_Param_ActivatablePanel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushActivatablePanel) \
	{ \
		P_GET_OBJECT(UCommonActivatablePanel,Z_Param_ActivatablePanel); \
		P_GET_UBOOL(Z_Param_bIntroPanel); \
		P_GET_UBOOL(Z_Param_bOutroPanelBelow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PushActivatablePanel(Z_Param_ActivatablePanel,Z_Param_bIntroPanel,Z_Param_bOutroPanelBelow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeStartingOperationProcessing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResumeStartingOperationProcessing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalInputHandlerPriorityFilter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InFilterPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGlobalInputHandlerPriorityFilter(Z_Param_InFilterPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartListeningForExistingHeldAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionDataRow); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompleteEvent); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_ProgressEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartListeningForExistingHeldAction(Z_Param_Out_InputActionDataRow,FCommonActionCompleteSingle(Z_Param_Out_CompleteEvent),FCommonActionProgressSingle(Z_Param_Out_ProgressEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForExistingHeldAction) \
	{ \
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionDataRow); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompleteEvent); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_ProgressEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StopListeningForExistingHeldAction(Z_Param_Out_InputActionDataRow,FCommonActionCompleteSingle(Z_Param_Out_CompleteEvent),FCommonActionProgressSingle(Z_Param_Out_ProgressEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendStartingOperationProcessing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuspendStartingOperationProcessing(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputManager(); \
	friend struct Z_Construct_UClass_UCommonInputManager_Statics; \
public: \
	DECLARE_CLASS(UCommonInputManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputManager)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCommonInputManager(); \
	friend struct Z_Construct_UClass_UCommonInputManager_Statics; \
public: \
	DECLARE_CLASS(UCommonInputManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputManager)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonInputManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputManager(UCommonInputManager&&); \
	NO_API UCommonInputManager(const UCommonInputManager&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputManager(UCommonInputManager&&); \
	NO_API UCommonInputManager(const UCommonInputManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonInputManager)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentlyHeldActionInputHandler() { return STRUCT_OFFSET(UCommonInputManager, CurrentlyHeldActionInputHandler); } \
	FORCEINLINE static uint32 __PPO__ActivatablePanelStack() { return STRUCT_OFFSET(UCommonInputManager, ActivatablePanelStack); } \
	FORCEINLINE static uint32 __PPO__GlobalInputHandler() { return STRUCT_OFFSET(UCommonInputManager, GlobalInputHandler); } \
	FORCEINLINE static uint32 __PPO__Operations() { return STRUCT_OFFSET(UCommonInputManager, Operations); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_16_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
