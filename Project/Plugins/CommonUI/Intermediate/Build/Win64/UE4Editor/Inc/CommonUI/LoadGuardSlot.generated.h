// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef COMMONUI_LoadGuardSlot_generated_h
#error "LoadGuardSlot.generated.h already included, missing '#pragma once' in LoadGuardSlot.h"
#endif
#define COMMONUI_LoadGuardSlot_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadGuardSlot(); \
	friend struct Z_Construct_UClass_ULoadGuardSlot_Statics; \
public: \
	DECLARE_CLASS(ULoadGuardSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(ULoadGuardSlot)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_INCLASS \
private: \
	static void StaticRegisterNativesULoadGuardSlot(); \
	friend struct Z_Construct_UClass_ULoadGuardSlot_Statics; \
public: \
	DECLARE_CLASS(ULoadGuardSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(ULoadGuardSlot)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadGuardSlot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadGuardSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadGuardSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadGuardSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadGuardSlot(ULoadGuardSlot&&); \
	NO_API ULoadGuardSlot(const ULoadGuardSlot&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadGuardSlot(ULoadGuardSlot&&); \
	NO_API ULoadGuardSlot(const ULoadGuardSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadGuardSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadGuardSlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadGuardSlot)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Padding() { return STRUCT_OFFSET(ULoadGuardSlot, Padding); } \
	FORCEINLINE static uint32 __PPO__HorizontalAlignment() { return STRUCT_OFFSET(ULoadGuardSlot, HorizontalAlignment); } \
	FORCEINLINE static uint32 __PPO__VerticalAlignment() { return STRUCT_OFFSET(ULoadGuardSlot, VerticalAlignment); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_10_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_LoadGuardSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
