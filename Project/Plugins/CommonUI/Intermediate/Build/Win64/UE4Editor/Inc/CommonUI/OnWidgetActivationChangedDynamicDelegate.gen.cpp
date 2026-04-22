// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/OnWidgetActivationChangedDynamicDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnWidgetActivationChangedDynamicDelegate() {}
// Cross Module References
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatablePanel_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventOnWidgetActivationChangedDynamic_Parms
		{
			UCommonActivatablePanel* Panel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::NewProp_Panel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::NewProp_Panel = { UE4CodeGen_Private::EPropertyClass::Object, "Panel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventOnWidgetActivationChangedDynamic_Parms, Panel), Z_Construct_UClass_UCommonActivatablePanel_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::NewProp_Panel_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::NewProp_Panel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::NewProp_Panel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnWidgetActivationChangedDynamicDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, "OnWidgetActivationChangedDynamic__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04130000, sizeof(_Script_CommonUI_eventOnWidgetActivationChangedDynamic_Parms), Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChangedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
