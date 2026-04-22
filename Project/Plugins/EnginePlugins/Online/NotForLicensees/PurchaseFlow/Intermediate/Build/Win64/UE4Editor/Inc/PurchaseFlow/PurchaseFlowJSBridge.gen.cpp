// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PurchaseFlow/Public/PurchaseFlowJSBridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurchaseFlowJSBridge() {}
// Cross Module References
	PURCHASEFLOW_API UClass* Z_Construct_UClass_UPurchaseFlowJSBridge_NoRegister();
	PURCHASEFLOW_API UClass* Z_Construct_UClass_UPurchaseFlowJSBridge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PurchaseFlow();
	PURCHASEFLOW_API UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID();
	PURCHASEFLOW_API UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName();
	PURCHASEFLOW_API UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath();
	PURCHASEFLOW_API UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl();
	PURCHASEFLOW_API UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl();
	PURCHASEFLOW_API UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT();
	PURCHASEFLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam();
	PURCHASEFLOW_API UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose();
// End Cross Module References
	void UPurchaseFlowJSBridge::StaticRegisterNativesUPurchaseFlowJSBridge()
	{
		UClass* Class = UPurchaseFlowJSBridge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultExternalBrowserID", &UPurchaseFlowJSBridge::execGetDefaultExternalBrowserID },
			{ "GetExternalBrowserName", &UPurchaseFlowJSBridge::execGetExternalBrowserName },
			{ "GetExternalBrowserPath", &UPurchaseFlowJSBridge::execGetExternalBrowserPath },
			{ "LaunchExternalBrowserUrl", &UPurchaseFlowJSBridge::execLaunchExternalBrowserUrl },
			{ "LaunchValidatedExternalBrowserUrl", &UPurchaseFlowJSBridge::execLaunchValidatedExternalBrowserUrl },
			{ "RECEIPT", &UPurchaseFlowJSBridge::execRECEIPT },
			{ "RequestClose", &UPurchaseFlowJSBridge::execRequestClose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics
	{
		struct PurchaseFlowJSBridge_eventGetDefaultExternalBrowserID_Parms
		{
			FString URL;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventGetDefaultExternalBrowserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventGetDefaultExternalBrowserID_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::NewProp_URL_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurchaseFlowJSBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseFlowJSBridge, "GetDefaultExternalBrowserID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PurchaseFlowJSBridge_eventGetDefaultExternalBrowserID_Parms), Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics
	{
		struct PurchaseFlowJSBridge_eventGetExternalBrowserName_Parms
		{
			FString BrowserId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrowserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BrowserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventGetExternalBrowserName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::NewProp_BrowserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::NewProp_BrowserId = { UE4CodeGen_Private::EPropertyClass::Str, "BrowserId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventGetExternalBrowserName_Parms, BrowserId), METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::NewProp_BrowserId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::NewProp_BrowserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::NewProp_BrowserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurchaseFlowJSBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseFlowJSBridge, "GetExternalBrowserName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PurchaseFlowJSBridge_eventGetExternalBrowserName_Parms), Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics
	{
		struct PurchaseFlowJSBridge_eventGetExternalBrowserPath_Parms
		{
			FString BrowserId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrowserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BrowserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventGetExternalBrowserPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::NewProp_BrowserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::NewProp_BrowserId = { UE4CodeGen_Private::EPropertyClass::Str, "BrowserId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventGetExternalBrowserPath_Parms, BrowserId), METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::NewProp_BrowserId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::NewProp_BrowserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::NewProp_BrowserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurchaseFlowJSBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseFlowJSBridge, "GetExternalBrowserPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PurchaseFlowJSBridge_eventGetExternalBrowserPath_Parms), Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics
	{
		struct PurchaseFlowJSBridge_eventLaunchExternalBrowserUrl_Parms
		{
			FString URL;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PurchaseFlowJSBridge_eventLaunchExternalBrowserUrl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PurchaseFlowJSBridge_eventLaunchExternalBrowserUrl_Parms), &Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventLaunchExternalBrowserUrl_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::NewProp_URL_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurchaseFlowJSBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseFlowJSBridge, "LaunchExternalBrowserUrl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PurchaseFlowJSBridge_eventLaunchExternalBrowserUrl_Parms), Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics
	{
		struct PurchaseFlowJSBridge_eventLaunchValidatedExternalBrowserUrl_Parms
		{
			FString AllowedBrowserID;
			FString URL;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBrowserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllowedBrowserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PurchaseFlowJSBridge_eventLaunchValidatedExternalBrowserUrl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PurchaseFlowJSBridge_eventLaunchValidatedExternalBrowserUrl_Parms), &Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventLaunchValidatedExternalBrowserUrl_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_URL_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_AllowedBrowserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_AllowedBrowserID = { UE4CodeGen_Private::EPropertyClass::Str, "AllowedBrowserID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventLaunchValidatedExternalBrowserUrl_Parms, AllowedBrowserID), METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_AllowedBrowserID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_AllowedBrowserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::NewProp_AllowedBrowserID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurchaseFlowJSBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseFlowJSBridge, "LaunchValidatedExternalBrowserUrl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PurchaseFlowJSBridge_eventLaunchValidatedExternalBrowserUrl_Parms), Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics
	{
		struct PurchaseFlowJSBridge_eventRECEIPT_Parms
		{
			FPurchaseFlowReceiptParam NewRECEIPT;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRECEIPT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::NewProp_NewRECEIPT = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRECEIPT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventRECEIPT_Parms, NewRECEIPT), Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::NewProp_NewRECEIPT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurchaseFlowJSBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseFlowJSBridge, "RECEIPT", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PurchaseFlowJSBridge_eventRECEIPT_Parms), Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics
	{
		struct PurchaseFlowJSBridge_eventRequestClose_Parms
		{
			FString CloseInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CloseInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::NewProp_CloseInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::NewProp_CloseInfo = { UE4CodeGen_Private::EPropertyClass::Str, "CloseInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PurchaseFlowJSBridge_eventRequestClose_Parms, CloseInfo), METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::NewProp_CloseInfo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::NewProp_CloseInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::NewProp_CloseInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurchaseFlowJSBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchaseFlowJSBridge, "RequestClose", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PurchaseFlowJSBridge_eventRequestClose_Parms), Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPurchaseFlowJSBridge_NoRegister()
	{
		return UPurchaseFlowJSBridge::StaticClass();
	}
	struct Z_Construct_UClass_UPurchaseFlowJSBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPurchaseFlowJSBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PurchaseFlow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPurchaseFlowJSBridge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPurchaseFlowJSBridge_GetDefaultExternalBrowserID, "GetDefaultExternalBrowserID" }, // 1789675638
		{ &Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserName, "GetExternalBrowserName" }, // 3671770608
		{ &Z_Construct_UFunction_UPurchaseFlowJSBridge_GetExternalBrowserPath, "GetExternalBrowserPath" }, // 4174566164
		{ &Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchExternalBrowserUrl, "LaunchExternalBrowserUrl" }, // 2406115046
		{ &Z_Construct_UFunction_UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl, "LaunchValidatedExternalBrowserUrl" }, // 3078684939
		{ &Z_Construct_UFunction_UPurchaseFlowJSBridge_RECEIPT, "RECEIPT" }, // 4282031206
		{ &Z_Construct_UFunction_UPurchaseFlowJSBridge_RequestClose, "RequestClose" }, // 3541052403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchaseFlowJSBridge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PurchaseFlowJSBridge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PurchaseFlowJSBridge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPurchaseFlowJSBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPurchaseFlowJSBridge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPurchaseFlowJSBridge_Statics::ClassParams = {
		&UPurchaseFlowJSBridge::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPurchaseFlowJSBridge_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPurchaseFlowJSBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPurchaseFlowJSBridge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPurchaseFlowJSBridge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPurchaseFlowJSBridge, 910170428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPurchaseFlowJSBridge(Z_Construct_UClass_UPurchaseFlowJSBridge, &UPurchaseFlowJSBridge::StaticClass, TEXT("/Script/PurchaseFlow"), TEXT("UPurchaseFlowJSBridge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPurchaseFlowJSBridge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
