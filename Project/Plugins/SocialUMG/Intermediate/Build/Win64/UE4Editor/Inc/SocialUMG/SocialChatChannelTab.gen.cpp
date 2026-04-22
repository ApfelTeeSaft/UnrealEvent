// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialChatChannelTab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatChannelTab() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatChannelTab_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatChannelTab();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	PARTY_API UClass* Z_Construct_UClass_USocialChatChannel_NoRegister();
// End Cross Module References
	void USocialChatChannelTab::StaticRegisterNativesUSocialChatChannelTab()
	{
	}
	UClass* Z_Construct_UClass_USocialChatChannelTab_NoRegister()
	{
		return USocialChatChannelTab::StaticClass();
	}
	struct Z_Construct_UClass_USocialChatChannelTab_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonText_ChannelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommonText_ChannelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChatChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialChatChannelTab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButton,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatChannelTab_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialChatChannelTab.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialChatChannelTab.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_CommonText_ChannelName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatChannelTab" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatChannelTab.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_CommonText_ChannelName = { UE4CodeGen_Private::EPropertyClass::Object, "CommonText_ChannelName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatChannelTab, CommonText_ChannelName), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_CommonText_ChannelName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_CommonText_ChannelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_ChatChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatChannelTab" },
		{ "ModuleRelativePath", "Public/SocialChatChannelTab.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_ChatChannel = { UE4CodeGen_Private::EPropertyClass::Object, "ChatChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USocialChatChannelTab, ChatChannel), Z_Construct_UClass_USocialChatChannel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_ChatChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_ChatChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialChatChannelTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_CommonText_ChannelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatChannelTab_Statics::NewProp_ChatChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialChatChannelTab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialChatChannelTab>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialChatChannelTab_Statics::ClassParams = {
		&USocialChatChannelTab::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		nullptr, 0,
		Z_Construct_UClass_USocialChatChannelTab_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialChatChannelTab_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialChatChannelTab_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialChatChannelTab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialChatChannelTab()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialChatChannelTab_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialChatChannelTab, 4111990145);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialChatChannelTab(Z_Construct_UClass_USocialChatChannelTab, &USocialChatChannelTab::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialChatChannelTab"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialChatChannelTab);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
