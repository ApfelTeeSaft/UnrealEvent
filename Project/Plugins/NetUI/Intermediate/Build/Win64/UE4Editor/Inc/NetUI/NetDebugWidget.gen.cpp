// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetUI/Public/NetDebugWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDebugWidget() {}
// Cross Module References
	NETUI_API UClass* Z_Construct_UClass_UNetDebugWidget_NoRegister();
	NETUI_API UClass* Z_Construct_UClass_UNetDebugWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NetUI();
	NETUI_API UFunction* Z_Construct_UFunction_UNetDebugWidget_StartTimer();
	NETUI_API UFunction* Z_Construct_UFunction_UNetDebugWidget_StopTimer();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
// End Cross Module References
	void UNetDebugWidget::StaticRegisterNativesUNetDebugWidget()
	{
		UClass* Class = UNetDebugWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTimer", &UNetDebugWidget::execStartTimer },
			{ "StopTimer", &UNetDebugWidget::execStopTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetDebugWidget_StartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetDebugWidget_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetDebugWidget_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetDebugWidget, "StartTimer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetDebugWidget_StartTimer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNetDebugWidget_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetDebugWidget_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetDebugWidget_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetDebugWidget_StopTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetDebugWidget_StopTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetDebugWidget_StopTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetDebugWidget, "StopTimer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetDebugWidget_StopTimer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNetDebugWidget_StopTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetDebugWidget_StopTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetDebugWidget_StopTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNetDebugWidget_NoRegister()
	{
		return UNetDebugWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNetDebugWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownBandwidthUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownBandwidthUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpBandwidthUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpBandwidthUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketOutLossUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacketOutLossUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketInLossUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacketInLossUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketOutRateUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacketOutRateUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketInRateUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacketInRateUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PingUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetDebugWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NetUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetDebugWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetDebugWidget_StartTimer, "StartTimer" }, // 2465819090
		{ &Z_Construct_UFunction_UNetDebugWidget_StopTimer, "StopTimer" }, // 3892241901
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDebugWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NetDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_DownBandwidthUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetDebugWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_DownBandwidthUI = { UE4CodeGen_Private::EPropertyClass::Object, "DownBandwidthUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UNetDebugWidget, DownBandwidthUI), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_DownBandwidthUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_DownBandwidthUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_UpBandwidthUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetDebugWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_UpBandwidthUI = { UE4CodeGen_Private::EPropertyClass::Object, "UpBandwidthUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UNetDebugWidget, UpBandwidthUI), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_UpBandwidthUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_UpBandwidthUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutLossUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetDebugWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutLossUI = { UE4CodeGen_Private::EPropertyClass::Object, "PacketOutLossUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UNetDebugWidget, PacketOutLossUI), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutLossUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutLossUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInLossUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetDebugWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInLossUI = { UE4CodeGen_Private::EPropertyClass::Object, "PacketInLossUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UNetDebugWidget, PacketInLossUI), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInLossUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInLossUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutRateUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetDebugWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutRateUI = { UE4CodeGen_Private::EPropertyClass::Object, "PacketOutRateUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UNetDebugWidget, PacketOutRateUI), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutRateUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutRateUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInRateUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetDebugWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInRateUI = { UE4CodeGen_Private::EPropertyClass::Object, "PacketInRateUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UNetDebugWidget, PacketInRateUI), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInRateUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInRateUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PingUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetDebugWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PingUI = { UE4CodeGen_Private::EPropertyClass::Object, "PingUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UNetDebugWidget, PingUI), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PingUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PingUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetDebugWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_DownBandwidthUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_UpBandwidthUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutLossUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInLossUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketOutRateUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PacketInRateUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDebugWidget_Statics::NewProp_PingUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetDebugWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetDebugWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetDebugWidget_Statics::ClassParams = {
		&UNetDebugWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UNetDebugWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNetDebugWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNetDebugWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNetDebugWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetDebugWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetDebugWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetDebugWidget, 276080822);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetDebugWidget(Z_Construct_UClass_UNetDebugWidget, &UNetDebugWidget::StaticClass, TEXT("/Script/NetUI"), TEXT("UNetDebugWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetDebugWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
