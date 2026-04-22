// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EpicCMSManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicCMSManager() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSManager_NoRegister();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
// End Cross Module References
	void UEpicCMSManager::StaticRegisterNativesUEpicCMSManager()
	{
	}
	UClass* Z_Construct_UClass_UEpicCMSManager_NoRegister()
	{
		return UEpicCMSManager::StaticClass();
	}
	struct Z_Construct_UClass_UEpicCMSManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRefreshing_MetaData[];
#endif
		static void NewProp_bRefreshing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRefreshing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CmsEndpointOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CmsEndpointOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicCMSManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EpicCMSManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_bRefreshing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSManager" },
		{ "ModuleRelativePath", "Public/EpicCMSManager.h" },
	};
#endif
	void Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_bRefreshing_SetBit(void* Obj)
	{
		((UEpicCMSManager*)Obj)->bRefreshing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_bRefreshing = { UE4CodeGen_Private::EPropertyClass::Bool, "bRefreshing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEpicCMSManager), &Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_bRefreshing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_bRefreshing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_bRefreshing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_CmsEndpointOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSManager" },
		{ "ModuleRelativePath", "Public/EpicCMSManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_CmsEndpointOverride = { UE4CodeGen_Private::EPropertyClass::Str, "CmsEndpointOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSManager, CmsEndpointOverride), METADATA_PARAMS(Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_CmsEndpointOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_CmsEndpointOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEpicCMSManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_bRefreshing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSManager_Statics::NewProp_CmsEndpointOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicCMSManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicCMSManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicCMSManager_Statics::ClassParams = {
		&UEpicCMSManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UEpicCMSManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEpicCMSManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicCMSManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicCMSManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicCMSManager, 357215416);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicCMSManager(Z_Construct_UClass_UEpicCMSManager, &UEpicCMSManager::StaticClass, TEXT("/Script/EpicCMSUIFramework"), TEXT("UEpicCMSManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicCMSManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
