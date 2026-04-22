// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef COMMONUI_CommonPopupButton_generated_h
#error "CommonPopupButton.generated.h already included, missing '#pragma once' in CommonPopupButton.h"
#endif
#define COMMONUI_CommonPopupButton_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMenuAnchorWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetMenuAnchorWidget(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMenuAnchorWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetMenuAnchorWidget(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonPopupButton(); \
	friend struct Z_Construct_UClass_UCommonPopupButton_Statics; \
public: \
	DECLARE_CLASS(UCommonPopupButton, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonPopupButton)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCommonPopupButton(); \
	friend struct Z_Construct_UClass_UCommonPopupButton_Statics; \
public: \
	DECLARE_CLASS(UCommonPopupButton, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonPopupButton)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonPopupButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPopupButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPopupButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPopupButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPopupButton(UCommonPopupButton&&); \
	NO_API UCommonPopupButton(const UCommonPopupButton&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPopupButton(UCommonPopupButton&&); \
	NO_API UCommonPopupButton(const UCommonPopupButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPopupButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPopupButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonPopupButton)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PopupMenuAnchor() { return STRUCT_OFFSET(UCommonPopupButton, PopupMenuAnchor); } \
	FORCEINLINE static uint32 __PPO__PopupMenu() { return STRUCT_OFFSET(UCommonPopupButton, PopupMenu); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_10_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
