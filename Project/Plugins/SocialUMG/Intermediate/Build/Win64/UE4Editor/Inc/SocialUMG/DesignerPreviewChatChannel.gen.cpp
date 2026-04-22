// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/DesignerPreviewChatChannel.h"
#include "Party/Public/Chat/SocialChatManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesignerPreviewChatChannel() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_UDesignerPreviewChatChannel_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_UDesignerPreviewChatChannel();
	PARTY_API UClass* Z_Construct_UClass_USocialChatChannel();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
// End Cross Module References
	void UDesignerPreviewChatChannel::StaticRegisterNativesUDesignerPreviewChatChannel()
	{
	}
	UClass* Z_Construct_UClass_UDesignerPreviewChatChannel_NoRegister()
	{
		return UDesignerPreviewChatChannel::StaticClass();
	}
	struct Z_Construct_UClass_UDesignerPreviewChatChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDesignerPreviewChatChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USocialChatChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDesignerPreviewChatChannel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DesignerPreviewChatChannel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DesignerPreviewChatChannel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDesignerPreviewChatChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDesignerPreviewChatChannel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDesignerPreviewChatChannel_Statics::ClassParams = {
		&UDesignerPreviewChatChannel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDesignerPreviewChatChannel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDesignerPreviewChatChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDesignerPreviewChatChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDesignerPreviewChatChannel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDesignerPreviewChatChannel, 1920431800);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDesignerPreviewChatChannel(Z_Construct_UClass_UDesignerPreviewChatChannel, &UDesignerPreviewChatChannel::StaticClass, TEXT("/Script/SocialUMG"), TEXT("UDesignerPreviewChatChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDesignerPreviewChatChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
