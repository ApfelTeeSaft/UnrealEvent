// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef SOCIALUMG_SocialInteractionMenu_generated_h
#error "SocialInteractionMenu.generated.h already included, missing '#pragma once' in SocialInteractionMenu.h"
#endif
#define SOCIALUMG_SocialInteractionMenu_generated_h

#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFirstEntryToCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetFirstEntryToCenter(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFirstEntryToCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetFirstEntryToCenter(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_EVENT_PARMS \
	struct SocialInteractionMenu_eventOnToggleConfirmation_Parms \
	{ \
		bool bIsVisible; \
	};


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialInteractionMenu(); \
	friend struct Z_Construct_UClass_USocialInteractionMenu_Statics; \
public: \
	DECLARE_CLASS(USocialInteractionMenu, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialInteractionMenu)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSocialInteractionMenu(); \
	friend struct Z_Construct_UClass_USocialInteractionMenu_Statics; \
public: \
	DECLARE_CLASS(USocialInteractionMenu, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialInteractionMenu)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocialInteractionMenu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocialInteractionMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialInteractionMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialInteractionMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialInteractionMenu(USocialInteractionMenu&&); \
	NO_API USocialInteractionMenu(const USocialInteractionMenu&); \
public:


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialInteractionMenu(USocialInteractionMenu&&); \
	NO_API USocialInteractionMenu(const USocialInteractionMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialInteractionMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialInteractionMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialInteractionMenu)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SocialContext() { return STRUCT_OFFSET(USocialInteractionMenu, SocialContext); } \
	FORCEINLINE static uint32 __PPO__EntryBox_PositiveInteractions() { return STRUCT_OFFSET(USocialInteractionMenu, EntryBox_PositiveInteractions); } \
	FORCEINLINE static uint32 __PPO__EntryBox_NegativeInteractions() { return STRUCT_OFFSET(USocialInteractionMenu, EntryBox_NegativeInteractions); } \
	FORCEINLINE static uint32 __PPO__Spacer_InteractionSeparator() { return STRUCT_OFFSET(USocialInteractionMenu, Spacer_InteractionSeparator); } \
	FORCEINLINE static uint32 __PPO__Switcher_Confirmation() { return STRUCT_OFFSET(USocialInteractionMenu, Switcher_Confirmation); } \
	FORCEINLINE static uint32 __PPO__Text_ConfirmationLabel() { return STRUCT_OFFSET(USocialInteractionMenu, Text_ConfirmationLabel); } \
	FORCEINLINE static uint32 __PPO__Button_Confirm() { return STRUCT_OFFSET(USocialInteractionMenu, Button_Confirm); } \
	FORCEINLINE static uint32 __PPO__Button_Decline() { return STRUCT_OFFSET(USocialInteractionMenu, Button_Decline); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_14_PROLOG \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_EVENT_PARMS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_INCLASS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialInteractionMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
