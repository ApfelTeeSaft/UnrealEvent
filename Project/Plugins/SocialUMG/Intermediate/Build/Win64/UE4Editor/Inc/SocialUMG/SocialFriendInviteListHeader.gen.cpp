// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialFriendInviteListHeader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialFriendInviteListHeader() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialFriendInviteListHeader_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialFriendInviteListHeader();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialUserListHeader();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialFriendInvite_NoRegister();
// End Cross Module References
	void USocialFriendInviteListHeader::StaticRegisterNativesUSocialFriendInviteListHeader()
	{
	}
	UClass* Z_Construct_UClass_USocialFriendInviteListHeader_NoRegister()
	{
		return USocialFriendInviteListHeader::StaticClass();
	}
	struct Z_Construct_UClass_USocialFriendInviteListHeader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendInvites_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FriendInvites;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendInvites_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialFriendInviteListHeader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USocialUserListHeader,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialFriendInviteListHeader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialFriendInviteListHeader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialFriendInviteListHeader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialFriendInviteListHeader_Statics::NewProp_FriendInvites_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFriendInviteListHeader" },
		{ "ModuleRelativePath", "Public/SocialFriendInviteListHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialFriendInviteListHeader_Statics::NewProp_FriendInvites = { UE4CodeGen_Private::EPropertyClass::Array, "FriendInvites", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, STRUCT_OFFSET(USocialFriendInviteListHeader, FriendInvites), METADATA_PARAMS(Z_Construct_UClass_USocialFriendInviteListHeader_Statics::NewProp_FriendInvites_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialFriendInviteListHeader_Statics::NewProp_FriendInvites_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialFriendInviteListHeader_Statics::NewProp_FriendInvites_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FriendInvites", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USocialFriendInvite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialFriendInviteListHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialFriendInviteListHeader_Statics::NewProp_FriendInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialFriendInviteListHeader_Statics::NewProp_FriendInvites_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialFriendInviteListHeader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialFriendInviteListHeader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialFriendInviteListHeader_Statics::ClassParams = {
		&USocialFriendInviteListHeader::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_USocialFriendInviteListHeader_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialFriendInviteListHeader_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialFriendInviteListHeader_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialFriendInviteListHeader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialFriendInviteListHeader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialFriendInviteListHeader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialFriendInviteListHeader, 3285135789);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialFriendInviteListHeader(Z_Construct_UClass_USocialFriendInviteListHeader, &USocialFriendInviteListHeader::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialFriendInviteListHeader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialFriendInviteListHeader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
