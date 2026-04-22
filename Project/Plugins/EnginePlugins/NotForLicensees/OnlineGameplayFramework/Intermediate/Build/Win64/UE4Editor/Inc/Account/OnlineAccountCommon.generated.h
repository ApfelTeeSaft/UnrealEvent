// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACCOUNT_OnlineAccountCommon_generated_h
#error "OnlineAccountCommon.generated.h already included, missing '#pragma once' in OnlineAccountCommon.h"
#endif
#define ACCOUNT_OnlineAccountCommon_generated_h

#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_RPC_WRAPPERS
#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineAccountCommon(); \
	friend struct Z_Construct_UClass_UOnlineAccountCommon_Statics; \
public: \
	DECLARE_CLASS(UOnlineAccountCommon, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Account"), NO_API) \
	DECLARE_SERIALIZER(UOnlineAccountCommon) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineAccountCommon(); \
	friend struct Z_Construct_UClass_UOnlineAccountCommon_Statics; \
public: \
	DECLARE_CLASS(UOnlineAccountCommon, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Account"), NO_API) \
	DECLARE_SERIALIZER(UOnlineAccountCommon) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineAccountCommon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineAccountCommon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineAccountCommon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineAccountCommon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineAccountCommon(UOnlineAccountCommon&&); \
	NO_API UOnlineAccountCommon(const UOnlineAccountCommon&); \
public:


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineAccountCommon(UOnlineAccountCommon&&); \
	NO_API UOnlineAccountCommon(const UOnlineAccountCommon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineAccountCommon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineAccountCommon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineAccountCommon)


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AvailabilityServiceGameName() { return STRUCT_OFFSET(UOnlineAccountCommon, AvailabilityServiceGameName); } \
	FORCEINLINE static uint32 __PPO__bRequireLightswitchAtStartup() { return STRUCT_OFFSET(UOnlineAccountCommon, bRequireLightswitchAtStartup); } \
	FORCEINLINE static uint32 __PPO__EulaKey() { return STRUCT_OFFSET(UOnlineAccountCommon, EulaKey); } \
	FORCEINLINE static uint32 __PPO__WebCreateEpicAccountUrl() { return STRUCT_OFFSET(UOnlineAccountCommon, WebCreateEpicAccountUrl); } \
	FORCEINLINE static uint32 __PPO__bAllowLocalLogout() { return STRUCT_OFFSET(UOnlineAccountCommon, bAllowLocalLogout); } \
	FORCEINLINE static uint32 __PPO__bAllowLocalLogoutKairos() { return STRUCT_OFFSET(UOnlineAccountCommon, bAllowLocalLogoutKairos); } \
	FORCEINLINE static uint32 __PPO__bUsePinGrantCodeForLinking() { return STRUCT_OFFSET(UOnlineAccountCommon, bUsePinGrantCodeForLinking); } \
	FORCEINLINE static uint32 __PPO__SkipRedeemOfflinePurchasesChance() { return STRUCT_OFFSET(UOnlineAccountCommon, SkipRedeemOfflinePurchasesChance); } \
	FORCEINLINE static uint32 __PPO__bShouldGrantFreeAccess() { return STRUCT_OFFSET(UOnlineAccountCommon, bShouldGrantFreeAccess); } \
	FORCEINLINE static uint32 __PPO__bUseGameSubAccessRedemption() { return STRUCT_OFFSET(UOnlineAccountCommon, bUseGameSubAccessRedemption); } \
	FORCEINLINE static uint32 __PPO__bAllowHomeSharingAccess() { return STRUCT_OFFSET(UOnlineAccountCommon, bAllowHomeSharingAccess); } \
	FORCEINLINE static uint32 __PPO__bRequireUGCPrivilege() { return STRUCT_OFFSET(UOnlineAccountCommon, bRequireUGCPrivilege); } \
	FORCEINLINE static uint32 __PPO__AccessGrantDelaySeconds() { return STRUCT_OFFSET(UOnlineAccountCommon, AccessGrantDelaySeconds); } \
	FORCEINLINE static uint32 __PPO__WaitingRoomState() { return STRUCT_OFFSET(UOnlineAccountCommon, WaitingRoomState); } \
	FORCEINLINE static uint32 __PPO__bAutoCreateHeadlessAccount() { return STRUCT_OFFSET(UOnlineAccountCommon, bAutoCreateHeadlessAccount); }


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_9_PROLOG
#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_INCLASS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_OnlineGameplayFramework_Source_Account_Public_OnlineAccountCommon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
