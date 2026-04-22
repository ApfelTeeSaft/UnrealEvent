// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCOUNT_ELoginResult_generated_h
#error "ELoginResult.generated.h already included, missing '#pragma once' in ELoginResult.h"
#endif
#define ACCOUNT_ELoginResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_ELoginResult_h


#define FOREACH_ENUM_ELOGINRESULT(op) \
	op(ELoginResult::NotStarted) \
	op(ELoginResult::Pending) \
	op(ELoginResult::Success) \
	op(ELoginResult::Console_LoginFailed) \
	op(ELoginResult::Console_AuthFailed) \
	op(ELoginResult::Console_MissingAuthAssociation) \
	op(ELoginResult::Console_DuplicateAuthAssociation) \
	op(ELoginResult::Console_AddedAuthAssociation) \
	op(ELoginResult::Console_AuthAssociationFailure) \
	op(ELoginResult::Console_NotEntitled) \
	op(ELoginResult::Console_EntitlementCheckFailed) \
	op(ELoginResult::Console_PrivilegeCheck) \
	op(ELoginResult::Console_PatchOrUpdateRequired) \
	op(ELoginResult::AuthFailed) \
	op(ELoginResult::AuthFailed_RefreshInvalid) \
	op(ELoginResult::AuthFailed_InvalidMFA) \
	op(ELoginResult::AuthFailed_RequiresMFA) \
	op(ELoginResult::AuthParentalLock) \
	op(ELoginResult::PlatformNotAllowed) \
	op(ELoginResult::NotEntitled) \
	op(ELoginResult::Banned) \
	op(ELoginResult::EULACheckFailed) \
	op(ELoginResult::WaitingRoomFailed) \
	op(ELoginResult::ServiceUnavailable) \
	op(ELoginResult::GenericError) \
	op(ELoginResult::RejoinCheckFailure) \
	op(ELoginResult::ConnectionFailed) \
	op(ELoginResult::NetworkConnectionUnavailable) \
	op(ELoginResult::ExternalAuth_AddedAuthAssociation) \
	op(ELoginResult::ExternalAuth_ConnectionTimeout) \
	op(ELoginResult::ExternalAuth_AuthFailure) \
	op(ELoginResult::ExternalAuth_AssociationFailure) \
	op(ELoginResult::ExternalAuth_MissingAuthAssociation) \
	op(ELoginResult::FailedToCreateParty) \
	op(ELoginResult::ProfileQueryFailed) \
	op(ELoginResult::QueryKeychainFailed) \
	op(ELoginResult::ClientSettingsDownloadFailed) \
	op(ELoginResult::PinGrantFailure) \
	op(ELoginResult::PinGrantTimeout) \
	op(ELoginResult::PinGrantCanceled) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
