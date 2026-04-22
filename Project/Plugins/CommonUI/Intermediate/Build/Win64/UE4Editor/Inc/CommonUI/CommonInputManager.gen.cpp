// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonInputManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputManager() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonInputManager_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonInputManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionHandlerData();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_GetTopPanel();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatablePanel_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_IsInputSuspended();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_ResumeStartingOperationProcessing();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputManager_SuspendStartingOperationProcessing();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FOperation();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonGlobalInputHandler_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionHandlerInterface_NoRegister();
// End Cross Module References
	void UCommonInputManager::StaticRegisterNativesUCommonInputManager()
	{
		UClass* Class = UCommonInputManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableInputActions", &UCommonInputManager::execGetAvailableInputActions },
			{ "GetGlobalInputHandlerPriorityFilter", &UCommonInputManager::execGetGlobalInputHandlerPriorityFilter },
			{ "GetTopPanel", &UCommonInputManager::execGetTopPanel },
			{ "IsInputSuspended", &UCommonInputManager::execIsInputSuspended },
			{ "IsPanelOnStack", &UCommonInputManager::execIsPanelOnStack },
			{ "PopActivatablePanel", &UCommonInputManager::execPopActivatablePanel },
			{ "PushActivatablePanel", &UCommonInputManager::execPushActivatablePanel },
			{ "ResumeStartingOperationProcessing", &UCommonInputManager::execResumeStartingOperationProcessing },
			{ "SetGlobalInputHandlerPriorityFilter", &UCommonInputManager::execSetGlobalInputHandlerPriorityFilter },
			{ "StartListeningForExistingHeldAction", &UCommonInputManager::execStartListeningForExistingHeldAction },
			{ "StopListeningForExistingHeldAction", &UCommonInputManager::execStopListeningForExistingHeldAction },
			{ "SuspendStartingOperationProcessing", &UCommonInputManager::execSuspendStartingOperationProcessing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics
	{
		struct CommonInputManager_eventGetAvailableInputActions_Parms
		{
			TArray<FCommonInputActionHandlerData> AvailableInputActions;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableInputActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvailableInputActions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputManager_eventGetAvailableInputActions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonInputManager_eventGetAvailableInputActions_Parms), &Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::NewProp_AvailableInputActions = { UE4CodeGen_Private::EPropertyClass::Array, "AvailableInputActions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventGetAvailableInputActions_Parms, AvailableInputActions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::NewProp_AvailableInputActions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AvailableInputActions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCommonInputActionHandlerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::NewProp_AvailableInputActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::NewProp_AvailableInputActions_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "GetAvailableInputActions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CommonInputManager_eventGetAvailableInputActions_Parms), Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics
	{
		struct CommonInputManager_eventGetGlobalInputHandlerPriorityFilter_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventGetGlobalInputHandlerPriorityFilter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "GetGlobalInputHandlerPriorityFilter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonInputManager_eventGetGlobalInputHandlerPriorityFilter_Parms), Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics
	{
		struct CommonInputManager_eventGetTopPanel_Parms
		{
			UCommonActivatablePanel* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventGetTopPanel_Parms, ReturnValue), Z_Construct_UClass_UCommonActivatablePanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "GetTopPanel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonInputManager_eventGetTopPanel_Parms), Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_GetTopPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_GetTopPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics
	{
		struct CommonInputManager_eventIsInputSuspended_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputManager_eventIsInputSuspended_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonInputManager_eventIsInputSuspended_Parms), &Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "IsInputSuspended", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonInputManager_eventIsInputSuspended_Parms), Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_IsInputSuspended()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_IsInputSuspended_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics
	{
		struct CommonInputManager_eventIsPanelOnStack_Parms
		{
			const UCommonActivatablePanel* InPanel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputManager_eventIsPanelOnStack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonInputManager_eventIsPanelOnStack_Parms), &Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::NewProp_InPanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::NewProp_InPanel = { UE4CodeGen_Private::EPropertyClass::Object, "InPanel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080082, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventIsPanelOnStack_Parms, InPanel), Z_Construct_UClass_UCommonActivatablePanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::NewProp_InPanel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::NewProp_InPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::NewProp_InPanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "IsPanelOnStack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonInputManager_eventIsPanelOnStack_Parms), Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics
	{
		struct CommonInputManager_eventPopActivatablePanel_Parms
		{
			UCommonActivatablePanel* ActivatablePanel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatablePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatablePanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::NewProp_ActivatablePanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::NewProp_ActivatablePanel = { UE4CodeGen_Private::EPropertyClass::Object, "ActivatablePanel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventPopActivatablePanel_Parms, ActivatablePanel), Z_Construct_UClass_UCommonActivatablePanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::NewProp_ActivatablePanel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::NewProp_ActivatablePanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::NewProp_ActivatablePanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "PopActivatablePanel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonInputManager_eventPopActivatablePanel_Parms), Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics
	{
		struct CommonInputManager_eventPushActivatablePanel_Parms
		{
			UCommonActivatablePanel* ActivatablePanel;
			bool bIntroPanel;
			bool bOutroPanelBelow;
		};
		static void NewProp_bOutroPanelBelow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutroPanelBelow;
		static void NewProp_bIntroPanel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIntroPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatablePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatablePanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_bOutroPanelBelow_SetBit(void* Obj)
	{
		((CommonInputManager_eventPushActivatablePanel_Parms*)Obj)->bOutroPanelBelow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_bOutroPanelBelow = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutroPanelBelow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonInputManager_eventPushActivatablePanel_Parms), &Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_bOutroPanelBelow_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_bIntroPanel_SetBit(void* Obj)
	{
		((CommonInputManager_eventPushActivatablePanel_Parms*)Obj)->bIntroPanel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_bIntroPanel = { UE4CodeGen_Private::EPropertyClass::Bool, "bIntroPanel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonInputManager_eventPushActivatablePanel_Parms), &Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_bIntroPanel_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_ActivatablePanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_ActivatablePanel = { UE4CodeGen_Private::EPropertyClass::Object, "ActivatablePanel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventPushActivatablePanel_Parms, ActivatablePanel), Z_Construct_UClass_UCommonActivatablePanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_ActivatablePanel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_ActivatablePanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_bOutroPanelBelow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_bIntroPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::NewProp_ActivatablePanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "PushActivatablePanel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonInputManager_eventPushActivatablePanel_Parms), Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_ResumeStartingOperationProcessing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_ResumeStartingOperationProcessing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_ResumeStartingOperationProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "ResumeStartingOperationProcessing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_ResumeStartingOperationProcessing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_ResumeStartingOperationProcessing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_ResumeStartingOperationProcessing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_ResumeStartingOperationProcessing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics
	{
		struct CommonInputManager_eventSetGlobalInputHandlerPriorityFilter_Parms
		{
			int32 InFilterPriority;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InFilterPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::NewProp_InFilterPriority = { UE4CodeGen_Private::EPropertyClass::Int, "InFilterPriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventSetGlobalInputHandlerPriorityFilter_Parms, InFilterPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::NewProp_InFilterPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "SetGlobalInputHandlerPriorityFilter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonInputManager_eventSetGlobalInputHandlerPriorityFilter_Parms), Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics
	{
		struct CommonInputManager_eventStartListeningForExistingHeldAction_Parms
		{
			FDataTableRowHandle InputActionDataRow;
			FScriptDelegate CompleteEvent;
			FScriptDelegate ProgressEvent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ProgressEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompleteEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActionDataRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputActionDataRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputManager_eventStartListeningForExistingHeldAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonInputManager_eventStartListeningForExistingHeldAction_Parms), &Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_ProgressEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_ProgressEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "ProgressEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventStartListeningForExistingHeldAction_Parms, ProgressEvent), Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_ProgressEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_ProgressEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_CompleteEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_CompleteEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "CompleteEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventStartListeningForExistingHeldAction_Parms, CompleteEvent), Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_CompleteEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_CompleteEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow = { UE4CodeGen_Private::EPropertyClass::Struct, "InputActionDataRow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventStartListeningForExistingHeldAction_Parms, InputActionDataRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_ProgressEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_CompleteEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "StartListeningForExistingHeldAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CommonInputManager_eventStartListeningForExistingHeldAction_Parms), Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics
	{
		struct CommonInputManager_eventStopListeningForExistingHeldAction_Parms
		{
			FDataTableRowHandle InputActionDataRow;
			FScriptDelegate CompleteEvent;
			FScriptDelegate ProgressEvent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ProgressEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompleteEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActionDataRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputActionDataRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputManager_eventStopListeningForExistingHeldAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonInputManager_eventStopListeningForExistingHeldAction_Parms), &Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_ProgressEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_ProgressEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "ProgressEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventStopListeningForExistingHeldAction_Parms, ProgressEvent), Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_ProgressEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_ProgressEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_CompleteEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_CompleteEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "CompleteEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventStopListeningForExistingHeldAction_Parms, CompleteEvent), Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_CompleteEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_CompleteEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow = { UE4CodeGen_Private::EPropertyClass::Struct, "InputActionDataRow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonInputManager_eventStopListeningForExistingHeldAction_Parms, InputActionDataRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_ProgressEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_CompleteEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::NewProp_InputActionDataRow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "StopListeningForExistingHeldAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CommonInputManager_eventStopListeningForExistingHeldAction_Parms), Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputManager_SuspendStartingOperationProcessing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputManager_SuspendStartingOperationProcessing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputManager_SuspendStartingOperationProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputManager, "SuspendStartingOperationProcessing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputManager_SuspendStartingOperationProcessing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputManager_SuspendStartingOperationProcessing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputManager_SuspendStartingOperationProcessing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputManager_SuspendStartingOperationProcessing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonInputManager_NoRegister()
	{
		return UCommonInputManager::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Operations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Operations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalInputHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalInputHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatablePanelStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActivatablePanelStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatablePanelStack_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatablePanelStack_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyHeldActionInputHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_CurrentlyHeldActionInputHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonInputManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonInputManager_GetAvailableInputActions, "GetAvailableInputActions" }, // 3460696579
		{ &Z_Construct_UFunction_UCommonInputManager_GetGlobalInputHandlerPriorityFilter, "GetGlobalInputHandlerPriorityFilter" }, // 684913043
		{ &Z_Construct_UFunction_UCommonInputManager_GetTopPanel, "GetTopPanel" }, // 2990365396
		{ &Z_Construct_UFunction_UCommonInputManager_IsInputSuspended, "IsInputSuspended" }, // 2008330044
		{ &Z_Construct_UFunction_UCommonInputManager_IsPanelOnStack, "IsPanelOnStack" }, // 521834103
		{ &Z_Construct_UFunction_UCommonInputManager_PopActivatablePanel, "PopActivatablePanel" }, // 292875597
		{ &Z_Construct_UFunction_UCommonInputManager_PushActivatablePanel, "PushActivatablePanel" }, // 683318370
		{ &Z_Construct_UFunction_UCommonInputManager_ResumeStartingOperationProcessing, "ResumeStartingOperationProcessing" }, // 2225742403
		{ &Z_Construct_UFunction_UCommonInputManager_SetGlobalInputHandlerPriorityFilter, "SetGlobalInputHandlerPriorityFilter" }, // 2945559047
		{ &Z_Construct_UFunction_UCommonInputManager_StartListeningForExistingHeldAction, "StartListeningForExistingHeldAction" }, // 869985784
		{ &Z_Construct_UFunction_UCommonInputManager_StopListeningForExistingHeldAction, "StopListeningForExistingHeldAction" }, // 2222635616
		{ &Z_Construct_UFunction_UCommonInputManager_SuspendStartingOperationProcessing, "SuspendStartingOperationProcessing" }, // 2013409522
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonInputManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputManager_Statics::NewProp_Operations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputManager" },
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputManager_Statics::NewProp_Operations = { UE4CodeGen_Private::EPropertyClass::Array, "Operations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000005, 1, nullptr, STRUCT_OFFSET(UCommonInputManager, Operations), METADATA_PARAMS(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_Operations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_Operations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonInputManager_Statics::NewProp_Operations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Operations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOperation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputManager_Statics::NewProp_GlobalInputHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputManager" },
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonInputManager_Statics::NewProp_GlobalInputHandler = { UE4CodeGen_Private::EPropertyClass::Object, "GlobalInputHandler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UCommonInputManager, GlobalInputHandler), Z_Construct_UClass_UCommonGlobalInputHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_GlobalInputHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_GlobalInputHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack = { UE4CodeGen_Private::EPropertyClass::Array, "ActivatablePanelStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004000800000000d, 1, nullptr, STRUCT_OFFSET(UCommonInputManager, ActivatablePanelStack), METADATA_PARAMS(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActivatablePanelStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UCommonActivatablePanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputManager_Statics::NewProp_CurrentlyHeldActionInputHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputManager" },
		{ "ModuleRelativePath", "Public/CommonInputManager.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UCommonInputManager_Statics::NewProp_CurrentlyHeldActionInputHandler = { UE4CodeGen_Private::EPropertyClass::Interface, "CurrentlyHeldActionInputHandler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000005, 1, nullptr, STRUCT_OFFSET(UCommonInputManager, CurrentlyHeldActionInputHandler), Z_Construct_UClass_UCommonActionHandlerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_CurrentlyHeldActionInputHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputManager_Statics::NewProp_CurrentlyHeldActionInputHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputManager_Statics::NewProp_Operations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputManager_Statics::NewProp_Operations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputManager_Statics::NewProp_GlobalInputHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputManager_Statics::NewProp_ActivatablePanelStack_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputManager_Statics::NewProp_CurrentlyHeldActionInputHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputManager_Statics::ClassParams = {
		&UCommonInputManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonInputManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonInputManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonInputManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonInputManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonInputManager, 1974734537);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonInputManager(Z_Construct_UClass_UCommonInputManager, &UCommonInputManager::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonInputManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
