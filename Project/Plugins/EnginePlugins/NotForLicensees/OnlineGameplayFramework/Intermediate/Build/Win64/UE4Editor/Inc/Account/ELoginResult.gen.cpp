// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/ELoginResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELoginResult() {}
// Cross Module References
	ACCOUNT_API UEnum* Z_Construct_UEnum_Account_ELoginResult();
	UPackage* Z_Construct_UPackage__Script_Account();
// End Cross Module References
	static UEnum* ELoginResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Account_ELoginResult, Z_Construct_UPackage__Script_Account(), TEXT("ELoginResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoginResult(ELoginResult_StaticEnum, TEXT("/Script/Account"), TEXT("ELoginResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Account_ELoginResult_CRC() { return 1338006712U; }
	UEnum* Z_Construct_UEnum_Account_ELoginResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Account();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoginResult"), 0, Get_Z_Construct_UEnum_Account_ELoginResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoginResult::NotStarted", (int64)ELoginResult::NotStarted },
				{ "ELoginResult::Pending", (int64)ELoginResult::Pending },
				{ "ELoginResult::Success", (int64)ELoginResult::Success },
				{ "ELoginResult::Console_LoginFailed", (int64)ELoginResult::Console_LoginFailed },
				{ "ELoginResult::Console_AuthFailed", (int64)ELoginResult::Console_AuthFailed },
				{ "ELoginResult::Console_MissingAuthAssociation", (int64)ELoginResult::Console_MissingAuthAssociation },
				{ "ELoginResult::Console_DuplicateAuthAssociation", (int64)ELoginResult::Console_DuplicateAuthAssociation },
				{ "ELoginResult::Console_AddedAuthAssociation", (int64)ELoginResult::Console_AddedAuthAssociation },
				{ "ELoginResult::Console_AuthAssociationFailure", (int64)ELoginResult::Console_AuthAssociationFailure },
				{ "ELoginResult::Console_NotEntitled", (int64)ELoginResult::Console_NotEntitled },
				{ "ELoginResult::Console_EntitlementCheckFailed", (int64)ELoginResult::Console_EntitlementCheckFailed },
				{ "ELoginResult::Console_PrivilegeCheck", (int64)ELoginResult::Console_PrivilegeCheck },
				{ "ELoginResult::Console_PatchOrUpdateRequired", (int64)ELoginResult::Console_PatchOrUpdateRequired },
				{ "ELoginResult::AuthFailed", (int64)ELoginResult::AuthFailed },
				{ "ELoginResult::AuthFailed_RefreshInvalid", (int64)ELoginResult::AuthFailed_RefreshInvalid },
				{ "ELoginResult::AuthFailed_InvalidMFA", (int64)ELoginResult::AuthFailed_InvalidMFA },
				{ "ELoginResult::AuthFailed_RequiresMFA", (int64)ELoginResult::AuthFailed_RequiresMFA },
				{ "ELoginResult::AuthParentalLock", (int64)ELoginResult::AuthParentalLock },
				{ "ELoginResult::PlatformNotAllowed", (int64)ELoginResult::PlatformNotAllowed },
				{ "ELoginResult::NotEntitled", (int64)ELoginResult::NotEntitled },
				{ "ELoginResult::Banned", (int64)ELoginResult::Banned },
				{ "ELoginResult::EULACheckFailed", (int64)ELoginResult::EULACheckFailed },
				{ "ELoginResult::WaitingRoomFailed", (int64)ELoginResult::WaitingRoomFailed },
				{ "ELoginResult::ServiceUnavailable", (int64)ELoginResult::ServiceUnavailable },
				{ "ELoginResult::GenericError", (int64)ELoginResult::GenericError },
				{ "ELoginResult::RejoinCheckFailure", (int64)ELoginResult::RejoinCheckFailure },
				{ "ELoginResult::ConnectionFailed", (int64)ELoginResult::ConnectionFailed },
				{ "ELoginResult::NetworkConnectionUnavailable", (int64)ELoginResult::NetworkConnectionUnavailable },
				{ "ELoginResult::ExternalAuth_AddedAuthAssociation", (int64)ELoginResult::ExternalAuth_AddedAuthAssociation },
				{ "ELoginResult::ExternalAuth_ConnectionTimeout", (int64)ELoginResult::ExternalAuth_ConnectionTimeout },
				{ "ELoginResult::ExternalAuth_AuthFailure", (int64)ELoginResult::ExternalAuth_AuthFailure },
				{ "ELoginResult::ExternalAuth_AssociationFailure", (int64)ELoginResult::ExternalAuth_AssociationFailure },
				{ "ELoginResult::ExternalAuth_MissingAuthAssociation", (int64)ELoginResult::ExternalAuth_MissingAuthAssociation },
				{ "ELoginResult::FailedToCreateParty", (int64)ELoginResult::FailedToCreateParty },
				{ "ELoginResult::ProfileQueryFailed", (int64)ELoginResult::ProfileQueryFailed },
				{ "ELoginResult::QueryKeychainFailed", (int64)ELoginResult::QueryKeychainFailed },
				{ "ELoginResult::ClientSettingsDownloadFailed", (int64)ELoginResult::ClientSettingsDownloadFailed },
				{ "ELoginResult::PinGrantFailure", (int64)ELoginResult::PinGrantFailure },
				{ "ELoginResult::PinGrantTimeout", (int64)ELoginResult::PinGrantTimeout },
				{ "ELoginResult::PinGrantCanceled", (int64)ELoginResult::PinGrantCanceled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ELoginResult.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Account,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELoginResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELoginResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
