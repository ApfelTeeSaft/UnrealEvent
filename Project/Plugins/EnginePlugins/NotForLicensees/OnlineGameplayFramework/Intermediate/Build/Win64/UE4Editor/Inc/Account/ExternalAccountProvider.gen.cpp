// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/ExternalAccountProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalAccountProvider() {}
// Cross Module References
	ACCOUNT_API UClass* Z_Construct_UClass_UExternalAccountProvider_NoRegister();
	ACCOUNT_API UClass* Z_Construct_UClass_UExternalAccountProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Account();
	ACCOUNT_API UScriptStruct* Z_Construct_UScriptStruct_FExternalAccountServiceConfig();
// End Cross Module References
	void UExternalAccountProvider::StaticRegisterNativesUExternalAccountProvider()
	{
	}
	UClass* Z_Construct_UClass_UExternalAccountProvider_NoRegister()
	{
		return UExternalAccountProvider::StaticClass();
	}
	struct Z_Construct_UClass_UExternalAccountProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Services;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Services_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExternalAccountProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Account,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExternalAccountProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExternalAccountProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExternalAccountProvider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExternalAccountProvider_Statics::NewProp_Services_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExternalAccountProvider" },
		{ "ModuleRelativePath", "Public/ExternalAccountProvider.h" },
		{ "ToolTip", "Config," },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExternalAccountProvider_Statics::NewProp_Services = { UE4CodeGen_Private::EPropertyClass::Array, "Services", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UExternalAccountProvider, Services), METADATA_PARAMS(Z_Construct_UClass_UExternalAccountProvider_Statics::NewProp_Services_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExternalAccountProvider_Statics::NewProp_Services_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExternalAccountProvider_Statics::NewProp_Services_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Services", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FExternalAccountServiceConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExternalAccountProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalAccountProvider_Statics::NewProp_Services,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalAccountProvider_Statics::NewProp_Services_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExternalAccountProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalAccountProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExternalAccountProvider_Statics::ClassParams = {
		&UExternalAccountProvider::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UExternalAccountProvider_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UExternalAccountProvider_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UExternalAccountProvider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UExternalAccountProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExternalAccountProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExternalAccountProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExternalAccountProvider, 3270516367);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExternalAccountProvider(Z_Construct_UClass_UExternalAccountProvider, &UExternalAccountProvider::StaticClass, TEXT("/Script/Account"), TEXT("UExternalAccountProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalAccountProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
