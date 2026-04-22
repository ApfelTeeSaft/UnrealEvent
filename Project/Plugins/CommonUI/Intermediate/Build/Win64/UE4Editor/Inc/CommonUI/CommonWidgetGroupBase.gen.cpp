// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonWidgetGroupBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonWidgetGroupBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetGroupBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetGroupBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget();
// End Cross Module References
	void UCommonWidgetGroupBase::StaticRegisterNativesUCommonWidgetGroupBase()
	{
		UClass* Class = UCommonWidgetGroupBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidget", &UCommonWidgetGroupBase::execAddWidget },
			{ "RemoveAll", &UCommonWidgetGroupBase::execRemoveAll },
			{ "RemoveWidget", &UCommonWidgetGroupBase::execRemoveWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics
	{
		struct CommonWidgetGroupBase_eventAddWidget_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget = { UE4CodeGen_Private::EPropertyClass::Object, "InWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonWidgetGroupBase_eventAddWidget_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::NewProp_InWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetGroupBase, "AddWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetGroupBase_eventAddWidget_Parms), Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetGroupBase, "RemoveAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics
	{
		struct CommonWidgetGroupBase_eventRemoveWidget_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget = { UE4CodeGen_Private::EPropertyClass::Object, "InWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonWidgetGroupBase_eventRemoveWidget_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::NewProp_InWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetGroupBase, "RemoveWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetGroupBase_eventRemoveWidget_Parms), Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonWidgetGroupBase_NoRegister()
	{
		return UCommonWidgetGroupBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonWidgetGroupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonWidgetGroupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonWidgetGroupBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonWidgetGroupBase_AddWidget, "AddWidget" }, // 1023334526
		{ &Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveAll, "RemoveAll" }, // 2299735206
		{ &Z_Construct_UFunction_UCommonWidgetGroupBase_RemoveWidget, "RemoveWidget" }, // 1898782838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetGroupBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonWidgetGroupBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetGroupBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonWidgetGroupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonWidgetGroupBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonWidgetGroupBase_Statics::ClassParams = {
		&UCommonWidgetGroupBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetGroupBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetGroupBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonWidgetGroupBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonWidgetGroupBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonWidgetGroupBase, 1626474564);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonWidgetGroupBase(Z_Construct_UClass_UCommonWidgetGroupBase, &UCommonWidgetGroupBase::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonWidgetGroupBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonWidgetGroupBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
