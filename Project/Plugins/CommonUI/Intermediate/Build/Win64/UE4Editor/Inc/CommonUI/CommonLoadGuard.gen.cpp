// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonLoadGuard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonLoadGuard() {}
// Cross Module References
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLoadGuard();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLoadGuard_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLoadGuard_IsLoading();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics
	{
		struct CommonLoadGuard_eventOnAssetLoaded_Parms
		{
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonLoadGuard_eventOnAssetLoaded_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, "OnAssetLoaded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(CommonLoadGuard_eventOnAssetLoaded_Parms), Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCommonLoadGuard::StaticRegisterNativesUCommonLoadGuard()
	{
		UClass* Class = UCommonLoadGuard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GuardAndLoadAsset", &UCommonLoadGuard::execBP_GuardAndLoadAsset },
			{ "IsLoading", &UCommonLoadGuard::execIsLoading },
			{ "SetIsLoading", &UCommonLoadGuard::execSetIsLoading },
			{ "SetLoadingText", &UCommonLoadGuard::execSetLoadingText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics
	{
		struct CommonLoadGuard_eventBP_GuardAndLoadAsset_Parms
		{
			TSoftObjectPtr<UObject> InLazyAsset;
			FScriptDelegate OnAssetLoaded;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnAssetLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLazyAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_InLazyAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnAssetLoaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonLoadGuard_eventBP_GuardAndLoadAsset_Parms, OnAssetLoaded), Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset = { UE4CodeGen_Private::EPropertyClass::SoftObject, "InLazyAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000008000182, 1, nullptr, STRUCT_OFFSET(CommonLoadGuard_eventBP_GuardAndLoadAsset_Parms, InLazyAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, "BP_GuardAndLoadAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04440401, sizeof(CommonLoadGuard_eventBP_GuardAndLoadAsset_Parms), Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics
	{
		struct CommonLoadGuard_eventIsLoading_Parms
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
	void Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonLoadGuard_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonLoadGuard_eventIsLoading_Parms), &Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, "IsLoading", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonLoadGuard_eventIsLoading_Parms), Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLoadGuard_IsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics
	{
		struct CommonLoadGuard_eventSetIsLoading_Parms
		{
			bool bInIsLoading;
		};
		static void NewProp_bInIsLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLoading;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::NewProp_bInIsLoading_SetBit(void* Obj)
	{
		((CommonLoadGuard_eventSetIsLoading_Parms*)Obj)->bInIsLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::NewProp_bInIsLoading = { UE4CodeGen_Private::EPropertyClass::Bool, "bInIsLoading", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonLoadGuard_eventSetIsLoading_Parms), &Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::NewProp_bInIsLoading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::NewProp_bInIsLoading,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, "SetIsLoading", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonLoadGuard_eventSetIsLoading_Parms), Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics
	{
		struct CommonLoadGuard_eventSetLoadingText_Parms
		{
			FText InLoadingText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoadingText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InLoadingText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText = { UE4CodeGen_Private::EPropertyClass::Text, "InLoadingText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonLoadGuard_eventSetLoadingText_Parms, InLoadingText), METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, "SetLoadingText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CommonLoadGuard_eventSetLoadingText_Parms), Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonLoadGuard_NoRegister()
	{
		return UCommonLoadGuard::StaticClass();
	}
	struct Z_Construct_UClass_UCommonLoadGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpinnerMaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpinnerMaterialPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnLoadingStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnLoadingStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoadingText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrobberPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrobberPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrobberAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThrobberAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingBackgroundBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonLoadGuard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonLoadGuard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset, "BP_GuardAndLoadAsset" }, // 2380424422
		{ &Z_Construct_UFunction_UCommonLoadGuard_IsLoading, "IsLoading" }, // 26791642
		{ &Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature, "OnAssetLoaded__DelegateSignature" }, // 2964025141
		{ &Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading, "SetIsLoading" }, // 822160528
		{ &Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText, "SetLoadingText" }, // 2123760160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonLoadGuard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath = { UE4CodeGen_Private::EPropertyClass::Struct, "SpinnerMaterialPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UCommonLoadGuard, SpinnerMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BP_OnLoadingStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000010080005, 1, nullptr, STRUCT_OFFSET(UCommonLoadGuard, BP_OnLoadingStateChanged), Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle = { UE4CodeGen_Private::EPropertyClass::Class, "TextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000005, 1, nullptr, STRUCT_OFFSET(UCommonLoadGuard, TextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText = { UE4CodeGen_Private::EPropertyClass::Text, "LoadingText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UCommonLoadGuard, LoadingText), METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ThrobberPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UCommonLoadGuard, ThrobberPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "ThrobberAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UCommonLoadGuard, ThrobberAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "LoadingBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UCommonLoadGuard, LoadingBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonLoadGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonLoadGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonLoadGuard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonLoadGuard_Statics::ClassParams = {
		&UCommonLoadGuard::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A6u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonLoadGuard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonLoadGuard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonLoadGuard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonLoadGuard, 155511860);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonLoadGuard(Z_Construct_UClass_UCommonLoadGuard, &UCommonLoadGuard::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonLoadGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonLoadGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
