// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButton;
class UCommonWidgetCarousel;
#ifdef COMMONUI_CommonWidgetCarouselNavBar_generated_h
#error "CommonWidgetCarouselNavBar.generated.h already included, missing '#pragma once' in CommonWidgetCarouselNavBar.h"
#endif
#define COMMONUI_CommonWidgetCarouselNavBar_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleButtonClicked) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_AssociatedButton); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ButtonIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleButtonClicked(Z_Param_AssociatedButton,Z_Param_ButtonIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePageChanged) \
	{ \
		P_GET_OBJECT(UCommonWidgetCarousel,Z_Param_CommonCarousel); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PageIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePageChanged(Z_Param_CommonCarousel,Z_Param_PageIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinkedCarousel) \
	{ \
		P_GET_OBJECT(UCommonWidgetCarousel,Z_Param_CommonCarousel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinkedCarousel(Z_Param_CommonCarousel); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleButtonClicked) \
	{ \
		P_GET_OBJECT(UCommonButton,Z_Param_AssociatedButton); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ButtonIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleButtonClicked(Z_Param_AssociatedButton,Z_Param_ButtonIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePageChanged) \
	{ \
		P_GET_OBJECT(UCommonWidgetCarousel,Z_Param_CommonCarousel); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PageIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePageChanged(Z_Param_CommonCarousel,Z_Param_PageIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinkedCarousel) \
	{ \
		P_GET_OBJECT(UCommonWidgetCarousel,Z_Param_CommonCarousel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLinkedCarousel(Z_Param_CommonCarousel); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonWidgetCarouselNavBar(); \
	friend struct Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetCarouselNavBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetCarouselNavBar)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCommonWidgetCarouselNavBar(); \
	friend struct Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetCarouselNavBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetCarouselNavBar)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonWidgetCarouselNavBar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonWidgetCarouselNavBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetCarouselNavBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetCarouselNavBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetCarouselNavBar(UCommonWidgetCarouselNavBar&&); \
	NO_API UCommonWidgetCarouselNavBar(const UCommonWidgetCarouselNavBar&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetCarouselNavBar(UCommonWidgetCarouselNavBar&&); \
	NO_API UCommonWidgetCarouselNavBar(const UCommonWidgetCarouselNavBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetCarouselNavBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetCarouselNavBar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonWidgetCarouselNavBar)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LinkedCarousel() { return STRUCT_OFFSET(UCommonWidgetCarouselNavBar, LinkedCarousel); } \
	FORCEINLINE static uint32 __PPO__ButtonGroup() { return STRUCT_OFFSET(UCommonWidgetCarouselNavBar, ButtonGroup); } \
	FORCEINLINE static uint32 __PPO__Buttons() { return STRUCT_OFFSET(UCommonWidgetCarouselNavBar, Buttons); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_13_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
