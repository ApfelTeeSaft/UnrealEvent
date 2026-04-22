// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonTabListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonTabListWidget() {}
// Cross Module References
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTabListWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTabListWidget_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetSwitcher_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetTabCount();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_RegisterTab();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_RemoveAllTabs();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_RemoveTab();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroup_NoRegister();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonRegisteredTabInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics
	{
		struct CommonTabListWidget_eventOnTabButtonCreated_Parms
		{
			FName TabId;
			UCommonButton* TabButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabButton;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::NewProp_TabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::NewProp_TabButton = { UE4CodeGen_Private::EPropertyClass::Object, "TabButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventOnTabButtonCreated_Parms, TabButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::NewProp_TabButton_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::NewProp_TabButton_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::NewProp_TabId = { UE4CodeGen_Private::EPropertyClass::Name, "TabId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventOnTabButtonCreated_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::NewProp_TabButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::NewProp_TabId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "OnTabButtonCreated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(CommonTabListWidget_eventOnTabButtonCreated_Parms), Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics
	{
		struct CommonTabListWidget_eventOnTabButtonRemoved_Parms
		{
			FName TabId;
			UCommonButton* TabButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabButton;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::NewProp_TabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::NewProp_TabButton = { UE4CodeGen_Private::EPropertyClass::Object, "TabButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventOnTabButtonRemoved_Parms, TabButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::NewProp_TabButton_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::NewProp_TabButton_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::NewProp_TabId = { UE4CodeGen_Private::EPropertyClass::Name, "TabId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventOnTabButtonRemoved_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::NewProp_TabButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::NewProp_TabId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "OnTabButtonRemoved__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(CommonTabListWidget_eventOnTabButtonRemoved_Parms), Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics
	{
		struct CommonTabListWidget_eventOnTabSelected_Parms
		{
			FName TabId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::NewProp_TabId = { UE4CodeGen_Private::EPropertyClass::Name, "TabId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventOnTabSelected_Parms, TabId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::NewProp_TabId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "OnTabSelected__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(CommonTabListWidget_eventOnTabSelected_Parms), Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP = FName(TEXT("HandlePostLinkedSwitcherChanged_BP"));
	void UCommonTabListWidget::HandlePostLinkedSwitcherChanged_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP),NULL);
	}
	static FName NAME_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP = FName(TEXT("HandlePreLinkedSwitcherChanged_BP"));
	void UCommonTabListWidget::HandlePreLinkedSwitcherChanged_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP),NULL);
	}
	static FName NAME_UCommonTabListWidget_HandleTabCreated = FName(TEXT("HandleTabCreated"));
	void UCommonTabListWidget::HandleTabCreated(FName TabNameID, UCommonButton* TabButton)
	{
		CommonTabListWidget_eventHandleTabCreated_Parms Parms;
		Parms.TabNameID=TabNameID;
		Parms.TabButton=TabButton;
		ProcessEvent(FindFunctionChecked(NAME_UCommonTabListWidget_HandleTabCreated),&Parms);
	}
	static FName NAME_UCommonTabListWidget_HandleTabRemoved = FName(TEXT("HandleTabRemoved"));
	void UCommonTabListWidget::HandleTabRemoved(FName TabNameID, UCommonButton* TabButton)
	{
		CommonTabListWidget_eventHandleTabRemoved_Parms Parms;
		Parms.TabNameID=TabNameID;
		Parms.TabButton=TabButton;
		ProcessEvent(FindFunctionChecked(NAME_UCommonTabListWidget_HandleTabRemoved),&Parms);
	}
	void UCommonTabListWidget::StaticRegisterNativesUCommonTabListWidget()
	{
		UClass* Class = UCommonTabListWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableTabWithReason", &UCommonTabListWidget::execDisableTabWithReason },
			{ "GetActiveTab", &UCommonTabListWidget::execGetActiveTab },
			{ "GetLinkedSwitcher", &UCommonTabListWidget::execGetLinkedSwitcher },
			{ "GetSelectedTabId", &UCommonTabListWidget::execGetSelectedTabId },
			{ "GetTabButtonByID", &UCommonTabListWidget::execGetTabButtonByID },
			{ "GetTabCount", &UCommonTabListWidget::execGetTabCount },
			{ "GetTabIdAtIndex", &UCommonTabListWidget::execGetTabIdAtIndex },
			{ "HandleNextTabInputAction", &UCommonTabListWidget::execHandleNextTabInputAction },
			{ "HandlePreviousTabInputAction", &UCommonTabListWidget::execHandlePreviousTabInputAction },
			{ "HandleTabButtonSelected", &UCommonTabListWidget::execHandleTabButtonSelected },
			{ "HandleTabCreated", &UCommonTabListWidget::execHandleTabCreated },
			{ "HandleTabRemoved", &UCommonTabListWidget::execHandleTabRemoved },
			{ "RegisterTab", &UCommonTabListWidget::execRegisterTab },
			{ "RemoveAllTabs", &UCommonTabListWidget::execRemoveAllTabs },
			{ "RemoveTab", &UCommonTabListWidget::execRemoveTab },
			{ "SelectTabByID", &UCommonTabListWidget::execSelectTabByID },
			{ "SetLinkedSwitcher", &UCommonTabListWidget::execSetLinkedSwitcher },
			{ "SetListeningForInput", &UCommonTabListWidget::execSetListeningForInput },
			{ "SetTabEnabled", &UCommonTabListWidget::execSetTabEnabled },
			{ "SetTabInteractionEnabled", &UCommonTabListWidget::execSetTabInteractionEnabled },
			{ "SetTabVisibility", &UCommonTabListWidget::execSetTabVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics
	{
		struct CommonTabListWidget_eventDisableTabWithReason_Parms
		{
			FName TabNameID;
			FText Reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::NewProp_Reason = { UE4CodeGen_Private::EPropertyClass::Text, "Reason", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventDisableTabWithReason_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::NewProp_Reason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventDisableTabWithReason_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "DisableTabWithReason", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CommonTabListWidget_eventDisableTabWithReason_Parms), Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics
	{
		struct CommonTabListWidget_eventGetActiveTab_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventGetActiveTab_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "GetActiveTab", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonTabListWidget_eventGetActiveTab_Parms), Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics
	{
		struct CommonTabListWidget_eventGetLinkedSwitcher_Parms
		{
			UCommonWidgetSwitcher* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventGetLinkedSwitcher_Parms, ReturnValue), Z_Construct_UClass_UCommonWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "GetLinkedSwitcher", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonTabListWidget_eventGetLinkedSwitcher_Parms), Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics
	{
		struct CommonTabListWidget_eventGetSelectedTabId_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventGetSelectedTabId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "GetSelectedTabId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonTabListWidget_eventGetSelectedTabId_Parms), Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics
	{
		struct CommonTabListWidget_eventGetTabButtonByID_Parms
		{
			FName TabNameID;
			UCommonButton* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventGetTabButtonByID_Parms, ReturnValue), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventGetTabButtonByID_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "GetTabButtonByID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CommonTabListWidget_eventGetTabButtonByID_Parms), Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics
	{
		struct CommonTabListWidget_eventGetTabCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventGetTabCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "GetTabCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonTabListWidget_eventGetTabCount_Parms), Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetTabCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_GetTabCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics
	{
		struct CommonTabListWidget_eventGetTabIdAtIndex_Parms
		{
			int32 Index;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventGetTabIdAtIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventGetTabIdAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "GetTabIdAtIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonTabListWidget_eventGetTabIdAtIndex_Parms), Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics
	{
		struct CommonTabListWidget_eventHandleNextTabInputAction_Parms
		{
			bool bPassThrough;
		};
		static void NewProp_bPassThrough_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPassThrough;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::NewProp_bPassThrough_SetBit(void* Obj)
	{
		((CommonTabListWidget_eventHandleNextTabInputAction_Parms*)Obj)->bPassThrough = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::NewProp_bPassThrough = { UE4CodeGen_Private::EPropertyClass::Bool, "bPassThrough", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTabListWidget_eventHandleNextTabInputAction_Parms), &Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::NewProp_bPassThrough_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::NewProp_bPassThrough,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "HandleNextTabInputAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04440401, sizeof(CommonTabListWidget_eventHandleNextTabInputAction_Parms), Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "HandlePostLinkedSwitcherChanged_BP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "HandlePreLinkedSwitcherChanged_BP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics
	{
		struct CommonTabListWidget_eventHandlePreviousTabInputAction_Parms
		{
			bool bPassThrough;
		};
		static void NewProp_bPassThrough_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPassThrough;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::NewProp_bPassThrough_SetBit(void* Obj)
	{
		((CommonTabListWidget_eventHandlePreviousTabInputAction_Parms*)Obj)->bPassThrough = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::NewProp_bPassThrough = { UE4CodeGen_Private::EPropertyClass::Bool, "bPassThrough", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTabListWidget_eventHandlePreviousTabInputAction_Parms), &Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::NewProp_bPassThrough_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::NewProp_bPassThrough,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "HandlePreviousTabInputAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04440401, sizeof(CommonTabListWidget_eventHandlePreviousTabInputAction_Parms), Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics
	{
		struct CommonTabListWidget_eventHandleTabButtonSelected_Parms
		{
			UCommonButton* SelectedTabButton;
			int32 ButtonIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ButtonIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTabButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedTabButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::NewProp_ButtonIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ButtonIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventHandleTabButtonSelected_Parms, ButtonIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton = { UE4CodeGen_Private::EPropertyClass::Object, "SelectedTabButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventHandleTabButtonSelected_Parms, SelectedTabButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::NewProp_ButtonIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::NewProp_SelectedTabButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "HandleTabButtonSelected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(CommonTabListWidget_eventHandleTabButtonSelected_Parms), Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabButton;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::NewProp_TabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::NewProp_TabButton = { UE4CodeGen_Private::EPropertyClass::Object, "TabButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventHandleTabCreated_Parms, TabButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::NewProp_TabButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::NewProp_TabButton_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventHandleTabCreated_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::NewProp_TabButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "HandleTabCreated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080C00, sizeof(CommonTabListWidget_eventHandleTabCreated_Parms), Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabButton;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::NewProp_TabButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::NewProp_TabButton = { UE4CodeGen_Private::EPropertyClass::Object, "TabButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventHandleTabRemoved_Parms, TabButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::NewProp_TabButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::NewProp_TabButton_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventHandleTabRemoved_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::NewProp_TabButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "HandleTabRemoved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080C00, sizeof(CommonTabListWidget_eventHandleTabRemoved_Parms), Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics
	{
		struct CommonTabListWidget_eventRegisterTab_Parms
		{
			FName TabNameID;
			TSubclassOf<UCommonButton>  ButtonWidgetType;
			UWidget* ContentWidget;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContentWidget;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ButtonWidgetType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonTabListWidget_eventRegisterTab_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTabListWidget_eventRegisterTab_Parms), &Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ContentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ContentWidget = { UE4CodeGen_Private::EPropertyClass::Object, "ContentWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventRegisterTab_Parms, ContentWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ContentWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ContentWidget_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ButtonWidgetType = { UE4CodeGen_Private::EPropertyClass::Class, "ButtonWidgetType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventRegisterTab_Parms, ButtonWidgetType), Z_Construct_UClass_UCommonButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventRegisterTab_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ContentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_ButtonWidgetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "RegisterTab", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTabListWidget_eventRegisterTab_Parms), Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_RegisterTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_RegisterTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_RemoveAllTabs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_RemoveAllTabs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_RemoveAllTabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "RemoveAllTabs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_RemoveAllTabs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_RemoveAllTabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_RemoveAllTabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_RemoveAllTabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics
	{
		struct CommonTabListWidget_eventRemoveTab_Parms
		{
			FName TabNameID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonTabListWidget_eventRemoveTab_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTabListWidget_eventRemoveTab_Parms), &Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventRemoveTab_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "RemoveTab", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTabListWidget_eventRemoveTab_Parms), Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_RemoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_RemoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics
	{
		struct CommonTabListWidget_eventSelectTabByID_Parms
		{
			FName TabNameID;
			bool bSuppressClickFeedback;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSuppressClickFeedback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressClickFeedback;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonTabListWidget_eventSelectTabByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTabListWidget_eventSelectTabByID_Parms), &Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_bSuppressClickFeedback_SetBit(void* Obj)
	{
		((CommonTabListWidget_eventSelectTabByID_Parms*)Obj)->bSuppressClickFeedback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_bSuppressClickFeedback = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuppressClickFeedback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTabListWidget_eventSelectTabByID_Parms), &Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_bSuppressClickFeedback_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventSelectTabByID_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_bSuppressClickFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "SelectTabByID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTabListWidget_eventSelectTabByID_Parms), Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics
	{
		struct CommonTabListWidget_eventSetLinkedSwitcher_Parms
		{
			UCommonWidgetSwitcher* CommonSwitcher;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommonSwitcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher = { UE4CodeGen_Private::EPropertyClass::Object, "CommonSwitcher", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventSetLinkedSwitcher_Parms, CommonSwitcher), Z_Construct_UClass_UCommonWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::NewProp_CommonSwitcher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "SetLinkedSwitcher", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTabListWidget_eventSetLinkedSwitcher_Parms), Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics
	{
		struct CommonTabListWidget_eventSetListeningForInput_Parms
		{
			bool bShouldListen;
		};
		static void NewProp_bShouldListen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldListen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::NewProp_bShouldListen_SetBit(void* Obj)
	{
		((CommonTabListWidget_eventSetListeningForInput_Parms*)Obj)->bShouldListen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::NewProp_bShouldListen = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldListen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTabListWidget_eventSetListeningForInput_Parms), &Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::NewProp_bShouldListen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::NewProp_bShouldListen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "SetListeningForInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTabListWidget_eventSetListeningForInput_Parms), Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics
	{
		struct CommonTabListWidget_eventSetTabEnabled_Parms
		{
			FName TabNameID;
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((CommonTabListWidget_eventSetTabEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTabListWidget_eventSetTabEnabled_Parms), &Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventSetTabEnabled_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "SetTabEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTabListWidget_eventSetTabEnabled_Parms), Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics
	{
		struct CommonTabListWidget_eventSetTabInteractionEnabled_Parms
		{
			FName TabNameID;
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((CommonTabListWidget_eventSetTabInteractionEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTabListWidget_eventSetTabInteractionEnabled_Parms), &Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventSetTabInteractionEnabled_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "SetTabInteractionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTabListWidget_eventSetTabInteractionEnabled_Parms), Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics
	{
		struct CommonTabListWidget_eventSetTabVisibility_Parms
		{
			FName TabNameID;
			ESlateVisibility NewVisibility;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewVisibility_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabNameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::NewProp_NewVisibility = { UE4CodeGen_Private::EPropertyClass::Enum, "NewVisibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventSetTabVisibility_Parms, NewVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::NewProp_NewVisibility_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::NewProp_TabNameID = { UE4CodeGen_Private::EPropertyClass::Name, "TabNameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTabListWidget_eventSetTabVisibility_Parms, TabNameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::NewProp_NewVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::NewProp_NewVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::NewProp_TabNameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTabListWidget, "SetTabVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTabListWidget_eventSetTabVisibility_Parms), Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonTabListWidget_NoRegister()
	{
		return UCommonTabListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTabListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabButtonGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabButtonGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredTabsByID_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RegisteredTabsByID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RegisteredTabsByID_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredTabsByID_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LinkedSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoListenForInput_MetaData[];
#endif
		static void NewProp_bAutoListenForInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoListenForInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousTabInputActionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousTabInputActionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextTabInputActionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextTabInputActionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTabButtonRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTabButtonRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTabButtonCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTabButtonCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTabSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTabSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTabListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonTabListWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonTabListWidget_DisableTabWithReason, "DisableTabWithReason" }, // 3068153368
		{ &Z_Construct_UFunction_UCommonTabListWidget_GetActiveTab, "GetActiveTab" }, // 3578791026
		{ &Z_Construct_UFunction_UCommonTabListWidget_GetLinkedSwitcher, "GetLinkedSwitcher" }, // 1437944593
		{ &Z_Construct_UFunction_UCommonTabListWidget_GetSelectedTabId, "GetSelectedTabId" }, // 980527384
		{ &Z_Construct_UFunction_UCommonTabListWidget_GetTabButtonByID, "GetTabButtonByID" }, // 599362344
		{ &Z_Construct_UFunction_UCommonTabListWidget_GetTabCount, "GetTabCount" }, // 195254855
		{ &Z_Construct_UFunction_UCommonTabListWidget_GetTabIdAtIndex, "GetTabIdAtIndex" }, // 238134667
		{ &Z_Construct_UFunction_UCommonTabListWidget_HandleNextTabInputAction, "HandleNextTabInputAction" }, // 3136039524
		{ &Z_Construct_UFunction_UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP, "HandlePostLinkedSwitcherChanged_BP" }, // 856548134
		{ &Z_Construct_UFunction_UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP, "HandlePreLinkedSwitcherChanged_BP" }, // 3801030149
		{ &Z_Construct_UFunction_UCommonTabListWidget_HandlePreviousTabInputAction, "HandlePreviousTabInputAction" }, // 2041320382
		{ &Z_Construct_UFunction_UCommonTabListWidget_HandleTabButtonSelected, "HandleTabButtonSelected" }, // 255780270
		{ &Z_Construct_UFunction_UCommonTabListWidget_HandleTabCreated, "HandleTabCreated" }, // 3911175453
		{ &Z_Construct_UFunction_UCommonTabListWidget_HandleTabRemoved, "HandleTabRemoved" }, // 3231954108
		{ &Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature, "OnTabButtonCreated__DelegateSignature" }, // 3498156165
		{ &Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature, "OnTabButtonRemoved__DelegateSignature" }, // 709181388
		{ &Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature, "OnTabSelected__DelegateSignature" }, // 1928631421
		{ &Z_Construct_UFunction_UCommonTabListWidget_RegisterTab, "RegisterTab" }, // 3240096608
		{ &Z_Construct_UFunction_UCommonTabListWidget_RemoveAllTabs, "RemoveAllTabs" }, // 2814751346
		{ &Z_Construct_UFunction_UCommonTabListWidget_RemoveTab, "RemoveTab" }, // 1567433704
		{ &Z_Construct_UFunction_UCommonTabListWidget_SelectTabByID, "SelectTabByID" }, // 2058060995
		{ &Z_Construct_UFunction_UCommonTabListWidget_SetLinkedSwitcher, "SetLinkedSwitcher" }, // 344832237
		{ &Z_Construct_UFunction_UCommonTabListWidget_SetListeningForInput, "SetListeningForInput" }, // 506200558
		{ &Z_Construct_UFunction_UCommonTabListWidget_SetTabEnabled, "SetTabEnabled" }, // 2195130761
		{ &Z_Construct_UFunction_UCommonTabListWidget_SetTabInteractionEnabled, "SetTabInteractionEnabled" }, // 3997926252
		{ &Z_Construct_UFunction_UCommonTabListWidget_SetTabVisibility, "SetTabVisibility" }, // 3852500435
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonTabListWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_TabButtonGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTabListWidget" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_TabButtonGroup = { UE4CodeGen_Private::EPropertyClass::Object, "TabButtonGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, STRUCT_OFFSET(UCommonTabListWidget, TabButtonGroup), Z_Construct_UClass_UCommonButtonGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_TabButtonGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_TabButtonGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_RegisteredTabsByID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTabListWidget" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_RegisteredTabsByID = { UE4CodeGen_Private::EPropertyClass::Map, "RegisteredTabsByID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000002005, 1, nullptr, STRUCT_OFFSET(UCommonTabListWidget, RegisteredTabsByID), METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_RegisteredTabsByID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_RegisteredTabsByID_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_RegisteredTabsByID_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "RegisteredTabsByID_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_RegisteredTabsByID_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "RegisteredTabsByID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FCommonRegisteredTabInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_LinkedSwitcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTabListWidget" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_LinkedSwitcher = { UE4CodeGen_Private::EPropertyClass::WeakObject, "LinkedSwitcher", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004400000008200d, 1, nullptr, STRUCT_OFFSET(UCommonTabListWidget, LinkedSwitcher), Z_Construct_UClass_UCommonWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_LinkedSwitcher_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_LinkedSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_bAutoListenForInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTabListWidget" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_bAutoListenForInput_SetBit(void* Obj)
	{
		((UCommonTabListWidget*)Obj)->bAutoListenForInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_bAutoListenForInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoListenForInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonTabListWidget), &Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_bAutoListenForInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_bAutoListenForInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_bAutoListenForInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_PreviousTabInputActionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTabListWidget" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_PreviousTabInputActionData = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousTabInputActionData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCommonTabListWidget, PreviousTabInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_PreviousTabInputActionData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_PreviousTabInputActionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_NextTabInputActionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTabListWidget" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_NextTabInputActionData = { UE4CodeGen_Private::EPropertyClass::Struct, "NextTabInputActionData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCommonTabListWidget, NextTabInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_NextTabInputActionData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_NextTabInputActionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTabListWidget" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonRemoved = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTabButtonRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonTabListWidget, OnTabButtonRemoved), Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonCreated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTabListWidget" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonCreated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTabButtonCreated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonTabListWidget, OnTabButtonCreated), Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabButtonCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonCreated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTabListWidget" },
		{ "ModuleRelativePath", "Public/CommonTabListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabSelected = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTabSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonTabListWidget, OnTabSelected), Z_Construct_UDelegateFunction_UCommonTabListWidget_OnTabSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonTabListWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_TabButtonGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_RegisteredTabsByID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_RegisteredTabsByID_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_RegisteredTabsByID_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_LinkedSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_bAutoListenForInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_PreviousTabInputActionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_NextTabInputActionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabButtonCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTabListWidget_Statics::NewProp_OnTabSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTabListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTabListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonTabListWidget_Statics::ClassParams = {
		&UCommonTabListWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonTabListWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonTabListWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonTabListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTabListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonTabListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonTabListWidget, 3329594526);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonTabListWidget(Z_Construct_UClass_UCommonTabListWidget, &UCommonTabListWidget::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonTabListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTabListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
