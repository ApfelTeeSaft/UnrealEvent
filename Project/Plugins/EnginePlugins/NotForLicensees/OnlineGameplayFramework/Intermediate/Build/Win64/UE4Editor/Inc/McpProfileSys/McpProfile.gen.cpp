// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpProfile() {}
// Cross Module References
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfile_NoRegister();
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfileGroup_NoRegister();
// End Cross Module References
	void UMcpProfile::StaticRegisterNativesUMcpProfile()
	{
	}
	UClass* Z_Construct_UClass_UMcpProfile_NoRegister()
	{
		return UMcpProfile::StaticClass();
	}
	struct Z_Construct_UClass_UMcpProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommandRevision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileWriteLockExpireTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileWriteLockExpireTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProfileWriteLocked_MetaData[];
#endif
		static void NewProp_bProfileWriteLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProfileWriteLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullProfileQueryQueued_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FullProfileQueryQueued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ProfileRevision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProfileGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMocks_MetaData[];
#endif
		static void NewProp_bEnableMocks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProfileUnlockOperationPending_MetaData[];
#endif
		static void NewProp_bProfileUnlockOperationPending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProfileUnlockOperationPending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProfileLockOperationPending_MetaData[];
#endif
		static void NewProp_bProfileLockOperationPending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProfileLockOperationPending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowSubscriptionToNotificationsService_MetaData[];
#endif
		static void NewProp_AllowSubscriptionToNotificationsService_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowSubscriptionToNotificationsService;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMcpProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "McpProfile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_CommandRevision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_CommandRevision = { UE4CodeGen_Private::EPropertyClass::Int, "CommandRevision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfile, CommandRevision), METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_CommandRevision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_CommandRevision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileWriteLockExpireTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileWriteLockExpireTime = { UE4CodeGen_Private::EPropertyClass::Struct, "ProfileWriteLockExpireTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfile, ProfileWriteLockExpireTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileWriteLockExpireTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileWriteLockExpireTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileWriteLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	void Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileWriteLocked_SetBit(void* Obj)
	{
		((UMcpProfile*)Obj)->bProfileWriteLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileWriteLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bProfileWriteLocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMcpProfile), &Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileWriteLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileWriteLocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileWriteLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_FullProfileQueryQueued_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_FullProfileQueryQueued = { UE4CodeGen_Private::EPropertyClass::Int, "FullProfileQueryQueued", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfile, FullProfileQueryQueued), METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_FullProfileQueryQueued_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_FullProfileQueryQueued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileRevision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileRevision = { UE4CodeGen_Private::EPropertyClass::Int64, "ProfileRevision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMcpProfile, ProfileRevision), METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileRevision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileRevision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileId = { UE4CodeGen_Private::EPropertyClass::Str, "ProfileId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfile, ProfileId), METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileGroup = { UE4CodeGen_Private::EPropertyClass::Object, "ProfileGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfile, ProfileGroup), Z_Construct_UClass_UMcpProfileGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_bEnableMocks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
		{ "ToolTip", "Config ," },
	};
#endif
	void Z_Construct_UClass_UMcpProfile_Statics::NewProp_bEnableMocks_SetBit(void* Obj)
	{
		((UMcpProfile*)Obj)->bEnableMocks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_bEnableMocks = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableMocks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMcpProfile), &Z_Construct_UClass_UMcpProfile_Statics::NewProp_bEnableMocks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_bEnableMocks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_bEnableMocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileUnlockOperationPending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	void Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileUnlockOperationPending_SetBit(void* Obj)
	{
		((UMcpProfile*)Obj)->bProfileUnlockOperationPending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileUnlockOperationPending = { UE4CodeGen_Private::EPropertyClass::Bool, "bProfileUnlockOperationPending", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMcpProfile), &Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileUnlockOperationPending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileUnlockOperationPending_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileUnlockOperationPending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileLockOperationPending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	void Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileLockOperationPending_SetBit(void* Obj)
	{
		((UMcpProfile*)Obj)->bProfileLockOperationPending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileLockOperationPending = { UE4CodeGen_Private::EPropertyClass::Bool, "bProfileLockOperationPending", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMcpProfile), &Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileLockOperationPending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileLockOperationPending_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileLockOperationPending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_DebugName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_DebugName = { UE4CodeGen_Private::EPropertyClass::Str, "DebugName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfile, DebugName), METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_DebugName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_DebugName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfile_Statics::NewProp_AllowSubscriptionToNotificationsService_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfile" },
		{ "ModuleRelativePath", "Public/McpProfile.h" },
		{ "ToolTip", "Config ," },
	};
#endif
	void Z_Construct_UClass_UMcpProfile_Statics::NewProp_AllowSubscriptionToNotificationsService_SetBit(void* Obj)
	{
		((UMcpProfile*)Obj)->AllowSubscriptionToNotificationsService = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMcpProfile_Statics::NewProp_AllowSubscriptionToNotificationsService = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowSubscriptionToNotificationsService", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMcpProfile), &Z_Construct_UClass_UMcpProfile_Statics::NewProp_AllowSubscriptionToNotificationsService_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::NewProp_AllowSubscriptionToNotificationsService_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::NewProp_AllowSubscriptionToNotificationsService_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMcpProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_CommandRevision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileWriteLockExpireTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileWriteLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_FullProfileQueryQueued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileRevision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_ProfileGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_bEnableMocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileUnlockOperationPending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_bProfileLockOperationPending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_DebugName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfile_Statics::NewProp_AllowSubscriptionToNotificationsService,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMcpProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMcpProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMcpProfile_Statics::ClassParams = {
		&UMcpProfile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMcpProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMcpProfile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMcpProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMcpProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMcpProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMcpProfile, 2814912561);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMcpProfile(Z_Construct_UClass_UMcpProfile, &UMcpProfile::StaticClass, TEXT("/Script/McpProfileSys"), TEXT("UMcpProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMcpProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
