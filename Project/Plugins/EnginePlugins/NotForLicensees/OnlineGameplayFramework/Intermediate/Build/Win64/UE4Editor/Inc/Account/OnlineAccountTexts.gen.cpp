// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/OnlineAccountTexts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineAccountTexts() {}
// Cross Module References
	ACCOUNT_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountTexts();
	UPackage* Z_Construct_UPackage__Script_Account();
	ACCOUNT_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole();
// End Cross Module References
class UScriptStruct* FOnlineAccountTexts::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCOUNT_API uint32 Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineAccountTexts, Z_Construct_UPackage__Script_Account(), TEXT("OnlineAccountTexts"), sizeof(FOnlineAccountTexts), Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnlineAccountTexts(FOnlineAccountTexts::StaticStruct, TEXT("/Script/Account"), TEXT("OnlineAccountTexts"), false, nullptr, nullptr);
static struct FScriptStruct_Account_StaticRegisterNativesFOnlineAccountTexts
{
	FScriptStruct_Account_StaticRegisterNativesFOnlineAccountTexts()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnlineAccountTexts")),new UScriptStruct::TCppStructOps<FOnlineAccountTexts>);
	}
} ScriptStruct_Account_StaticRegisterNativesFOnlineAccountTexts;
	struct Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnableToQueryReceipts_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnableToQueryReceipts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtAuthMissingAuthAssociation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExtAuthMissingAuthAssociation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtAuthTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExtAuthTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtAuthAssociationFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExtAuthAssociationFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtAuthFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExtAuthFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtAuthCanceled_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExtAuthCanceled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateDeviceAuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CreateDeviceAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoggingInExternalAuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoggingInExternalAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginConsole_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FailedLoginConsole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingRoomWaiting_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WaitingRoomWaiting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingRoomFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WaitingRoomFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingRoomError_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WaitingRoomError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WaitingRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserLoginFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UserLoginFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlinkConsoleFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnlinkConsoleFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnexpectedConsoleAuthFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnexpectedConsoleAuthFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnableToJoinWaitingRoomLoginQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnableToJoinWaitingRoomLoginQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnableToConnect_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnableToConnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenExpired_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TokenExpired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignIntoConsoleServices_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SignIntoConsoleServices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignInCompleting_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SignInCompleting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceDowntime_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ServiceDowntime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedeemOfflinePurchases_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RedeemOfflinePurchases;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumAccountName_XboxOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PremiumAccountName_XboxOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumAccountName_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PremiumAccountName_Switch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumAccountName_PS4_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PremiumAccountName_PS4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumAccountName_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PremiumAccountName_Default;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAccessRevoked_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlayAccessRevoked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoServerAccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NoServerAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoPlayEntitlement_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NoPlayEntitlement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkConnectionUnavailable_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NetworkConnectionUnavailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightswitchCheckNetworkFailureMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LightswitchCheckNetworkFailureMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MCPTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MCPTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LostConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogoutCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LogoutCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Logout_Unlink_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Logout_Unlink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoginFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginConsole_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoginConsole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoggingOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoggingOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoggingInConsoleAuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoggingInConsoleAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoggingIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoggingIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoggedOutSwitchedProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoggedOutSwitchedProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoggedOutReturnedToTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoggedOutReturnedToTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisconnectedFromMCP_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisconnectedFromMCP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoggedOutofMCP_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoggedOutofMCP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InvalidUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMatchShutdownTimeWarningText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InMatchShutdownTimeWarningText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadlessAccountFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeadlessAccountFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalChatJoinedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GlobalChatJoinedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalChatExitedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GlobalChatExitedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralLoginFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GeneralLoginFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GameDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FounderChatJoinedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FounderChatJoinedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FounderChatExitedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FounderChatExitedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedStartLogin_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedStartLogin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginTencent_WeGameSystemOffline_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginTencent_WeGameSystemOffline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginTencent_FailedToInitializeWeGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginTencent_FailedToInitializeWeGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginTencent_NotSignedInToWeGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginTencent_NotSignedInToWeGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginTencent_UnableToSignIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginTencent_UnableToSignIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginMsg_InvalidRefreshToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginMsg_InvalidRefreshToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedInvalidMFA_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedInvalidMFA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginRequiresAuthAppMFA_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginRequiresAuthAppMFA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginRequiresMFA_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginRequiresMFA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginLockoutMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginLockoutMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginNoRealId_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginNoRealId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginParentalLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginParentalLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedLoginCredentialsMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedLoginCredentialsMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedEulaCheck_MustAcceptEula_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedEulaCheck_MustAcceptEula;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedEulaCheck_EulaAcceptanceFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedEulaCheck_EulaAcceptanceFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedAccountCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedAccountCreate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExchangeConsolePurchaseForAccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExchangeConsolePurchaseForAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExchangeConsoleGiftsForAccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExchangeConsoleGiftsForAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EulaCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EulaCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuplicateAuthAssociaton_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DuplicateAuthAssociaton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DowntimeSecondsWarningText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DowntimeSecondsWarningText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DowntimeMinutesWarningText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DowntimeMinutesWarningText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoQosPingTests_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DoQosPingTests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateHeadless_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CreateHeadless;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateAccountFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CreateAccountFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateAccountCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CreateAccountCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsolePrivileges_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ConsolePrivileges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckServiceAvailability_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CheckServiceAvailability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckingRejoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CheckingRejoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckEntitledToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CheckEntitledToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannedFromGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BannedFromGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLoginFailedMobile_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AutoLoginFailedMobile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLoginFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AutoLoginFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociateConsoleAuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AssociateConsoleAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllGiftCodesUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AllGiftCodesUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineAccountTexts>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToQueryReceipts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToQueryReceipts = { UE4CodeGen_Private::EPropertyClass::Text, "UnableToQueryReceipts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, UnableToQueryReceipts), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToQueryReceipts_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToQueryReceipts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthMissingAuthAssociation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthMissingAuthAssociation = { UE4CodeGen_Private::EPropertyClass::Text, "ExtAuthMissingAuthAssociation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, ExtAuthMissingAuthAssociation), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthMissingAuthAssociation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthMissingAuthAssociation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthTimeout = { UE4CodeGen_Private::EPropertyClass::Text, "ExtAuthTimeout", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, ExtAuthTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthTimeout_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthAssociationFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthAssociationFailure = { UE4CodeGen_Private::EPropertyClass::Text, "ExtAuthAssociationFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, ExtAuthAssociationFailure), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthAssociationFailure_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthAssociationFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthFailure = { UE4CodeGen_Private::EPropertyClass::Text, "ExtAuthFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, ExtAuthFailure), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthFailure_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthCanceled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthCanceled = { UE4CodeGen_Private::EPropertyClass::Text, "ExtAuthCanceled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, ExtAuthCanceled), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthCanceled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthCanceled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateDeviceAuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateDeviceAuth = { UE4CodeGen_Private::EPropertyClass::Text, "CreateDeviceAuth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, CreateDeviceAuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateDeviceAuth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateDeviceAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInExternalAuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInExternalAuth = { UE4CodeGen_Private::EPropertyClass::Text, "LoggingInExternalAuth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LoggingInExternalAuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInExternalAuth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInExternalAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginConsole_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginConsole = { UE4CodeGen_Private::EPropertyClass::Struct, "FailedLoginConsole", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginConsole), Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginConsole_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginConsole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomWaiting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomWaiting = { UE4CodeGen_Private::EPropertyClass::Text, "WaitingRoomWaiting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, WaitingRoomWaiting), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomWaiting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomWaiting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomFailure = { UE4CodeGen_Private::EPropertyClass::Text, "WaitingRoomFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, WaitingRoomFailure), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomFailure_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomError = { UE4CodeGen_Private::EPropertyClass::Text, "WaitingRoomError", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, WaitingRoomError), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomError_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoom = { UE4CodeGen_Private::EPropertyClass::Text, "WaitingRoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, WaitingRoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UserLoginFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UserLoginFailed = { UE4CodeGen_Private::EPropertyClass::Text, "UserLoginFailed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, UserLoginFailed), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UserLoginFailed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UserLoginFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnlinkConsoleFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnlinkConsoleFailed = { UE4CodeGen_Private::EPropertyClass::Text, "UnlinkConsoleFailed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, UnlinkConsoleFailed), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnlinkConsoleFailed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnlinkConsoleFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnexpectedConsoleAuthFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnexpectedConsoleAuthFailure = { UE4CodeGen_Private::EPropertyClass::Text, "UnexpectedConsoleAuthFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, UnexpectedConsoleAuthFailure), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnexpectedConsoleAuthFailure_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnexpectedConsoleAuthFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToJoinWaitingRoomLoginQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToJoinWaitingRoomLoginQueue = { UE4CodeGen_Private::EPropertyClass::Text, "UnableToJoinWaitingRoomLoginQueue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, UnableToJoinWaitingRoomLoginQueue), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToJoinWaitingRoomLoginQueue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToJoinWaitingRoomLoginQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToConnect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToConnect = { UE4CodeGen_Private::EPropertyClass::Text, "UnableToConnect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, UnableToConnect), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToConnect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToConnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_TokenExpired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_TokenExpired = { UE4CodeGen_Private::EPropertyClass::Text, "TokenExpired", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, TokenExpired), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_TokenExpired_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_TokenExpired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignIntoConsoleServices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignIntoConsoleServices = { UE4CodeGen_Private::EPropertyClass::Text, "SignIntoConsoleServices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, SignIntoConsoleServices), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignIntoConsoleServices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignIntoConsoleServices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignInCompleting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignInCompleting = { UE4CodeGen_Private::EPropertyClass::Text, "SignInCompleting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, SignInCompleting), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignInCompleting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignInCompleting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ServiceDowntime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ServiceDowntime = { UE4CodeGen_Private::EPropertyClass::Text, "ServiceDowntime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, ServiceDowntime), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ServiceDowntime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ServiceDowntime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_RedeemOfflinePurchases_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_RedeemOfflinePurchases = { UE4CodeGen_Private::EPropertyClass::Text, "RedeemOfflinePurchases", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, RedeemOfflinePurchases), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_RedeemOfflinePurchases_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_RedeemOfflinePurchases_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_XboxOne_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_XboxOne = { UE4CodeGen_Private::EPropertyClass::Text, "PremiumAccountName_XboxOne", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, PremiumAccountName_XboxOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_XboxOne_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_XboxOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Switch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Switch = { UE4CodeGen_Private::EPropertyClass::Text, "PremiumAccountName_Switch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, PremiumAccountName_Switch), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Switch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Switch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_PS4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_PS4 = { UE4CodeGen_Private::EPropertyClass::Text, "PremiumAccountName_PS4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, PremiumAccountName_PS4), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_PS4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_PS4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Default = { UE4CodeGen_Private::EPropertyClass::Text, "PremiumAccountName_Default", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, PremiumAccountName_Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Default_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Default_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PlayAccessRevoked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PlayAccessRevoked = { UE4CodeGen_Private::EPropertyClass::Text, "PlayAccessRevoked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, PlayAccessRevoked), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PlayAccessRevoked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PlayAccessRevoked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoServerAccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoServerAccess = { UE4CodeGen_Private::EPropertyClass::Text, "NoServerAccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, NoServerAccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoServerAccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoServerAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoPlayEntitlement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoPlayEntitlement = { UE4CodeGen_Private::EPropertyClass::Text, "NoPlayEntitlement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, NoPlayEntitlement), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoPlayEntitlement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoPlayEntitlement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NetworkConnectionUnavailable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NetworkConnectionUnavailable = { UE4CodeGen_Private::EPropertyClass::Text, "NetworkConnectionUnavailable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, NetworkConnectionUnavailable), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NetworkConnectionUnavailable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NetworkConnectionUnavailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LightswitchCheckNetworkFailureMsg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LightswitchCheckNetworkFailureMsg = { UE4CodeGen_Private::EPropertyClass::Text, "LightswitchCheckNetworkFailureMsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LightswitchCheckNetworkFailureMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LightswitchCheckNetworkFailureMsg_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LightswitchCheckNetworkFailureMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_MCPTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_MCPTimeout = { UE4CodeGen_Private::EPropertyClass::Text, "MCPTimeout", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, MCPTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_MCPTimeout_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_MCPTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LostConnection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LostConnection = { UE4CodeGen_Private::EPropertyClass::Text, "LostConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LostConnection), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LostConnection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LostConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LogoutCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LogoutCompleted = { UE4CodeGen_Private::EPropertyClass::Text, "LogoutCompleted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LogoutCompleted), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LogoutCompleted_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LogoutCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_Logout_Unlink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_Logout_Unlink = { UE4CodeGen_Private::EPropertyClass::Text, "Logout_Unlink", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, Logout_Unlink), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_Logout_Unlink_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_Logout_Unlink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginFailure = { UE4CodeGen_Private::EPropertyClass::Text, "LoginFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LoginFailure), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginFailure_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginConsole_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginConsole = { UE4CodeGen_Private::EPropertyClass::Text, "LoginConsole", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LoginConsole), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginConsole_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginConsole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingOut = { UE4CodeGen_Private::EPropertyClass::Text, "LoggingOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LoggingOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingOut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInConsoleAuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInConsoleAuth = { UE4CodeGen_Private::EPropertyClass::Text, "LoggingInConsoleAuth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LoggingInConsoleAuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInConsoleAuth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInConsoleAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingIn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingIn = { UE4CodeGen_Private::EPropertyClass::Text, "LoggingIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LoggingIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutSwitchedProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutSwitchedProfile = { UE4CodeGen_Private::EPropertyClass::Text, "LoggedOutSwitchedProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LoggedOutSwitchedProfile), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutSwitchedProfile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutSwitchedProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutReturnedToTitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutReturnedToTitle = { UE4CodeGen_Private::EPropertyClass::Text, "LoggedOutReturnedToTitle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LoggedOutReturnedToTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutReturnedToTitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutReturnedToTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DisconnectedFromMCP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DisconnectedFromMCP = { UE4CodeGen_Private::EPropertyClass::Text, "DisconnectedFromMCP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, DisconnectedFromMCP), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DisconnectedFromMCP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DisconnectedFromMCP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutofMCP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutofMCP = { UE4CodeGen_Private::EPropertyClass::Text, "LoggedOutofMCP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, LoggedOutofMCP), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutofMCP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutofMCP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InvalidUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InvalidUser = { UE4CodeGen_Private::EPropertyClass::Text, "InvalidUser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, InvalidUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InvalidUser_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InvalidUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InMatchShutdownTimeWarningText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InMatchShutdownTimeWarningText = { UE4CodeGen_Private::EPropertyClass::Text, "InMatchShutdownTimeWarningText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, InMatchShutdownTimeWarningText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InMatchShutdownTimeWarningText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InMatchShutdownTimeWarningText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_HeadlessAccountFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_HeadlessAccountFailed = { UE4CodeGen_Private::EPropertyClass::Text, "HeadlessAccountFailed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, HeadlessAccountFailed), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_HeadlessAccountFailed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_HeadlessAccountFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatJoinedText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatJoinedText = { UE4CodeGen_Private::EPropertyClass::Text, "GlobalChatJoinedText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, GlobalChatJoinedText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatJoinedText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatJoinedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatExitedText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatExitedText = { UE4CodeGen_Private::EPropertyClass::Text, "GlobalChatExitedText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, GlobalChatExitedText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatExitedText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatExitedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GeneralLoginFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GeneralLoginFailure = { UE4CodeGen_Private::EPropertyClass::Text, "GeneralLoginFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, GeneralLoginFailure), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GeneralLoginFailure_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GeneralLoginFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GameDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GameDisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "GameDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, GameDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GameDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GameDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatJoinedText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatJoinedText = { UE4CodeGen_Private::EPropertyClass::Text, "FounderChatJoinedText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FounderChatJoinedText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatJoinedText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatJoinedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatExitedText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatExitedText = { UE4CodeGen_Private::EPropertyClass::Text, "FounderChatExitedText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FounderChatExitedText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatExitedText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatExitedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedStartLogin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedStartLogin = { UE4CodeGen_Private::EPropertyClass::Text, "FailedStartLogin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedStartLogin), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedStartLogin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedStartLogin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_WeGameSystemOffline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_WeGameSystemOffline = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginTencent_WeGameSystemOffline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginTencent_WeGameSystemOffline), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_WeGameSystemOffline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_WeGameSystemOffline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_FailedToInitializeWeGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_FailedToInitializeWeGame = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginTencent_FailedToInitializeWeGame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginTencent_FailedToInitializeWeGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_FailedToInitializeWeGame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_FailedToInitializeWeGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_NotSignedInToWeGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_NotSignedInToWeGame = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginTencent_NotSignedInToWeGame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginTencent_NotSignedInToWeGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_NotSignedInToWeGame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_NotSignedInToWeGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_UnableToSignIn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_UnableToSignIn = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginTencent_UnableToSignIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginTencent_UnableToSignIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_UnableToSignIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_UnableToSignIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg_InvalidRefreshToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg_InvalidRefreshToken = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginMsg_InvalidRefreshToken", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginMsg_InvalidRefreshToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg_InvalidRefreshToken_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg_InvalidRefreshToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginMsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedInvalidMFA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedInvalidMFA = { UE4CodeGen_Private::EPropertyClass::Text, "FailedInvalidMFA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedInvalidMFA), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedInvalidMFA_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedInvalidMFA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresAuthAppMFA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresAuthAppMFA = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginRequiresAuthAppMFA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginRequiresAuthAppMFA), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresAuthAppMFA_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresAuthAppMFA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresMFA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresMFA = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginRequiresMFA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginRequiresMFA), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresMFA_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresMFA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginLockoutMsg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginLockoutMsg = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginLockoutMsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginLockoutMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginLockoutMsg_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginLockoutMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginNoRealId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginNoRealId = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginNoRealId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginNoRealId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginNoRealId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginNoRealId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginParentalLock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginParentalLock = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginParentalLock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginParentalLock), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginParentalLock_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginParentalLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginCredentialsMsg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginCredentialsMsg = { UE4CodeGen_Private::EPropertyClass::Text, "FailedLoginCredentialsMsg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedLoginCredentialsMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginCredentialsMsg_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginCredentialsMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_MustAcceptEula_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_MustAcceptEula = { UE4CodeGen_Private::EPropertyClass::Text, "FailedEulaCheck_MustAcceptEula", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedEulaCheck_MustAcceptEula), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_MustAcceptEula_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_MustAcceptEula_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_EulaAcceptanceFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_EulaAcceptanceFailed = { UE4CodeGen_Private::EPropertyClass::Text, "FailedEulaCheck_EulaAcceptanceFailed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedEulaCheck_EulaAcceptanceFailed), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_EulaAcceptanceFailed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_EulaAcceptanceFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedAccountCreate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedAccountCreate = { UE4CodeGen_Private::EPropertyClass::Text, "FailedAccountCreate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, FailedAccountCreate), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedAccountCreate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedAccountCreate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsolePurchaseForAccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsolePurchaseForAccess = { UE4CodeGen_Private::EPropertyClass::Text, "ExchangeConsolePurchaseForAccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, ExchangeConsolePurchaseForAccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsolePurchaseForAccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsolePurchaseForAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsoleGiftsForAccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsoleGiftsForAccess = { UE4CodeGen_Private::EPropertyClass::Text, "ExchangeConsoleGiftsForAccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, ExchangeConsoleGiftsForAccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsoleGiftsForAccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsoleGiftsForAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_EulaCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_EulaCheck = { UE4CodeGen_Private::EPropertyClass::Text, "EulaCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, EulaCheck), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_EulaCheck_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_EulaCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DuplicateAuthAssociaton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DuplicateAuthAssociaton = { UE4CodeGen_Private::EPropertyClass::Text, "DuplicateAuthAssociaton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, DuplicateAuthAssociaton), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DuplicateAuthAssociaton_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DuplicateAuthAssociaton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeSecondsWarningText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeSecondsWarningText = { UE4CodeGen_Private::EPropertyClass::Text, "DowntimeSecondsWarningText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, DowntimeSecondsWarningText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeSecondsWarningText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeSecondsWarningText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeMinutesWarningText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeMinutesWarningText = { UE4CodeGen_Private::EPropertyClass::Text, "DowntimeMinutesWarningText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, DowntimeMinutesWarningText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeMinutesWarningText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeMinutesWarningText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DoQosPingTests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DoQosPingTests = { UE4CodeGen_Private::EPropertyClass::Text, "DoQosPingTests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, DoQosPingTests), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DoQosPingTests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DoQosPingTests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateHeadless_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateHeadless = { UE4CodeGen_Private::EPropertyClass::Text, "CreateHeadless", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, CreateHeadless), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateHeadless_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateHeadless_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountFailure = { UE4CodeGen_Private::EPropertyClass::Text, "CreateAccountFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, CreateAccountFailure), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountFailure_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountCompleted = { UE4CodeGen_Private::EPropertyClass::Text, "CreateAccountCompleted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, CreateAccountCompleted), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountCompleted_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ConsolePrivileges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ConsolePrivileges = { UE4CodeGen_Private::EPropertyClass::Text, "ConsolePrivileges", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, ConsolePrivileges), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ConsolePrivileges_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ConsolePrivileges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckServiceAvailability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckServiceAvailability = { UE4CodeGen_Private::EPropertyClass::Text, "CheckServiceAvailability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, CheckServiceAvailability), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckServiceAvailability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckServiceAvailability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckingRejoin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckingRejoin = { UE4CodeGen_Private::EPropertyClass::Text, "CheckingRejoin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, CheckingRejoin), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckingRejoin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckingRejoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckEntitledToPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckEntitledToPlay = { UE4CodeGen_Private::EPropertyClass::Text, "CheckEntitledToPlay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, CheckEntitledToPlay), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckEntitledToPlay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckEntitledToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_BannedFromGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_BannedFromGame = { UE4CodeGen_Private::EPropertyClass::Text, "BannedFromGame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, BannedFromGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_BannedFromGame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_BannedFromGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailedMobile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailedMobile = { UE4CodeGen_Private::EPropertyClass::Text, "AutoLoginFailedMobile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, AutoLoginFailedMobile), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailedMobile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailedMobile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailed = { UE4CodeGen_Private::EPropertyClass::Text, "AutoLoginFailed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, AutoLoginFailed), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AssociateConsoleAuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AssociateConsoleAuth = { UE4CodeGen_Private::EPropertyClass::Text, "AssociateConsoleAuth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, AssociateConsoleAuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AssociateConsoleAuth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AssociateConsoleAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AllGiftCodesUsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AllGiftCodesUsed = { UE4CodeGen_Private::EPropertyClass::Text, "AllGiftCodesUsed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts, AllGiftCodesUsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AllGiftCodesUsed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AllGiftCodesUsed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToQueryReceipts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthMissingAuthAssociation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthAssociationFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExtAuthCanceled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateDeviceAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInExternalAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginConsole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomWaiting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoomError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_WaitingRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UserLoginFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnlinkConsoleFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnexpectedConsoleAuthFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToJoinWaitingRoomLoginQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_UnableToConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_TokenExpired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignIntoConsoleServices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_SignInCompleting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ServiceDowntime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_RedeemOfflinePurchases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_XboxOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_PS4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PremiumAccountName_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_PlayAccessRevoked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoServerAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NoPlayEntitlement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_NetworkConnectionUnavailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LightswitchCheckNetworkFailureMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_MCPTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LostConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LogoutCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_Logout_Unlink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoginConsole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingInConsoleAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggingIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutSwitchedProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutReturnedToTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DisconnectedFromMCP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_LoggedOutofMCP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InvalidUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_InMatchShutdownTimeWarningText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_HeadlessAccountFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatJoinedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GlobalChatExitedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GeneralLoginFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_GameDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatJoinedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FounderChatExitedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedStartLogin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_WeGameSystemOffline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_FailedToInitializeWeGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_NotSignedInToWeGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginTencent_UnableToSignIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg_InvalidRefreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedInvalidMFA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresAuthAppMFA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginRequiresMFA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginLockoutMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginNoRealId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginParentalLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedLoginCredentialsMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_MustAcceptEula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedEulaCheck_EulaAcceptanceFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_FailedAccountCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsolePurchaseForAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ExchangeConsoleGiftsForAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_EulaCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DuplicateAuthAssociaton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeSecondsWarningText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DowntimeMinutesWarningText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_DoQosPingTests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateHeadless,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CreateAccountCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_ConsolePrivileges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckServiceAvailability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckingRejoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_CheckEntitledToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_BannedFromGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailedMobile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AutoLoginFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AssociateConsoleAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::NewProp_AllGiftCodesUsed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Account,
		nullptr,
		&NewStructOps,
		"OnlineAccountTexts",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FOnlineAccountTexts),
		alignof(FOnlineAccountTexts),
		Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountTexts()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Account();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnlineAccountTexts"), sizeof(FOnlineAccountTexts), Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnlineAccountTexts_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_CRC() { return 1242295499U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
