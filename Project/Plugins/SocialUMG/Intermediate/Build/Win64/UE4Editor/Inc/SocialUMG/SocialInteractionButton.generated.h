// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALUMG_SocialInteractionButton_generated_h
#error "SocialInteractionButton.generated.h already included, missing '#pragma once' in SocialInteractionButton.h"
#endif
#define SOCIALUMG_SocialInteractionButton_generated_h

#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInteractionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetInteractionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlatformOnlyFriend) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlatformOnlyFriend(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetInteractionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlatformOnlyFriend) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlatformOnlyFriend(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_EVENT_PARMS
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialInteractionButton(); \
	friend struct Z_Construct_UClass_USocialInteractionButton_Statics; \
public: \
	DECLARE_CLASS(USocialInteractionButton, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialInteractionButton)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSocialInteractionButton(); \
	friend struct Z_Construct_UClass_USocialInteractionButton_Statics; \
public: \
	DECLARE_CLASS(USocialInteractionButton, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialInteractionButton)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocialInteractionButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocialInteractionButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialInteractionButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialInteractionButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialInteractionButton(USocialInteractionButton&&); \
	NO_API USocialInteractionButton(const USocialInteractionButton&); \
public:


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialInteractionButton(USocialInteractionButton&&); \
	NO_API USocialInteractionButton(const USocialInteractionButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialInteractionButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialInteractionButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialInteractionButton)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultIndicatorColor() { return STRUCT_OFFSET(USocialInteractionButton, DefaultIndicatorColor); } \
	FORCEINLINE static uint32 __PPO__AlertingIndicatorColor() { return STRUCT_OFFSET(USocialInteractionButton, AlertingIndicatorColor); } \
	FORCEINLINE static uint32 __PPO__Text_InteractionName() { return STRUCT_OFFSET(USocialInteractionButton, Text_InteractionName); } \
	FORCEINLINE static uint32 __PPO__Border_InteractionIndicator() { return STRUCT_OFFSET(USocialInteractionButton, Border_InteractionIndicator); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_10_PROLOG \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_EVENT_PARMS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_INCLASS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
