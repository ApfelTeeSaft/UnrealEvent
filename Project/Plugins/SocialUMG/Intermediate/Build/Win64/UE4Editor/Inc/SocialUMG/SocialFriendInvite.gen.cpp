// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialFriendInvite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialFriendInvite() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialFriendInvite_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialFriendInvite();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialActionItem();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
// End Cross Module References
	void USocialFriendInvite::StaticRegisterNativesUSocialFriendInvite()
	{
	}
	UClass* Z_Construct_UClass_USocialFriendInvite_NoRegister()
	{
		return USocialFriendInvite::StaticClass();
	}
	struct Z_Construct_UClass_USocialFriendInvite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialFriendInvite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USocialActionItem,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialFriendInvite_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialFriendInvite.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialFriendInvite.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialFriendInvite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialFriendInvite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialFriendInvite_Statics::ClassParams = {
		&USocialFriendInvite::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialFriendInvite_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialFriendInvite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialFriendInvite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialFriendInvite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialFriendInvite, 1360553490);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialFriendInvite(Z_Construct_UClass_USocialFriendInvite, &USocialFriendInvite::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialFriendInvite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialFriendInvite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
