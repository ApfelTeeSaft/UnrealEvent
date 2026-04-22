// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALUMG_SocialChatTextCommittedDelegate_generated_h
#error "SocialChatTextCommittedDelegate.generated.h already included, missing '#pragma once' in SocialChatTextCommittedDelegate.h"
#endif
#define SOCIALUMG_SocialChatTextCommittedDelegate_generated_h

#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatTextCommittedDelegate_h_6_DELEGATE \
struct _Script_SocialUMG_eventSocialChatTextCommitted_Parms \
{ \
	FText Text; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FSocialChatTextCommitted_DelegateWrapper(const FMulticastScriptDelegate& SocialChatTextCommitted, FText const& Text, ETextCommit::Type CommitMethod) \
{ \
	_Script_SocialUMG_eventSocialChatTextCommitted_Parms Parms; \
	Parms.Text=Text; \
	Parms.CommitMethod=CommitMethod; \
	SocialChatTextCommitted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatTextCommittedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
