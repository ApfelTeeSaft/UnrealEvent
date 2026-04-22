// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialPartyInviteListHeader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialPartyInviteListHeader() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialPartyInviteListHeader_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialPartyInviteListHeader();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialUserListHeader();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialPartyInvite_NoRegister();
// End Cross Module References
	void USocialPartyInviteListHeader::StaticRegisterNativesUSocialPartyInviteListHeader()
	{
	}
	UClass* Z_Construct_UClass_USocialPartyInviteListHeader_NoRegister()
	{
		return USocialPartyInviteListHeader::StaticClass();
	}
	struct Z_Construct_UClass_USocialPartyInviteListHeader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyInvites_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartyInvites;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyInvites_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialPartyInviteListHeader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USocialUserListHeader,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialPartyInviteListHeader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialPartyInviteListHeader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialPartyInviteListHeader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialPartyInviteListHeader_Statics::NewProp_PartyInvites_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialPartyInviteListHeader" },
		{ "ModuleRelativePath", "Public/SocialPartyInviteListHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialPartyInviteListHeader_Statics::NewProp_PartyInvites = { UE4CodeGen_Private::EPropertyClass::Array, "PartyInvites", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, STRUCT_OFFSET(USocialPartyInviteListHeader, PartyInvites), METADATA_PARAMS(Z_Construct_UClass_USocialPartyInviteListHeader_Statics::NewProp_PartyInvites_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialPartyInviteListHeader_Statics::NewProp_PartyInvites_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialPartyInviteListHeader_Statics::NewProp_PartyInvites_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PartyInvites", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USocialPartyInvite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialPartyInviteListHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialPartyInviteListHeader_Statics::NewProp_PartyInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialPartyInviteListHeader_Statics::NewProp_PartyInvites_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialPartyInviteListHeader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialPartyInviteListHeader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialPartyInviteListHeader_Statics::ClassParams = {
		&USocialPartyInviteListHeader::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_USocialPartyInviteListHeader_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialPartyInviteListHeader_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialPartyInviteListHeader_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialPartyInviteListHeader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialPartyInviteListHeader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialPartyInviteListHeader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialPartyInviteListHeader, 1180387884);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialPartyInviteListHeader(Z_Construct_UClass_USocialPartyInviteListHeader, &USocialPartyInviteListHeader::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialPartyInviteListHeader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialPartyInviteListHeader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
