// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialActionItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialActionItem() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialActionItem_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialActionItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
// End Cross Module References
	void USocialActionItem::StaticRegisterNativesUSocialActionItem()
	{
	}
	UClass* Z_Construct_UClass_USocialActionItem_NoRegister()
	{
		return USocialActionItem::StaticClass();
	}
	struct Z_Construct_UClass_USocialActionItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialActionItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialActionItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialActionItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialActionItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialActionItem_Statics::NewProp_CurrentUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialActionItem" },
		{ "ModuleRelativePath", "Public/SocialActionItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialActionItem_Statics::NewProp_CurrentUser = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentUser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USocialActionItem, CurrentUser), Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialActionItem_Statics::NewProp_CurrentUser_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialActionItem_Statics::NewProp_CurrentUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialActionItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialActionItem_Statics::NewProp_CurrentUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialActionItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialActionItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialActionItem_Statics::ClassParams = {
		&USocialActionItem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_USocialActionItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialActionItem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialActionItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialActionItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialActionItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialActionItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialActionItem, 2249558317);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialActionItem(Z_Construct_UClass_USocialActionItem, &USocialActionItem::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialActionItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialActionItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
