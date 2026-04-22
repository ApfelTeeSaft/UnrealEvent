// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALUMG_SocialChatMessageEntry_generated_h
#error "SocialChatMessageEntry.generated.h already included, missing '#pragma once' in SocialChatMessageEntry.h"
#endif
#define SOCIALUMG_SocialChatMessageEntry_generated_h

#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanInteract(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanInteract(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_EVENT_PARMS
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialChatMessageEntry(); \
	friend struct Z_Construct_UClass_USocialChatMessageEntry_Statics; \
public: \
	DECLARE_CLASS(USocialChatMessageEntry, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialChatMessageEntry) \
	virtual UObject* _getUObject() const override { return const_cast<USocialChatMessageEntry*>(this); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSocialChatMessageEntry(); \
	friend struct Z_Construct_UClass_USocialChatMessageEntry_Statics; \
public: \
	DECLARE_CLASS(USocialChatMessageEntry, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialChatMessageEntry) \
	virtual UObject* _getUObject() const override { return const_cast<USocialChatMessageEntry*>(this); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocialChatMessageEntry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocialChatMessageEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialChatMessageEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatMessageEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialChatMessageEntry(USocialChatMessageEntry&&); \
	NO_API USocialChatMessageEntry(const USocialChatMessageEntry&); \
public:


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialChatMessageEntry(USocialChatMessageEntry&&); \
	NO_API USocialChatMessageEntry(const USocialChatMessageEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialChatMessageEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatMessageEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialChatMessageEntry)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultStyle() { return STRUCT_OFFSET(USocialChatMessageEntry, DefaultStyle); } \
	FORCEINLINE static uint32 __PPO__Text_Message() { return STRUCT_OFFSET(USocialChatMessageEntry, Text_Message); } \
	FORCEINLINE static uint32 __PPO__Text_SenderName() { return STRUCT_OFFSET(USocialChatMessageEntry, Text_SenderName); } \
	FORCEINLINE static uint32 __PPO__Text_ChannelName() { return STRUCT_OFFSET(USocialChatMessageEntry, Text_ChannelName); } \
	FORCEINLINE static uint32 __PPO__Text_Timestamp() { return STRUCT_OFFSET(USocialChatMessageEntry, Text_Timestamp); } \
	FORCEINLINE static uint32 __PPO__HorizontalBox_Header() { return STRUCT_OFFSET(USocialChatMessageEntry, HorizontalBox_Header); } \
	FORCEINLINE static uint32 __PPO__Button_MessageButton() { return STRUCT_OFFSET(USocialChatMessageEntry, Button_MessageButton); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_12_PROLOG \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_EVENT_PARMS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_INCLASS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialChatMessageEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
