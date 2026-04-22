// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonLazyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonLazyWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyWidget_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLazyWidget_IsLoading();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	void UCommonLazyWidget::StaticRegisterNativesUCommonLazyWidget()
	{
		UClass* Class = UCommonLazyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLoading", &UCommonLazyWidget::execIsLoading },
			{ "SetLazyContent", &UCommonLazyWidget::execSetLazyContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics
	{
		struct CommonLazyWidget_eventIsLoading_Parms
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
	void Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonLazyWidget_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonLazyWidget_eventIsLoading_Parms), &Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyWidget, "IsLoading", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonLazyWidget_eventIsLoading_Parms), Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyWidget_IsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLazyWidget_IsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics
	{
		struct CommonLazyWidget_eventSetLazyContent_Parms
		{
			TSoftClassPtr<UUserWidget>  SoftWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SoftWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget = { UE4CodeGen_Private::EPropertyClass::SoftClass, "SoftWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000082, 1, nullptr, STRUCT_OFFSET(CommonLazyWidget_eventSetLazyContent_Parms, SoftWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::NewProp_SoftWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyWidget, "SetLazyContent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonLazyWidget_eventSetLazyContent_Parms), Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonLazyWidget_NoRegister()
	{
		return UCommonLazyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCommonLazyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnLoadingStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnLoadingStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingBackgroundBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonLazyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonLazyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonLazyWidget_IsLoading, "IsLoading" }, // 4260583073
		{ &Z_Construct_UFunction_UCommonLazyWidget_SetLazyContent, "SetLazyContent" }, // 3993641671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonLazyWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLazyWidget" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BP_OnLoadingStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000010080005, 1, nullptr, STRUCT_OFFSET(UCommonLazyWidget, BP_OnLoadingStateChanged), Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLazyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content = { UE4CodeGen_Private::EPropertyClass::Object, "Content", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008200d, 1, nullptr, STRUCT_OFFSET(UCommonLazyWidget, Content), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLazyWidget" },
		{ "ModuleRelativePath", "Public/CommonLazyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "LoadingBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UCommonLazyWidget, LoadingBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonLazyWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_BP_OnLoadingStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyWidget_Statics::NewProp_LoadingBackgroundBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonLazyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonLazyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonLazyWidget_Statics::ClassParams = {
		&UCommonLazyWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonLazyWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonLazyWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonLazyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonLazyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonLazyWidget, 786263418);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonLazyWidget(Z_Construct_UClass_UCommonLazyWidget, &UCommonLazyWidget::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonLazyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonLazyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
