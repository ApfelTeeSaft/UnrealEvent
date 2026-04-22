// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButton;
#ifdef COMMONUI_CommonButtonGroup_generated_h
#error "CommonButtonGroup.generated.h already included, missing '#pragma once' in CommonButtonGroup.h"
#endif
#define COMMONUI_CommonButtonGroup_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeselectAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeselectAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindButtonIndex) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_ButtonToFind); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindButtonIndex(Z_Param_ButtonToFind); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetButtonAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonButton**)Z_Param__Result=P_THIS->GetButtonAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetButtonCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetButtonCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredButtonIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHoveredButtonIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedButtonIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSelectedButtonIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyButtons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyButtons(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonHovered) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnButtonHovered(Z_Param_BaseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonUnhovered) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnButtonUnhovered(Z_Param_BaseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHandleButtonClicked) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHandleButtonClicked(Z_Param_BaseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHandleButtonDoubleClicked) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHandleButtonDoubleClicked(Z_Param_BaseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSelectionStateChanged) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_GET_UBOOL(Z_Param_bIsSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSelectionStateChanged(Z_Param_BaseButton,Z_Param_bIsSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectButtonAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ButtonIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectButtonAtIndex(Z_Param_ButtonIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNextButton) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNextButton(Z_Param_bAllowWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectPreviousButton) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectPreviousButton(Z_Param_bAllowWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectionRequired) \
	{ \
		P_GET_UBOOL(Z_Param_bRequireSelection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectionRequired(Z_Param_bRequireSelection); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeselectAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeselectAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindButtonIndex) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_ButtonToFind); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindButtonIndex(Z_Param_ButtonToFind); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetButtonAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonButton**)Z_Param__Result=P_THIS->GetButtonAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetButtonCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetButtonCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredButtonIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHoveredButtonIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedButtonIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSelectedButtonIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyButtons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyButtons(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonHovered) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnButtonHovered(Z_Param_BaseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonUnhovered) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnButtonUnhovered(Z_Param_BaseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHandleButtonClicked) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHandleButtonClicked(Z_Param_BaseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHandleButtonDoubleClicked) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHandleButtonDoubleClicked(Z_Param_BaseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSelectionStateChanged) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_BaseButton); \
		P_GET_UBOOL(Z_Param_bIsSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSelectionStateChanged(Z_Param_BaseButton,Z_Param_bIsSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectButtonAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ButtonIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectButtonAtIndex(Z_Param_ButtonIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNextButton) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNextButton(Z_Param_bAllowWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectPreviousButton) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectPreviousButton(Z_Param_bAllowWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectionRequired) \
	{ \
		P_GET_UBOOL(Z_Param_bRequireSelection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectionRequired(Z_Param_bRequireSelection); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButtonGroup(); \
	friend struct Z_Construct_UClass_UCommonButtonGroup_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonGroup, UCommonWidgetGroupBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonGroup)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonGroup(); \
	friend struct Z_Construct_UClass_UCommonButtonGroup_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonGroup, UCommonWidgetGroupBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonGroup)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonGroup(UCommonButtonGroup&&); \
	NO_API UCommonButtonGroup(const UCommonButtonGroup&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonGroup(UCommonButtonGroup&&); \
	NO_API UCommonButtonGroup(const UCommonButtonGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonGroup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonButtonGroup)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSelectionRequired() { return STRUCT_OFFSET(UCommonButtonGroup, bSelectionRequired); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_10_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
