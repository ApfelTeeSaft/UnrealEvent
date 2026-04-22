// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialInviteListEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialInviteListEntry() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialInviteListEntry_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialInviteListEntry();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialListEntry();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialFriendInvite_NoRegister();
// End Cross Module References
	void USocialInviteListEntry::StaticRegisterNativesUSocialInviteListEntry()
	{
	}
	UClass* Z_Construct_UClass_USocialInviteListEntry_NoRegister()
	{
		return USocialInviteListEntry::StaticClass();
	}
	struct Z_Construct_UClass_USocialInviteListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocialInvite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialInviteListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USocialListEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInviteListEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialInviteListEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialInviteListEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInviteListEntry_Statics::NewProp_SocialInvite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInviteListEntry" },
		{ "ModuleRelativePath", "Public/SocialInviteListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInviteListEntry_Statics::NewProp_SocialInvite = { UE4CodeGen_Private::EPropertyClass::Object, "SocialInvite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USocialInviteListEntry, SocialInvite), Z_Construct_UClass_USocialFriendInvite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInviteListEntry_Statics::NewProp_SocialInvite_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInviteListEntry_Statics::NewProp_SocialInvite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialInviteListEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInviteListEntry_Statics::NewProp_SocialInvite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialInviteListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialInviteListEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialInviteListEntry_Statics::ClassParams = {
		&USocialInviteListEntry::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		nullptr, 0,
		Z_Construct_UClass_USocialInviteListEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialInviteListEntry_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialInviteListEntry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialInviteListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialInviteListEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialInviteListEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialInviteListEntry, 1219070635);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialInviteListEntry(Z_Construct_UClass_USocialInviteListEntry, &USocialInviteListEntry::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialInviteListEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialInviteListEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
