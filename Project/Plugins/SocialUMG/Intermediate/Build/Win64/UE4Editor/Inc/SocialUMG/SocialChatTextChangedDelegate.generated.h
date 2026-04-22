// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALUMG_SocialChatTextChangedDelegate_generated_h
#error "SocialChatTextChangedDelegate.generated.h already included, missing '#pragma once' in SocialChatTextChangedDelegate.h"
#endif
#define SOCIALUMG_SocialChatTextChangedDelegate_generated_h

#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatTextChangedDelegate_h_5_DELEGATE \
struct _Script_SocialUMG_eventSocialChatTextChanged_Parms \
{ \
	FText Text; \
}; \
static inline void FSocialChatTextChanged_DelegateWrapper(const FMulticastScriptDelegate& SocialChatTextChanged, FText const& Text) \
{ \
	_Script_SocialUMG_eventSocialChatTextChanged_Parms Parms; \
	Parms.Text=Text; \
	SocialChatTextChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatTextChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
