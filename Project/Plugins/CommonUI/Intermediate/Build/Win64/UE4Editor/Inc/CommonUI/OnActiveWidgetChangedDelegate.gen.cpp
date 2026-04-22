// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/OnActiveWidgetChangedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnActiveWidgetChangedDelegate() {}
// Cross Module References
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventOnActiveWidgetChanged_Parms
		{
			UWidget* ActiveWidget;
			int32 ActiveWidgetIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveWidgetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_ActiveWidgetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ActiveWidgetIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventOnActiveWidgetChanged_Parms, ActiveWidgetIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_ActiveWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_ActiveWidget = { UE4CodeGen_Private::EPropertyClass::Object, "ActiveWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventOnActiveWidgetChanged_Parms, ActiveWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_ActiveWidget_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_ActiveWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_ActiveWidgetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_ActiveWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnActiveWidgetChangedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, "OnActiveWidgetChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04130000, sizeof(_Script_CommonUI_eventOnActiveWidgetChanged_Parms), Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_OnActiveWidgetChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
