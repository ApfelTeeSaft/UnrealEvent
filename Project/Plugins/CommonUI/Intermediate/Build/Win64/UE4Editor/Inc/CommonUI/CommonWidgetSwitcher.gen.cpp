// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonWidgetSwitcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonWidgetSwitcher() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetSwitcher_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetSwitcher();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateWidget();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_DeactivateWidget();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatablePanel_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ETransitionCurve();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetDeactivated__DelegateSignature();
// End Cross Module References
	void UCommonWidgetSwitcher::StaticRegisterNativesUCommonWidgetSwitcher()
	{
		UClass* Class = UCommonWidgetSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateNextWidget", &UCommonWidgetSwitcher::execActivateNextWidget },
			{ "ActivatePreviousWidget", &UCommonWidgetSwitcher::execActivatePreviousWidget },
			{ "ActivateWidget", &UCommonWidgetSwitcher::execActivateWidget },
			{ "DeactivateWidget", &UCommonWidgetSwitcher::execDeactivateWidget },
			{ "HandleActiveWidgetDeactivated", &UCommonWidgetSwitcher::execHandleActiveWidgetDeactivated },
			{ "HasWidgets", &UCommonWidgetSwitcher::execHasWidgets },
			{ "SetActiveWidget_Advanced", &UCommonWidgetSwitcher::execSetActiveWidget_Advanced },
			{ "SetActiveWidgetIndex_Advanced", &UCommonWidgetSwitcher::execSetActiveWidgetIndex_Advanced },
			{ "SetDisableTransitionAnimation", &UCommonWidgetSwitcher::execSetDisableTransitionAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics
	{
		struct CommonWidgetSwitcher_eventActivateNextWidget_Parms
		{
			bool bCanWrap;
		};
		static void NewProp_bCanWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanWrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::NewProp_bCanWrap_SetBit(void* Obj)
	{
		((CommonWidgetSwitcher_eventActivateNextWidget_Parms*)Obj)->bCanWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::NewProp_bCanWrap = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanWrap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonWidgetSwitcher_eventActivateNextWidget_Parms), &Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::NewProp_bCanWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::NewProp_bCanWrap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetSwitcher, "ActivateNextWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetSwitcher_eventActivateNextWidget_Parms), Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics
	{
		struct CommonWidgetSwitcher_eventActivatePreviousWidget_Parms
		{
			bool bCanWrap;
		};
		static void NewProp_bCanWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanWrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::NewProp_bCanWrap_SetBit(void* Obj)
	{
		((CommonWidgetSwitcher_eventActivatePreviousWidget_Parms*)Obj)->bCanWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::NewProp_bCanWrap = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanWrap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonWidgetSwitcher_eventActivatePreviousWidget_Parms), &Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::NewProp_bCanWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::NewProp_bCanWrap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetSwitcher, "ActivatePreviousWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetSwitcher_eventActivatePreviousWidget_Parms), Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetSwitcher, "ActivateWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetSwitcher_DeactivateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_DeactivateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetSwitcher_DeactivateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetSwitcher, "DeactivateWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_DeactivateWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_DeactivateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_DeactivateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetSwitcher_DeactivateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics
	{
		struct CommonWidgetSwitcher_eventHandleActiveWidgetDeactivated_Parms
		{
			UCommonActivatablePanel* DeactivatedPanel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivatedPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeactivatedPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::NewProp_DeactivatedPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::NewProp_DeactivatedPanel = { UE4CodeGen_Private::EPropertyClass::Object, "DeactivatedPanel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonWidgetSwitcher_eventHandleActiveWidgetDeactivated_Parms, DeactivatedPanel), Z_Construct_UClass_UCommonActivatablePanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::NewProp_DeactivatedPanel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::NewProp_DeactivatedPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::NewProp_DeactivatedPanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetSwitcher, "HandleActiveWidgetDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(CommonWidgetSwitcher_eventHandleActiveWidgetDeactivated_Parms), Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics
	{
		struct CommonWidgetSwitcher_eventHasWidgets_Parms
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
	void Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonWidgetSwitcher_eventHasWidgets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonWidgetSwitcher_eventHasWidgets_Parms), &Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetSwitcher, "HasWidgets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonWidgetSwitcher_eventHasWidgets_Parms), Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics
	{
		struct CommonWidgetSwitcher_eventSetActiveWidget_Advanced_Parms
		{
			UWidget* Widget;
			bool AttemptActivationChange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttemptActivationChange_MetaData[];
#endif
		static void NewProp_AttemptActivationChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttemptActivationChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_AttemptActivationChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_AttemptActivationChange_SetBit(void* Obj)
	{
		((CommonWidgetSwitcher_eventSetActiveWidget_Advanced_Parms*)Obj)->AttemptActivationChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_AttemptActivationChange = { UE4CodeGen_Private::EPropertyClass::Bool, "AttemptActivationChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonWidgetSwitcher_eventSetActiveWidget_Advanced_Parms), &Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_AttemptActivationChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_AttemptActivationChange_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_AttemptActivationChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonWidgetSwitcher_eventSetActiveWidget_Advanced_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_AttemptActivationChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetSwitcher, "SetActiveWidget_Advanced", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetSwitcher_eventSetActiveWidget_Advanced_Parms), Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics
	{
		struct CommonWidgetSwitcher_eventSetActiveWidgetIndex_Advanced_Parms
		{
			int32 Index;
			bool AttemptActivationChange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttemptActivationChange_MetaData[];
#endif
		static void NewProp_AttemptActivationChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttemptActivationChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_AttemptActivationChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_AttemptActivationChange_SetBit(void* Obj)
	{
		((CommonWidgetSwitcher_eventSetActiveWidgetIndex_Advanced_Parms*)Obj)->AttemptActivationChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_AttemptActivationChange = { UE4CodeGen_Private::EPropertyClass::Bool, "AttemptActivationChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonWidgetSwitcher_eventSetActiveWidgetIndex_Advanced_Parms), &Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_AttemptActivationChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_AttemptActivationChange_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_AttemptActivationChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CommonWidgetSwitcher_eventSetActiveWidgetIndex_Advanced_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_Index_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_AttemptActivationChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetSwitcher, "SetActiveWidgetIndex_Advanced", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetSwitcher_eventSetActiveWidgetIndex_Advanced_Parms), Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics
	{
		struct CommonWidgetSwitcher_eventSetDisableTransitionAnimation_Parms
		{
			bool bDisableAnimation;
		};
		static void NewProp_bDisableAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::NewProp_bDisableAnimation_SetBit(void* Obj)
	{
		((CommonWidgetSwitcher_eventSetDisableTransitionAnimation_Parms*)Obj)->bDisableAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::NewProp_bDisableAnimation = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonWidgetSwitcher_eventSetDisableTransitionAnimation_Parms), &Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::NewProp_bDisableAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::NewProp_bDisableAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetSwitcher, "SetDisableTransitionAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetSwitcher_eventSetDisableTransitionAnimation_Parms), Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonWidgetSwitcher_NoRegister()
	{
		return UCommonWidgetSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_UCommonWidgetSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutroPanelBelow_MetaData[];
#endif
		static void NewProp_bOutroPanelBelow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutroPanelBelow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWidgetActivationEnabled_MetaData[];
#endif
		static void NewProp_bWidgetActivationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWidgetActivationEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionCurveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransitionCurveType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransitionCurveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransitionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransitionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActiveWidgetChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveWidgetChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActiveWidgetDeactivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveWidgetDeactivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonWidgetSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetSwitcher,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonWidgetSwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateNextWidget, "ActivateNextWidget" }, // 3311128960
		{ &Z_Construct_UFunction_UCommonWidgetSwitcher_ActivatePreviousWidget, "ActivatePreviousWidget" }, // 1303898681
		{ &Z_Construct_UFunction_UCommonWidgetSwitcher_ActivateWidget, "ActivateWidget" }, // 2101287184
		{ &Z_Construct_UFunction_UCommonWidgetSwitcher_DeactivateWidget, "DeactivateWidget" }, // 3623563007
		{ &Z_Construct_UFunction_UCommonWidgetSwitcher_HandleActiveWidgetDeactivated, "HandleActiveWidgetDeactivated" }, // 89668037
		{ &Z_Construct_UFunction_UCommonWidgetSwitcher_HasWidgets, "HasWidgets" }, // 722654649
		{ &Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidget_Advanced, "SetActiveWidget_Advanced" }, // 2464152612
		{ &Z_Construct_UFunction_UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced, "SetActiveWidgetIndex_Advanced" }, // 2527153116
		{ &Z_Construct_UFunction_UCommonWidgetSwitcher_SetDisableTransitionAnimation, "SetDisableTransitionAnimation" }, // 1959685672
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetSwitcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonWidgetSwitcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bOutroPanelBelow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetSwitcher" },
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	void Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bOutroPanelBelow_SetBit(void* Obj)
	{
		((UCommonWidgetSwitcher*)Obj)->bOutroPanelBelow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bOutroPanelBelow = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutroPanelBelow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonWidgetSwitcher), &Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bOutroPanelBelow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bOutroPanelBelow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bOutroPanelBelow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bWidgetActivationEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetSwitcher" },
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	void Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bWidgetActivationEnabled_SetBit(void* Obj)
	{
		((UCommonWidgetSwitcher*)Obj)->bWidgetActivationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bWidgetActivationEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bWidgetActivationEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonWidgetSwitcher), &Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bWidgetActivationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bWidgetActivationEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bWidgetActivationEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetSwitcher" },
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionDuration = { UE4CodeGen_Private::EPropertyClass::Float, "TransitionDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetSwitcher, TransitionDuration), METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionCurveType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetSwitcher" },
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionCurveType = { UE4CodeGen_Private::EPropertyClass::Enum, "TransitionCurveType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetSwitcher, TransitionCurveType), Z_Construct_UEnum_CommonUI_ETransitionCurve, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionCurveType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionCurveType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionCurveType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetSwitcher" },
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionType = { UE4CodeGen_Private::EPropertyClass::Enum, "TransitionType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetSwitcher, TransitionType), Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetSwitcher" },
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnActiveWidgetChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetSwitcher, OnActiveWidgetChanged), Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetDeactivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetSwitcher" },
		{ "ModuleRelativePath", "Public/CommonWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetDeactivated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnActiveWidgetDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetSwitcher, OnActiveWidgetDeactivated), Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetDeactivated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetDeactivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetDeactivated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonWidgetSwitcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bOutroPanelBelow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_bWidgetActivationEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionCurveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionCurveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_TransitionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetSwitcher_Statics::NewProp_OnActiveWidgetDeactivated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonWidgetSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonWidgetSwitcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonWidgetSwitcher_Statics::ClassParams = {
		&UCommonWidgetSwitcher::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonWidgetSwitcher_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetSwitcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonWidgetSwitcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonWidgetSwitcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonWidgetSwitcher, 2657751457);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonWidgetSwitcher(Z_Construct_UClass_UCommonWidgetSwitcher, &UCommonWidgetSwitcher::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonWidgetSwitcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonWidgetSwitcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
