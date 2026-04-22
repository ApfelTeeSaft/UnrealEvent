// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETUI_NetDebugWidget_generated_h
#error "NetDebugWidget.generated.h already included, missing '#pragma once' in NetDebugWidget.h"
#endif
#define NETUI_NetDebugWidget_generated_h

#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopTimer(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopTimer(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetDebugWidget(); \
	friend struct Z_Construct_UClass_UNetDebugWidget_Statics; \
public: \
	DECLARE_CLASS(UNetDebugWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetUI"), NO_API) \
	DECLARE_SERIALIZER(UNetDebugWidget)


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUNetDebugWidget(); \
	friend struct Z_Construct_UClass_UNetDebugWidget_Statics; \
public: \
	DECLARE_CLASS(UNetDebugWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetUI"), NO_API) \
	DECLARE_SERIALIZER(UNetDebugWidget)


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetDebugWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetDebugWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetDebugWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetDebugWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetDebugWidget(UNetDebugWidget&&); \
	NO_API UNetDebugWidget(const UNetDebugWidget&); \
public:


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetDebugWidget(UNetDebugWidget&&); \
	NO_API UNetDebugWidget(const UNetDebugWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetDebugWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetDebugWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetDebugWidget)


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PingUI() { return STRUCT_OFFSET(UNetDebugWidget, PingUI); } \
	FORCEINLINE static uint32 __PPO__PacketInRateUI() { return STRUCT_OFFSET(UNetDebugWidget, PacketInRateUI); } \
	FORCEINLINE static uint32 __PPO__PacketOutRateUI() { return STRUCT_OFFSET(UNetDebugWidget, PacketOutRateUI); } \
	FORCEINLINE static uint32 __PPO__PacketInLossUI() { return STRUCT_OFFSET(UNetDebugWidget, PacketInLossUI); } \
	FORCEINLINE static uint32 __PPO__PacketOutLossUI() { return STRUCT_OFFSET(UNetDebugWidget, PacketOutLossUI); } \
	FORCEINLINE static uint32 __PPO__UpBandwidthUI() { return STRUCT_OFFSET(UNetDebugWidget, UpBandwidthUI); } \
	FORCEINLINE static uint32 __PPO__DownBandwidthUI() { return STRUCT_OFFSET(UNetDebugWidget, DownBandwidthUI); }


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_8_PROLOG
#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_INCLASS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_NetUI_Source_NetUI_Public_NetDebugWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
