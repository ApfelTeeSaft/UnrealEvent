// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/AnalogSlider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalogSlider() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UAnalogSlider_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UAnalogSlider();
	UMG_API UClass* Z_Construct_UClass_USlider();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature();
// End Cross Module References
	void UAnalogSlider::StaticRegisterNativesUAnalogSlider()
	{
	}
	UClass* Z_Construct_UClass_UAnalogSlider_NoRegister()
	{
		return UAnalogSlider::StaticClass();
	}
	struct Z_Construct_UClass_UAnalogSlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAnalogCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnalogCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayToResetScalingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayToResetScalingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayToIncreaseScalingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayToIncreaseScalingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScalingSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScalingSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUseScalingSpeedMultiplier_MetaData[];
#endif
		static void NewProp_bShouldUseScalingSpeedMultiplier_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUseScalingSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalogSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlider,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalogSlider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnalogSlider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnalogSlider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnalogSlider" },
		{ "ModuleRelativePath", "Public/AnalogSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAnalogCapture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UAnalogSlider, OnAnalogCapture), Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToResetScalingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnalogSlider" },
		{ "ModuleRelativePath", "Public/AnalogSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToResetScalingSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DelayToResetScalingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAnalogSlider, DelayToResetScalingSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToResetScalingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToResetScalingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToIncreaseScalingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnalogSlider" },
		{ "ModuleRelativePath", "Public/AnalogSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToIncreaseScalingSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DelayToIncreaseScalingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAnalogSlider, DelayToIncreaseScalingSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToIncreaseScalingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToIncreaseScalingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalogSlider_Statics::NewProp_MaxScalingSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnalogSlider" },
		{ "ModuleRelativePath", "Public/AnalogSlider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnalogSlider_Statics::NewProp_MaxScalingSpeedMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "MaxScalingSpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAnalogSlider, MaxScalingSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_MaxScalingSpeedMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_MaxScalingSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalogSlider_Statics::NewProp_bShouldUseScalingSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnalogSlider" },
		{ "ModuleRelativePath", "Public/AnalogSlider.h" },
	};
#endif
	void Z_Construct_UClass_UAnalogSlider_Statics::NewProp_bShouldUseScalingSpeedMultiplier_SetBit(void* Obj)
	{
		((UAnalogSlider*)Obj)->bShouldUseScalingSpeedMultiplier = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnalogSlider_Statics::NewProp_bShouldUseScalingSpeedMultiplier = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldUseScalingSpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnalogSlider), &Z_Construct_UClass_UAnalogSlider_Statics::NewProp_bShouldUseScalingSpeedMultiplier_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_bShouldUseScalingSpeedMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::NewProp_bShouldUseScalingSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnalogSlider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalogSlider_Statics::NewProp_OnAnalogCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToResetScalingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalogSlider_Statics::NewProp_DelayToIncreaseScalingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalogSlider_Statics::NewProp_MaxScalingSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalogSlider_Statics::NewProp_bShouldUseScalingSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalogSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalogSlider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnalogSlider_Statics::ClassParams = {
		&UAnalogSlider::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnalogSlider_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnalogSlider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnalogSlider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalogSlider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnalogSlider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnalogSlider, 1320920101);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnalogSlider(Z_Construct_UClass_UAnalogSlider, &UAnalogSlider::StaticClass, TEXT("/Script/CommonUI"), TEXT("UAnalogSlider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalogSlider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
