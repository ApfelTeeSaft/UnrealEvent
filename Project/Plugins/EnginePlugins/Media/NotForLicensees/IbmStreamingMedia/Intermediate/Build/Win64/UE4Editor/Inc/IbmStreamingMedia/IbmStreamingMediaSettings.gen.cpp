// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IbmStreamingMedia/Public/IbmStreamingMediaSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIbmStreamingMediaSettings() {}
// Cross Module References
	IBMSTREAMINGMEDIA_API UClass* Z_Construct_UClass_UIbmStreamingMediaSettings_NoRegister();
	IBMSTREAMINGMEDIA_API UClass* Z_Construct_UClass_UIbmStreamingMediaSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_IbmStreamingMedia();
// End Cross Module References
	void UIbmStreamingMediaSettings::StaticRegisterNativesUIbmStreamingMediaSettings()
	{
	}
	UClass* Z_Construct_UClass_UIbmStreamingMediaSettings_NoRegister()
	{
		return UIbmStreamingMediaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UIbmStreamingMediaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyMediaSource_MetaData[];
#endif
		static void NewProp_bUseLegacyMediaSource_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyMediaSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_IbmStreamingMedia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IbmStreamingMediaSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IbmStreamingMediaSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::NewProp_bUseLegacyMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IbmStreamingMediaSettings" },
		{ "ModuleRelativePath", "Public/IbmStreamingMediaSettings.h" },
	};
#endif
	void Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::NewProp_bUseLegacyMediaSource_SetBit(void* Obj)
	{
		((UIbmStreamingMediaSettings*)Obj)->bUseLegacyMediaSource = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::NewProp_bUseLegacyMediaSource = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLegacyMediaSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIbmStreamingMediaSettings), &Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::NewProp_bUseLegacyMediaSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::NewProp_bUseLegacyMediaSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::NewProp_bUseLegacyMediaSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::NewProp_bUseLegacyMediaSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIbmStreamingMediaSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::ClassParams = {
		&UIbmStreamingMediaSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A6u,
		nullptr, 0,
		Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::PropPointers),
		"IbmStreamingMedia",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIbmStreamingMediaSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIbmStreamingMediaSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIbmStreamingMediaSettings, 740391987);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIbmStreamingMediaSettings(Z_Construct_UClass_UIbmStreamingMediaSettings, &UIbmStreamingMediaSettings::StaticClass, TEXT("/Script/IbmStreamingMedia"), TEXT("UIbmStreamingMediaSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIbmStreamingMediaSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
