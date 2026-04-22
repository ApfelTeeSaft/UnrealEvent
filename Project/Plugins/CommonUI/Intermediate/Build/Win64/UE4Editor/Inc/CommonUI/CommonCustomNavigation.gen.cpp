// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonCustomNavigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonCustomNavigation() {}
// Cross Module References
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonCustomNavigation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonCustomNavigation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics
	{
		struct CommonCustomNavigation_eventOnCustomNavigationEvent_Parms
		{
			EUINavigation NavigationType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavigationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavigationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonCustomNavigation_eventOnCustomNavigationEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonCustomNavigation_eventOnCustomNavigationEvent_Parms), &Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_NavigationType = { UE4CodeGen_Private::EPropertyClass::Enum, "NavigationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonCustomNavigation_eventOnCustomNavigationEvent_Parms, NavigationType), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_NavigationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_NavigationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::NewProp_NavigationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonCustomNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonCustomNavigation, "OnCustomNavigationEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(CommonCustomNavigation_eventOnCustomNavigationEvent_Parms), Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCommonCustomNavigation::StaticRegisterNativesUCommonCustomNavigation()
	{
	}
	UClass* Z_Construct_UClass_UCommonCustomNavigation_NoRegister()
	{
		return UCommonCustomNavigation::StaticClass();
	}
	struct Z_Construct_UClass_UCommonCustomNavigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNavigationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNavigationEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonCustomNavigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBorder,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonCustomNavigation_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature, "OnCustomNavigationEvent__DelegateSignature" }, // 2428088979
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonCustomNavigation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonCustomNavigation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonCustomNavigation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonCustomNavigation" },
		{ "ModuleRelativePath", "Public/CommonCustomNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnNavigationEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080005, 1, nullptr, STRUCT_OFFSET(UCommonCustomNavigation, OnNavigationEvent), Z_Construct_UDelegateFunction_UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonCustomNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonCustomNavigation_Statics::NewProp_OnNavigationEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonCustomNavigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonCustomNavigation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonCustomNavigation_Statics::ClassParams = {
		&UCommonCustomNavigation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A2u,
		IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
		Z_Construct_UClass_UCommonCustomNavigation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonCustomNavigation_Statics::PropPointers),
		"CommonUI",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonCustomNavigation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonCustomNavigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonCustomNavigation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonCustomNavigation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonCustomNavigation, 3735629636);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonCustomNavigation(Z_Construct_UClass_UCommonCustomNavigation, &UCommonCustomNavigation::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonCustomNavigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonCustomNavigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
