// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpProfileGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpProfileGroup() {}
// Cross Module References
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfileGroup_NoRegister();
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfileGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FProfileEntry();
// End Cross Module References
	void UMcpProfileGroup::StaticRegisterNativesUMcpProfileGroup()
	{
	}
	UClass* Z_Construct_UClass_UMcpProfileGroup_NoRegister()
	{
		return UMcpProfileGroup::StaticClass();
	}
	struct Z_Construct_UClass_UMcpProfileGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAsyncParseProfileUpdates_MetaData[];
#endif
		static void NewProp_bAsyncParseProfileUpdates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsyncParseProfileUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendProfileCommandRevisions_MetaData[];
#endif
		static void NewProp_bSendProfileCommandRevisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendProfileCommandRevisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyStashEndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApplyStashEndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubscribedToNotifications_MetaData[];
#endif
		static void NewProp_bSubscribedToNotifications_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubscribedToNotifications;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileWriteLockTimeoutSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileWriteLockTimeoutSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedProfilesString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LockedProfilesString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LockedProfiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedProfiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LockCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastContentVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastContentVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMcpVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastMcpVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileNotificationsStompTopic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileNotificationsStompTopic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsServer_MetaData[];
#endif
		static void NewProp_bIsServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProfileList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeeklyIntervalStartDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeeklyIntervalStartDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayMcpResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DelayMcpResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMcpProfileGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "McpProfileGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bAsyncParseProfileUpdates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
		{ "ToolTip", "Config ," },
	};
#endif
	void Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bAsyncParseProfileUpdates_SetBit(void* Obj)
	{
		((UMcpProfileGroup*)Obj)->bAsyncParseProfileUpdates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bAsyncParseProfileUpdates = { UE4CodeGen_Private::EPropertyClass::Bool, "bAsyncParseProfileUpdates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMcpProfileGroup), &Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bAsyncParseProfileUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bAsyncParseProfileUpdates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bAsyncParseProfileUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSendProfileCommandRevisions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
		{ "ToolTip", "Config ," },
	};
#endif
	void Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSendProfileCommandRevisions_SetBit(void* Obj)
	{
		((UMcpProfileGroup*)Obj)->bSendProfileCommandRevisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSendProfileCommandRevisions = { UE4CodeGen_Private::EPropertyClass::Bool, "bSendProfileCommandRevisions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMcpProfileGroup), &Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSendProfileCommandRevisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSendProfileCommandRevisions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSendProfileCommandRevisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ApplyStashEndPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
		{ "ToolTip", "Config ," },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ApplyStashEndPoint = { UE4CodeGen_Private::EPropertyClass::Str, "ApplyStashEndPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, ApplyStashEndPoint), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ApplyStashEndPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ApplyStashEndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSubscribedToNotifications_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	void Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSubscribedToNotifications_SetBit(void* Obj)
	{
		((UMcpProfileGroup*)Obj)->bSubscribedToNotifications = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSubscribedToNotifications = { UE4CodeGen_Private::EPropertyClass::Bool, "bSubscribedToNotifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMcpProfileGroup), &Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSubscribedToNotifications_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSubscribedToNotifications_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSubscribedToNotifications_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileWriteLockTimeoutSecs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
		{ "ToolTip", "Config ," },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileWriteLockTimeoutSecs = { UE4CodeGen_Private::EPropertyClass::Int, "ProfileWriteLockTimeoutSecs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, ProfileWriteLockTimeoutSecs), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileWriteLockTimeoutSecs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileWriteLockTimeoutSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfilesString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfilesString = { UE4CodeGen_Private::EPropertyClass::Str, "LockedProfilesString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, LockedProfilesString), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfilesString_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfilesString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "LockedProfiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, LockedProfiles), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LockedProfiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMcpProfile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockCode = { UE4CodeGen_Private::EPropertyClass::Str, "LockCode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, LockCode), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockCode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LocalTimeOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LocalTimeOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, LocalTimeOffset), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LocalTimeOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LocalTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastContentVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastContentVersion = { UE4CodeGen_Private::EPropertyClass::Str, "LastContentVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, LastContentVersion), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastContentVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastContentVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastMcpVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastMcpVersion = { UE4CodeGen_Private::EPropertyClass::Str, "LastMcpVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, LastMcpVersion), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastMcpVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastMcpVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileNotificationsStompTopic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
		{ "ToolTip", "Config ," },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileNotificationsStompTopic = { UE4CodeGen_Private::EPropertyClass::Str, "ProfileNotificationsStompTopic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, ProfileNotificationsStompTopic), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileNotificationsStompTopic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileNotificationsStompTopic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bIsServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	void Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bIsServer_SetBit(void* Obj)
	{
		((UMcpProfileGroup*)Obj)->bIsServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bIsServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsServer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMcpProfileGroup), &Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bIsServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bIsServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bIsServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_PlayerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, PlayerName), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_PlayerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileList = { UE4CodeGen_Private::EPropertyClass::Array, "ProfileList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, ProfileList), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ProfileList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProfileEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_WeeklyIntervalStartDay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
		{ "ToolTip", "Config ," },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_WeeklyIntervalStartDay = { UE4CodeGen_Private::EPropertyClass::Int, "WeeklyIntervalStartDay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, WeeklyIntervalStartDay), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_WeeklyIntervalStartDay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_WeeklyIntervalStartDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_DelayMcpResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileGroup" },
		{ "ModuleRelativePath", "Public/McpProfileGroup.h" },
		{ "ToolTip", "Config ," },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_DelayMcpResults = { UE4CodeGen_Private::EPropertyClass::Int, "DelayMcpResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileGroup, DelayMcpResults), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_DelayMcpResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_DelayMcpResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMcpProfileGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bAsyncParseProfileUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSendProfileCommandRevisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ApplyStashEndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bSubscribedToNotifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileWriteLockTimeoutSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfilesString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockedProfiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LockCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LocalTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastContentVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_LastMcpVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileNotificationsStompTopic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_bIsServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_ProfileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_WeeklyIntervalStartDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileGroup_Statics::NewProp_DelayMcpResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMcpProfileGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMcpProfileGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMcpProfileGroup_Statics::ClassParams = {
		&UMcpProfileGroup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMcpProfileGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMcpProfileGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMcpProfileGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMcpProfileGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMcpProfileGroup, 956128247);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMcpProfileGroup(Z_Construct_UClass_UMcpProfileGroup, &UMcpProfileGroup::StaticClass, TEXT("/Script/McpProfileSys"), TEXT("UMcpProfileGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMcpProfileGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
