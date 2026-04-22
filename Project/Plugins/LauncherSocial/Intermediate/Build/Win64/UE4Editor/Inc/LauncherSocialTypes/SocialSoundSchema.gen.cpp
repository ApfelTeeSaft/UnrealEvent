// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/SocialSoundSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialSoundSchema() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialSoundSchema();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
// End Cross Module References
class UScriptStruct* FSocialSoundSchema::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FSocialSoundSchema_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialSoundSchema, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("SocialSoundSchema"), sizeof(FSocialSoundSchema), Get_Z_Construct_UScriptStruct_FSocialSoundSchema_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialSoundSchema(FSocialSoundSchema::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("SocialSoundSchema"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialSoundSchema
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialSoundSchema()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialSoundSchema")),new UScriptStruct::TCppStructOps<FSocialSoundSchema>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialSoundSchema;
	struct Z_Construct_UScriptStruct_FSocialSoundSchema_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendInviteReceivedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendInviteReceivedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyInviteReceivedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyInviteReceivedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageReceivedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MessageReceivedSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocialSoundSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialSoundSchema>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_FriendInviteReceivedSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialSoundSchema" },
		{ "ModuleRelativePath", "Public/SocialSoundSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_FriendInviteReceivedSound = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendInviteReceivedSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialSoundSchema, FriendInviteReceivedSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_FriendInviteReceivedSound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_FriendInviteReceivedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_PartyInviteReceivedSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialSoundSchema" },
		{ "ModuleRelativePath", "Public/SocialSoundSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_PartyInviteReceivedSound = { UE4CodeGen_Private::EPropertyClass::Struct, "PartyInviteReceivedSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialSoundSchema, PartyInviteReceivedSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_PartyInviteReceivedSound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_PartyInviteReceivedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_MessageReceivedSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialSoundSchema" },
		{ "ModuleRelativePath", "Public/SocialSoundSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_MessageReceivedSound = { UE4CodeGen_Private::EPropertyClass::Struct, "MessageReceivedSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialSoundSchema, MessageReceivedSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_MessageReceivedSound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_MessageReceivedSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_FriendInviteReceivedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_PartyInviteReceivedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::NewProp_MessageReceivedSound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"SocialSoundSchema",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSocialSoundSchema),
		alignof(FSocialSoundSchema),
		Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialSoundSchema()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialSoundSchema_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialSoundSchema"), sizeof(FSocialSoundSchema), Get_Z_Construct_UScriptStruct_FSocialSoundSchema_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialSoundSchema_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialSoundSchema_CRC() { return 3616364917U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
