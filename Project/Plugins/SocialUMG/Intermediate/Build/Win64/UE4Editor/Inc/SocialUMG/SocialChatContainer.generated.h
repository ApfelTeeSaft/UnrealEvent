// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALUMG_SocialChatContainer_generated_h
#error "SocialChatContainer.generated.h already included, missing '#pragma once' in SocialChatContainer.h"
#endif
#define SOCIALUMG_SocialChatContainer_generated_h

#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDynamicHandleMessageTextCommitted) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_MessageText); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CommitMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DynamicHandleMessageTextCommitted(Z_Param_Out_MessageText,ETextCommit::Type(Z_Param_CommitMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFocusEditableText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FocusEditableText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleLeftTabPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleLeftTabPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleRightTabPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleRightTabPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCurrentMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendCurrentMessage(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDynamicHandleMessageTextCommitted) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_MessageText); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CommitMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DynamicHandleMessageTextCommitted(Z_Param_Out_MessageText,ETextCommit::Type(Z_Param_CommitMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFocusEditableText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FocusEditableText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleLeftTabPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleLeftTabPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleRightTabPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleRightTabPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCurrentMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendCurrentMessage(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_EVENT_PARMS \
	struct SocialChatContainer_eventOnChatOpenChanged_Parms \
	{ \
		bool bShouldBeOpen; \
	};


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialChatContainer(); \
	friend struct Z_Construct_UClass_USocialChatContainer_Statics; \
public: \
	DECLARE_CLASS(USocialChatContainer, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialChatContainer)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSocialChatContainer(); \
	friend struct Z_Construct_UClass_USocialChatContainer_Statics; \
public: \
	DECLARE_CLASS(USocialChatContainer, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialChatContainer)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocialChatContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocialChatContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialChatContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialChatContainer(USocialChatContainer&&); \
	NO_API USocialChatContainer(const USocialChatContainer&); \
public:


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialChatContainer(USocialChatContainer&&); \
	NO_API USocialChatContainer(const USocialChatContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialChatContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialChatContainer)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChatManager() { return STRUCT_OFFSET(USocialChatContainer, ChatManager); } \
	FORCEINLINE static uint32 __PPO__JoinedChannels() { return STRUCT_OFFSET(USocialChatContainer, JoinedChannels); } \
	FORCEINLINE static uint32 __PPO__ActiveChannel() { return STRUCT_OFFSET(USocialChatContainer, ActiveChannel); } \
	FORCEINLINE static uint32 __PPO__TabButtonGroup() { return STRUCT_OFFSET(USocialChatContainer, TabButtonGroup); } \
	FORCEINLINE static uint32 __PPO__ChatList_Messages() { return STRUCT_OFFSET(USocialChatContainer, ChatList_Messages); } \
	FORCEINLINE static uint32 __PPO__ChatEditableText_MessageEntry() { return STRUCT_OFFSET(USocialChatContainer, ChatEditableText_MessageEntry); } \
	FORCEINLINE static uint32 __PPO__Button_SendMessage() { return STRUCT_OFFSET(USocialChatContainer, Button_SendMessage); } \
	FORCEINLINE static uint32 __PPO__EntryBox_JoinedChannels() { return STRUCT_OFFSET(USocialChatContainer, EntryBox_JoinedChannels); } \
	FORCEINLINE static uint32 __PPO__ScrollBox_Channels() { return STRUCT_OFFSET(USocialChatContainer, ScrollBox_Channels); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_16_PROLOG \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_EVENT_PARMS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_INCLASS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
