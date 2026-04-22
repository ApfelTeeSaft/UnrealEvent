// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreamVoice/Public/LiveStreamVoiceChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveStreamVoiceChannel() {}
// Cross Module References
	LIVESTREAMVOICE_API UClass* Z_Construct_UClass_ULiveStreamVoiceChannel_NoRegister();
	LIVESTREAMVOICE_API UClass* Z_Construct_UClass_ULiveStreamVoiceChannel();
	ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel();
	UPackage* Z_Construct_UPackage__Script_LiveStreamVoice();
// End Cross Module References
	void ULiveStreamVoiceChannel::StaticRegisterNativesULiveStreamVoiceChannel()
	{
	}
	UClass* Z_Construct_UClass_ULiveStreamVoiceChannel_NoRegister()
	{
		return ULiveStreamVoiceChannel::StaticClass();
	}
	struct Z_Construct_UClass_ULiveStreamVoiceChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveStreamVoiceChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoiceChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreamVoice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveStreamVoiceChannel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiveStreamVoiceChannel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveStreamVoiceChannel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveStreamVoiceChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveStreamVoiceChannel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveStreamVoiceChannel_Statics::ClassParams = {
		&ULiveStreamVoiceChannel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULiveStreamVoiceChannel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveStreamVoiceChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveStreamVoiceChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveStreamVoiceChannel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveStreamVoiceChannel, 1080738703);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveStreamVoiceChannel(Z_Construct_UClass_ULiveStreamVoiceChannel, &ULiveStreamVoiceChannel::StaticClass, TEXT("/Script/LiveStreamVoice"), TEXT("ULiveStreamVoiceChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveStreamVoiceChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
