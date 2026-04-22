// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInput/Public/CommonInputSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputSettings() {}
// Cross Module References
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSettings_NoRegister();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
	COMMONINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputPlatformData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonUIInputData_NoRegister();
// End Cross Module References
	void UCommonInputSettings::StaticRegisterNativesUCommonInputSettings()
	{
	}
	UClass* Z_Construct_UClass_UCommonInputSettings_NoRegister()
	{
		return UCommonInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InputDataClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonInputPlatformData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommonInputPlatformData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_InputData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadData_MetaData[];
#endif
		static void NewProp_bAutoLoadData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonInputSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CurrentPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSettings" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CurrentPlatform = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentPlatform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, STRUCT_OFFSET(UCommonInputSettings, CurrentPlatform), Z_Construct_UScriptStruct_FCommonInputPlatformData, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CurrentPlatform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CurrentPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSettings" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass = { UE4CodeGen_Private::EPropertyClass::Class, "InputDataClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000002005, 1, nullptr, STRUCT_OFFSET(UCommonInputSettings, InputDataClass), Z_Construct_UClass_UCommonUIInputData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSettings" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData = { UE4CodeGen_Private::EPropertyClass::Struct, "CommonInputPlatformData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, CPP_ARRAY_DIM(CommonInputPlatformData, UCommonInputSettings), nullptr, STRUCT_OFFSET(UCommonInputSettings, CommonInputPlatformData), Z_Construct_UScriptStruct_FCommonInputPlatformData, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSettings" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData = { UE4CodeGen_Private::EPropertyClass::SoftClass, "InputData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000004005, 1, nullptr, STRUCT_OFFSET(UCommonInputSettings, InputData), Z_Construct_UClass_UCommonUIInputData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAutoLoadData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSettings" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAutoLoadData_SetBit(void* Obj)
	{
		((UCommonInputSettings*)Obj)->bAutoLoadData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAutoLoadData = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoLoadData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonInputSettings), &Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAutoLoadData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAutoLoadData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAutoLoadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CurrentPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAutoLoadData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputSettings_Statics::ClassParams = {
		&UCommonInputSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		nullptr, 0,
		Z_Construct_UClass_UCommonInputSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonInputSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonInputSettings, 4047772953);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonInputSettings(Z_Construct_UClass_UCommonInputSettings, &UCommonInputSettings::StaticClass, TEXT("/Script/CommonInput"), TEXT("UCommonInputSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
