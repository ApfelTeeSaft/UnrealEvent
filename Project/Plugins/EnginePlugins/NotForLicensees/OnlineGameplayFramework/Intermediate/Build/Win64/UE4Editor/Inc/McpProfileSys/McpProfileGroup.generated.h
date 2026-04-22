// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MCPPROFILESYS_McpProfileGroup_generated_h
#error "McpProfileGroup.generated.h already included, missing '#pragma once' in McpProfileGroup.h"
#endif
#define MCPPROFILESYS_McpProfileGroup_generated_h

#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_RPC_WRAPPERS
#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMcpProfileGroup(); \
	friend struct Z_Construct_UClass_UMcpProfileGroup_Statics; \
public: \
	DECLARE_CLASS(UMcpProfileGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/McpProfileSys"), NO_API) \
	DECLARE_SERIALIZER(UMcpProfileGroup)


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMcpProfileGroup(); \
	friend struct Z_Construct_UClass_UMcpProfileGroup_Statics; \
public: \
	DECLARE_CLASS(UMcpProfileGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/McpProfileSys"), NO_API) \
	DECLARE_SERIALIZER(UMcpProfileGroup)


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMcpProfileGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMcpProfileGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMcpProfileGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMcpProfileGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMcpProfileGroup(UMcpProfileGroup&&); \
	NO_API UMcpProfileGroup(const UMcpProfileGroup&); \
public:


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMcpProfileGroup(UMcpProfileGroup&&); \
	NO_API UMcpProfileGroup(const UMcpProfileGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMcpProfileGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMcpProfileGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMcpProfileGroup)


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DelayMcpResults() { return STRUCT_OFFSET(UMcpProfileGroup, DelayMcpResults); } \
	FORCEINLINE static uint32 __PPO__WeeklyIntervalStartDay() { return STRUCT_OFFSET(UMcpProfileGroup, WeeklyIntervalStartDay); } \
	FORCEINLINE static uint32 __PPO__ProfileList() { return STRUCT_OFFSET(UMcpProfileGroup, ProfileList); } \
	FORCEINLINE static uint32 __PPO__PlayerName() { return STRUCT_OFFSET(UMcpProfileGroup, PlayerName); } \
	FORCEINLINE static uint32 __PPO__bIsServer() { return STRUCT_OFFSET(UMcpProfileGroup, bIsServer); } \
	FORCEINLINE static uint32 __PPO__ProfileNotificationsStompTopic() { return STRUCT_OFFSET(UMcpProfileGroup, ProfileNotificationsStompTopic); } \
	FORCEINLINE static uint32 __PPO__LastMcpVersion() { return STRUCT_OFFSET(UMcpProfileGroup, LastMcpVersion); } \
	FORCEINLINE static uint32 __PPO__LastContentVersion() { return STRUCT_OFFSET(UMcpProfileGroup, LastContentVersion); } \
	FORCEINLINE static uint32 __PPO__LocalTimeOffset() { return STRUCT_OFFSET(UMcpProfileGroup, LocalTimeOffset); } \
	FORCEINLINE static uint32 __PPO__LockCode() { return STRUCT_OFFSET(UMcpProfileGroup, LockCode); } \
	FORCEINLINE static uint32 __PPO__LockedProfiles() { return STRUCT_OFFSET(UMcpProfileGroup, LockedProfiles); } \
	FORCEINLINE static uint32 __PPO__LockedProfilesString() { return STRUCT_OFFSET(UMcpProfileGroup, LockedProfilesString); } \
	FORCEINLINE static uint32 __PPO__ProfileWriteLockTimeoutSecs() { return STRUCT_OFFSET(UMcpProfileGroup, ProfileWriteLockTimeoutSecs); } \
	FORCEINLINE static uint32 __PPO__bSubscribedToNotifications() { return STRUCT_OFFSET(UMcpProfileGroup, bSubscribedToNotifications); } \
	FORCEINLINE static uint32 __PPO__ApplyStashEndPoint() { return STRUCT_OFFSET(UMcpProfileGroup, ApplyStashEndPoint); } \
	FORCEINLINE static uint32 __PPO__bSendProfileCommandRevisions() { return STRUCT_OFFSET(UMcpProfileGroup, bSendProfileCommandRevisions); } \
	FORCEINLINE static uint32 __PPO__bAsyncParseProfileUpdates() { return STRUCT_OFFSET(UMcpProfileGroup, bAsyncParseProfileUpdates); }


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_10_PROLOG
#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_INCLASS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_McpProfileSys_Public_McpProfileGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
