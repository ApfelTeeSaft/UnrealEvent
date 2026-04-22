// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnlineStatus : uint8;
#ifdef SOCIALUMG_SocialUserListEntry_generated_h
#error "SocialUserListEntry.generated.h already included, missing '#pragma once' in SocialUserListEntry.h"
#endif
#define SOCIALUMG_SocialUserListEntry_generated_h

#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_RPC_WRAPPERS
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_EVENT_PARMS \
	struct SocialUserListEntry_eventOnUserPresenceChanged_Parms \
	{ \
		EOnlineStatus OnlineStatus; \
	};


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialUserListEntry(); \
	friend struct Z_Construct_UClass_USocialUserListEntry_Statics; \
public: \
	DECLARE_CLASS(USocialUserListEntry, USocialListEntry, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialUserListEntry)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSocialUserListEntry(); \
	friend struct Z_Construct_UClass_USocialUserListEntry_Statics; \
public: \
	DECLARE_CLASS(USocialUserListEntry, USocialListEntry, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialUserListEntry)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocialUserListEntry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocialUserListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialUserListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialUserListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialUserListEntry(USocialUserListEntry&&); \
	NO_API USocialUserListEntry(const USocialUserListEntry&); \
public:


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialUserListEntry(USocialUserListEntry&&); \
	NO_API USocialUserListEntry(const USocialUserListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialUserListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialUserListEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialUserListEntry)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SocialUser() { return STRUCT_OFFSET(USocialUserListEntry, SocialUser); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_9_PROLOG \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_EVENT_PARMS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_INCLASS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialUserListEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
