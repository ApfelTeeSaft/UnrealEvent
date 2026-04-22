// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonButtonInternal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonButtonInternal() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonInternal_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonInternal();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature();
// End Cross Module References
	void UCommonButtonInternal::StaticRegisterNativesUCommonButtonInternal()
	{
	}
	UClass* Z_Construct_UClass_UCommonButtonInternal_NoRegister()
	{
		return UCommonButtonInternal::StaticClass();
	}
	struct Z_Construct_UClass_UCommonButtonInternal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInteractionEnabled_MetaData[];
#endif
		static void NewProp_bInteractionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInteractionEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bButtonEnabled_MetaData[];
#endif
		static void NewProp_bButtonEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bButtonEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDoubleClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoubleClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonButtonInternal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonButtonInternal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonInternal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bInteractionEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonInternal" },
		{ "ModuleRelativePath", "Public/CommonButtonInternal.h" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bInteractionEnabled_SetBit(void* Obj)
	{
		((UCommonButtonInternal*)Obj)->bInteractionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bInteractionEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bInteractionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonButtonInternal), &Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bInteractionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bInteractionEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bInteractionEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bButtonEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonInternal" },
		{ "ModuleRelativePath", "Public/CommonButtonInternal.h" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bButtonEnabled_SetBit(void* Obj)
	{
		((UCommonButtonInternal*)Obj)->bButtonEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bButtonEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bButtonEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonButtonInternal), &Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bButtonEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bButtonEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bButtonEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonInternal" },
		{ "ModuleRelativePath", "Public/CommonButtonInternal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinHeight = { UE4CodeGen_Private::EPropertyClass::Int, "MinHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonInternal, MinHeight), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonInternal" },
		{ "ModuleRelativePath", "Public/CommonButtonInternal.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinWidth = { UE4CodeGen_Private::EPropertyClass::Int, "MinWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonInternal, MinWidth), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_OnDoubleClicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonInternal" },
		{ "ModuleRelativePath", "Public/CommonButtonInternal.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_OnDoubleClicked = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDoubleClicked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonButtonInternal, OnDoubleClicked), Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_OnDoubleClicked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_OnDoubleClicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonButtonInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bInteractionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_bButtonEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_MinWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternal_Statics::NewProp_OnDoubleClicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonButtonInternal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonButtonInternal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonButtonInternal_Statics::ClassParams = {
		&UCommonButtonInternal::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCommonButtonInternal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternal_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonButtonInternal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonButtonInternal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonButtonInternal, 3928038165);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonButtonInternal(Z_Construct_UClass_UCommonButtonInternal, &UCommonButtonInternal::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonButtonInternal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonButtonInternal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
