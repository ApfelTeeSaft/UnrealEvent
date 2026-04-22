// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef EPICCMSUIFRAMEWORK_EpicCMSTileCarousel_generated_h
#error "EpicCMSTileCarousel.generated.h already included, missing '#pragma once' in EpicCMSTileCarousel.h"
#endif
#define EPICCMSUIFRAMEWORK_EpicCMSTileCarousel_generated_h

#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_RPC_WRAPPERS \
	virtual void HandleTilePageAdded_Implementation(UWidget* TileWidget); \
 \
	DECLARE_FUNCTION(execAddTilePage) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_TilePageWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTilePage(Z_Param_TilePageWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginAutoScrolling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginAutoScrolling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPageIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPageIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTilePageAdded) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_TileWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTilePageAdded_Implementation(Z_Param_TileWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentPageByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PageIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentPageByIndex(Z_Param_PageIndex); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleTilePageAdded_Implementation(UWidget* TileWidget); \
 \
	DECLARE_FUNCTION(execAddTilePage) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_TilePageWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTilePage(Z_Param_TilePageWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginAutoScrolling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginAutoScrolling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPageIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPageIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTilePageAdded) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_TileWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTilePageAdded_Implementation(Z_Param_TileWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentPageByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PageIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentPageByIndex(Z_Param_PageIndex); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_EVENT_PARMS \
	struct EpicCMSTileCarousel_eventHandleTilePageAdded_Parms \
	{ \
		UWidget* TileWidget; \
	}; \
	struct EpicCMSTileCarousel_eventNavigationVisibilityChanged_Parms \
	{ \
		bool bShowNavigation; \
	};


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEpicCMSTileCarousel(); \
	friend struct Z_Construct_UClass_UEpicCMSTileCarousel_Statics; \
public: \
	DECLARE_CLASS(UEpicCMSTileCarousel, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EpicCMSUIFramework"), NO_API) \
	DECLARE_SERIALIZER(UEpicCMSTileCarousel)


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEpicCMSTileCarousel(); \
	friend struct Z_Construct_UClass_UEpicCMSTileCarousel_Statics; \
public: \
	DECLARE_CLASS(UEpicCMSTileCarousel, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EpicCMSUIFramework"), NO_API) \
	DECLARE_SERIALIZER(UEpicCMSTileCarousel)


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEpicCMSTileCarousel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEpicCMSTileCarousel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicCMSTileCarousel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicCMSTileCarousel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicCMSTileCarousel(UEpicCMSTileCarousel&&); \
	NO_API UEpicCMSTileCarousel(const UEpicCMSTileCarousel&); \
public:


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicCMSTileCarousel(UEpicCMSTileCarousel&&); \
	NO_API UEpicCMSTileCarousel(const UEpicCMSTileCarousel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicCMSTileCarousel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicCMSTileCarousel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEpicCMSTileCarousel)


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PreviousButtonSound() { return STRUCT_OFFSET(UEpicCMSTileCarousel, PreviousButtonSound); } \
	FORCEINLINE static uint32 __PPO__NextButtonSound() { return STRUCT_OFFSET(UEpicCMSTileCarousel, NextButtonSound); } \
	FORCEINLINE static uint32 __PPO__Carousel() { return STRUCT_OFFSET(UEpicCMSTileCarousel, Carousel); } \
	FORCEINLINE static uint32 __PPO__NextPageButton() { return STRUCT_OFFSET(UEpicCMSTileCarousel, NextPageButton); } \
	FORCEINLINE static uint32 __PPO__PreviousPageButton() { return STRUCT_OFFSET(UEpicCMSTileCarousel, PreviousPageButton); } \
	FORCEINLINE static uint32 __PPO__bShouldShowNavigationOnlyOnHover() { return STRUCT_OFFSET(UEpicCMSTileCarousel, bShouldShowNavigationOnlyOnHover); } \
	FORCEINLINE static uint32 __PPO__bInputActionsForPaging() { return STRUCT_OFFSET(UEpicCMSTileCarousel, bInputActionsForPaging); } \
	FORCEINLINE static uint32 __PPO__bIsShowingNavigation() { return STRUCT_OFFSET(UEpicCMSTileCarousel, bIsShowingNavigation); }


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_10_PROLOG \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_EVENT_PARMS


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_INCLASS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileCarousel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
