// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonUIEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIEditorSettings() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIEditorSettings_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorderStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
// End Cross Module References
	void UCommonUIEditorSettings::StaticRegisterNativesUCommonUIEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UCommonUIEditorSettings_NoRegister()
	{
		return UCommonUIEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUIEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateBorderStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TemplateBorderStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TemplateButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TemplateTextStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUIEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonUIEditorSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUIEditorSettings" },
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle = { UE4CodeGen_Private::EPropertyClass::SoftClass, "TemplateBorderStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000004005, 1, nullptr, STRUCT_OFFSET(UCommonUIEditorSettings, TemplateBorderStyle), Z_Construct_UClass_UCommonBorderStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUIEditorSettings" },
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle = { UE4CodeGen_Private::EPropertyClass::SoftClass, "TemplateButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000004005, 1, nullptr, STRUCT_OFFSET(UCommonUIEditorSettings, TemplateButtonStyle), Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUIEditorSettings" },
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle = { UE4CodeGen_Private::EPropertyClass::SoftClass, "TemplateTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000004005, 1, nullptr, STRUCT_OFFSET(UCommonUIEditorSettings, TemplateTextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUIEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUIEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::ClassParams = {
		&UCommonUIEditorSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		nullptr, 0,
		Z_Construct_UClass_UCommonUIEditorSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::PropPointers),
		"Editor",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUIEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonUIEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonUIEditorSettings, 2223853036);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonUIEditorSettings(Z_Construct_UClass_UCommonUIEditorSettings, &UCommonUIEditorSettings::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonUIEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
