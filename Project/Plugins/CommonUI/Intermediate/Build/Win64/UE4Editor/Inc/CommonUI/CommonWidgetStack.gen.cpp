// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonWidgetStack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonWidgetStack() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetStack_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetStack();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetSwitcher();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetStack_PopWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetStack_PushWidget();
// End Cross Module References
	void UCommonWidgetStack::StaticRegisterNativesUCommonWidgetStack()
	{
		UClass* Class = UCommonWidgetStack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PopWidget", &UCommonWidgetStack::execPopWidget },
			{ "PushWidget", &UCommonWidgetStack::execPushWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics
	{
		struct CommonWidgetStack_eventPopWidget_Parms
		{
			UWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(CommonWidgetStack_eventPopWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetStack, "PopWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetStack_eventPopWidget_Parms), Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetStack_PopWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetStack_PopWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics
	{
		struct CommonWidgetStack_eventPushWidget_Parms
		{
			UWidget* InWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::NewProp_InWidget = { UE4CodeGen_Private::EPropertyClass::Object, "InWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonWidgetStack_eventPushWidget_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::NewProp_InWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::NewProp_InWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::NewProp_InWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetStack, "PushWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetStack_eventPushWidget_Parms), Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetStack_PushWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetStack_PushWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonWidgetStack_NoRegister()
	{
		return UCommonWidgetStack::StaticClass();
	}
	struct Z_Construct_UClass_UCommonWidgetStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonWidgetStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonWidgetSwitcher,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonWidgetStack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonWidgetStack_PopWidget, "PopWidget" }, // 1842592688
		{ &Z_Construct_UFunction_UCommonWidgetStack_PushWidget, "PushWidget" }, // 184655113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetStack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonWidgetStack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetStack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonWidgetStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonWidgetStack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonWidgetStack_Statics::ClassParams = {
		&UCommonWidgetStack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A2u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"CommonUI",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetStack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonWidgetStack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonWidgetStack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonWidgetStack, 906299511);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonWidgetStack(Z_Construct_UClass_UCommonWidgetStack, &UCommonWidgetStack::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonWidgetStack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonWidgetStack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
