// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonUIRichTextData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIRichTextData() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIRichTextData_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIRichTextData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void UCommonUIRichTextData::StaticRegisterNativesUCommonUIRichTextData()
	{
	}
	UClass* Z_Construct_UClass_UCommonUIRichTextData_NoRegister()
	{
		return UCommonUIRichTextData::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUIRichTextData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InlineIconSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InlineIconSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUIRichTextData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIRichTextData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonUIRichTextData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUIRichTextData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUIRichTextData" },
		{ "ModuleRelativePath", "Public/CommonUIRichTextData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet = { UE4CodeGen_Private::EPropertyClass::Object, "InlineIconSet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UCommonUIRichTextData, InlineIconSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUIRichTextData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUIRichTextData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIRichTextData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIRichTextData_Statics::ClassParams = {
		&UCommonUIRichTextData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCommonUIRichTextData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonUIRichTextData_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUIRichTextData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonUIRichTextData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUIRichTextData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonUIRichTextData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonUIRichTextData, 3756958455);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonUIRichTextData(Z_Construct_UClass_UCommonUIRichTextData, &UCommonUIRichTextData::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonUIRichTextData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIRichTextData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
