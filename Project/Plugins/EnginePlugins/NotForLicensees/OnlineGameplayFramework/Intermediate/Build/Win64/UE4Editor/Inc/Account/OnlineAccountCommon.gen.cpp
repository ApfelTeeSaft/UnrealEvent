// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/OnlineAccountCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineAccountCommon() {}
// Cross Module References
	ACCOUNT_API UClass* Z_Construct_UClass_UOnlineAccountCommon_NoRegister();
	ACCOUNT_API UClass* Z_Construct_UClass_UOnlineAccountCommon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Account();
	ACCOUNT_API UClass* Z_Construct_UClass_UWaitingRoomState_NoRegister();
	ACCOUNT_API UScriptStruct* Z_Construct_UScriptStruct_FWebEnvUrl();
// End Cross Module References
	void UOnlineAccountCommon::StaticRegisterNativesUOnlineAccountCommon()
	{
	}
	UClass* Z_Construct_UClass_UOnlineAccountCommon_NoRegister()
	{
		return UOnlineAccountCommon::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineAccountCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateHeadlessAccount_MetaData[];
#endif
		static void NewProp_bAutoCreateHeadlessAccount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateHeadlessAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingRoomState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaitingRoomState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessGrantDelaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccessGrantDelaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequireUGCPrivilege_MetaData[];
#endif
		static void NewProp_bRequireUGCPrivilege_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireUGCPrivilege;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowHomeSharingAccess_MetaData[];
#endif
		static void NewProp_bAllowHomeSharingAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowHomeSharingAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGameSubAccessRedemption_MetaData[];
#endif
		static void NewProp_bUseGameSubAccessRedemption_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGameSubAccessRedemption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldGrantFreeAccess_MetaData[];
#endif
		static void NewProp_bShouldGrantFreeAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldGrantFreeAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipRedeemOfflinePurchasesChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkipRedeemOfflinePurchasesChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePinGrantCodeForLinking_MetaData[];
#endif
		static void NewProp_bUsePinGrantCodeForLinking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePinGrantCodeForLinking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowLocalLogoutKairos_MetaData[];
#endif
		static void NewProp_bAllowLocalLogoutKairos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowLocalLogoutKairos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowLocalLogout_MetaData[];
#endif
		static void NewProp_bAllowLocalLogout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowLocalLogout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebCreateEpicAccountUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WebCreateEpicAccountUrl;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WebCreateEpicAccountUrl_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EulaKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EulaKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequireLightswitchAtStartup_MetaData[];
#endif
		static void NewProp_bRequireLightswitchAtStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireLightswitchAtStartup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailabilityServiceGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AvailabilityServiceGameName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineAccountCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Account,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineAccountCommon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAutoCreateHeadlessAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAutoCreateHeadlessAccount_SetBit(void* Obj)
	{
		((UOnlineAccountCommon*)Obj)->bAutoCreateHeadlessAccount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAutoCreateHeadlessAccount = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoCreateHeadlessAccount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOnlineAccountCommon), &Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAutoCreateHeadlessAccount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAutoCreateHeadlessAccount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAutoCreateHeadlessAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WaitingRoomState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WaitingRoomState = { UE4CodeGen_Private::EPropertyClass::Object, "WaitingRoomState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, STRUCT_OFFSET(UOnlineAccountCommon, WaitingRoomState), Z_Construct_UClass_UWaitingRoomState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WaitingRoomState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WaitingRoomState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AccessGrantDelaySeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AccessGrantDelaySeconds = { UE4CodeGen_Private::EPropertyClass::Float, "AccessGrantDelaySeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UOnlineAccountCommon, AccessGrantDelaySeconds), METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AccessGrantDelaySeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AccessGrantDelaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireUGCPrivilege_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireUGCPrivilege_SetBit(void* Obj)
	{
		((UOnlineAccountCommon*)Obj)->bRequireUGCPrivilege = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireUGCPrivilege = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequireUGCPrivilege", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOnlineAccountCommon), &Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireUGCPrivilege_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireUGCPrivilege_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireUGCPrivilege_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowHomeSharingAccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowHomeSharingAccess_SetBit(void* Obj)
	{
		((UOnlineAccountCommon*)Obj)->bAllowHomeSharingAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowHomeSharingAccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowHomeSharingAccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOnlineAccountCommon), &Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowHomeSharingAccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowHomeSharingAccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowHomeSharingAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUseGameSubAccessRedemption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUseGameSubAccessRedemption_SetBit(void* Obj)
	{
		((UOnlineAccountCommon*)Obj)->bUseGameSubAccessRedemption = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUseGameSubAccessRedemption = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGameSubAccessRedemption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOnlineAccountCommon), &Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUseGameSubAccessRedemption_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUseGameSubAccessRedemption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUseGameSubAccessRedemption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bShouldGrantFreeAccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bShouldGrantFreeAccess_SetBit(void* Obj)
	{
		((UOnlineAccountCommon*)Obj)->bShouldGrantFreeAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bShouldGrantFreeAccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldGrantFreeAccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOnlineAccountCommon), &Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bShouldGrantFreeAccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bShouldGrantFreeAccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bShouldGrantFreeAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_SkipRedeemOfflinePurchasesChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_SkipRedeemOfflinePurchasesChance = { UE4CodeGen_Private::EPropertyClass::Float, "SkipRedeemOfflinePurchasesChance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UOnlineAccountCommon, SkipRedeemOfflinePurchasesChance), METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_SkipRedeemOfflinePurchasesChance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_SkipRedeemOfflinePurchasesChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUsePinGrantCodeForLinking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUsePinGrantCodeForLinking_SetBit(void* Obj)
	{
		((UOnlineAccountCommon*)Obj)->bUsePinGrantCodeForLinking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUsePinGrantCodeForLinking = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePinGrantCodeForLinking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOnlineAccountCommon), &Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUsePinGrantCodeForLinking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUsePinGrantCodeForLinking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUsePinGrantCodeForLinking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogoutKairos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogoutKairos_SetBit(void* Obj)
	{
		((UOnlineAccountCommon*)Obj)->bAllowLocalLogoutKairos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogoutKairos = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowLocalLogoutKairos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOnlineAccountCommon), &Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogoutKairos_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogoutKairos_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogoutKairos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogout_SetBit(void* Obj)
	{
		((UOnlineAccountCommon*)Obj)->bAllowLocalLogout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogout = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowLocalLogout", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOnlineAccountCommon), &Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogout_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WebCreateEpicAccountUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WebCreateEpicAccountUrl = { UE4CodeGen_Private::EPropertyClass::Array, "WebCreateEpicAccountUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UOnlineAccountCommon, WebCreateEpicAccountUrl), METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WebCreateEpicAccountUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WebCreateEpicAccountUrl_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WebCreateEpicAccountUrl_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WebCreateEpicAccountUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWebEnvUrl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_EulaKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_EulaKey = { UE4CodeGen_Private::EPropertyClass::Str, "EulaKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UOnlineAccountCommon, EulaKey), METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_EulaKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_EulaKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireLightswitchAtStartup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireLightswitchAtStartup_SetBit(void* Obj)
	{
		((UOnlineAccountCommon*)Obj)->bRequireLightswitchAtStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireLightswitchAtStartup = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequireLightswitchAtStartup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOnlineAccountCommon), &Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireLightswitchAtStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireLightswitchAtStartup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireLightswitchAtStartup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AvailabilityServiceGameName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountCommon" },
		{ "ModuleRelativePath", "Public/OnlineAccountCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AvailabilityServiceGameName = { UE4CodeGen_Private::EPropertyClass::Str, "AvailabilityServiceGameName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UOnlineAccountCommon, AvailabilityServiceGameName), METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AvailabilityServiceGameName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AvailabilityServiceGameName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineAccountCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAutoCreateHeadlessAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WaitingRoomState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AccessGrantDelaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireUGCPrivilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowHomeSharingAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUseGameSubAccessRedemption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bShouldGrantFreeAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_SkipRedeemOfflinePurchasesChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bUsePinGrantCodeForLinking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogoutKairos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bAllowLocalLogout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WebCreateEpicAccountUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_WebCreateEpicAccountUrl_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_EulaKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_bRequireLightswitchAtStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineAccountCommon_Statics::NewProp_AvailabilityServiceGameName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineAccountCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineAccountCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineAccountCommon_Statics::ClassParams = {
		&UOnlineAccountCommon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A4u,
		nullptr, 0,
		Z_Construct_UClass_UOnlineAccountCommon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineAccountCommon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOnlineAccountCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineAccountCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineAccountCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineAccountCommon, 1126222139);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineAccountCommon(Z_Construct_UClass_UOnlineAccountCommon, &UOnlineAccountCommon::StaticClass, TEXT("/Script/Account"), TEXT("UOnlineAccountCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineAccountCommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
