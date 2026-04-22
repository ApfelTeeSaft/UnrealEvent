// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETUI_BadNetworkIndicator_generated_h
#error "BadNetworkIndicator.generated.h already included, missing '#pragma once' in BadNetworkIndicator.h"
#endif
#define NETUI_BadNetworkIndicator_generated_h

#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPacketLoss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPacketLoss(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBadPacketLoss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBadPacketLoss(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBadPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBadPing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSeverePacketLoss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSeverePacketLoss(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSeverePing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSeverePing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldDisplay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldDisplay(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPacketLoss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPacketLoss(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBadPacketLoss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBadPacketLoss(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBadPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBadPing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSeverePacketLoss) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSeverePacketLoss(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSeverePing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSeverePing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldDisplay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldDisplay(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_EVENT_PARMS
#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBadNetworkIndicator(); \
	friend struct Z_Construct_UClass_UBadNetworkIndicator_Statics; \
public: \
	DECLARE_CLASS(UBadNetworkIndicator, UUserWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetUI"), NO_API) \
	DECLARE_SERIALIZER(UBadNetworkIndicator) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUBadNetworkIndicator(); \
	friend struct Z_Construct_UClass_UBadNetworkIndicator_Statics; \
public: \
	DECLARE_CLASS(UBadNetworkIndicator, UUserWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetUI"), NO_API) \
	DECLARE_SERIALIZER(UBadNetworkIndicator) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBadNetworkIndicator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBadNetworkIndicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBadNetworkIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBadNetworkIndicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBadNetworkIndicator(UBadNetworkIndicator&&); \
	NO_API UBadNetworkIndicator(const UBadNetworkIndicator&); \
public:


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBadNetworkIndicator(UBadNetworkIndicator&&); \
	NO_API UBadNetworkIndicator(const UBadNetworkIndicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBadNetworkIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBadNetworkIndicator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBadNetworkIndicator)


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BadPingThreshold() { return STRUCT_OFFSET(UBadNetworkIndicator, BadPingThreshold); } \
	FORCEINLINE static uint32 __PPO__SeverePingThreshold() { return STRUCT_OFFSET(UBadNetworkIndicator, SeverePingThreshold); } \
	FORCEINLINE static uint32 __PPO__BadPacketLossThreshold() { return STRUCT_OFFSET(UBadNetworkIndicator, BadPacketLossThreshold); } \
	FORCEINLINE static uint32 __PPO__SeverePacketLossThreshold() { return STRUCT_OFFSET(UBadNetworkIndicator, SeverePacketLossThreshold); } \
	FORCEINLINE static uint32 __PPO__bEnabled() { return STRUCT_OFFSET(UBadNetworkIndicator, bEnabled); } \
	FORCEINLINE static uint32 __PPO__MinimumDisplayTime() { return STRUCT_OFFSET(UBadNetworkIndicator, MinimumDisplayTime); } \
	FORCEINLINE static uint32 __PPO__UpdateTime() { return STRUCT_OFFSET(UBadNetworkIndicator, UpdateTime); } \
	FORCEINLINE static uint32 __PPO__InitialDelay() { return STRUCT_OFFSET(UBadNetworkIndicator, InitialDelay); }


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_6_PROLOG \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_EVENT_PARMS


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_INCLASS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_BadNetworkIndicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
