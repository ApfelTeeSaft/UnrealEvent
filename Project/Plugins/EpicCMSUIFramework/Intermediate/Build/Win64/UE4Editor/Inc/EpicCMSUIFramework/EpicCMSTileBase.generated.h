// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EPICCMSUIFRAMEWORK_EpicCMSTileBase_generated_h
#error "EpicCMSTileBase.generated.h already included, missing '#pragma once' in EpicCMSTileBase.h"
#endif
#define EPICCMSUIFRAMEWORK_EpicCMSTileBase_generated_h

#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Launch(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Launch(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEpicCMSTileBase(); \
	friend struct Z_Construct_UClass_UEpicCMSTileBase_Statics; \
public: \
	DECLARE_CLASS(UEpicCMSTileBase, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EpicCMSUIFramework"), NO_API) \
	DECLARE_SERIALIZER(UEpicCMSTileBase) \
	virtual UObject* _getUObject() const override { return const_cast<UEpicCMSTileBase*>(this); }


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEpicCMSTileBase(); \
	friend struct Z_Construct_UClass_UEpicCMSTileBase_Statics; \
public: \
	DECLARE_CLASS(UEpicCMSTileBase, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EpicCMSUIFramework"), NO_API) \
	DECLARE_SERIALIZER(UEpicCMSTileBase) \
	virtual UObject* _getUObject() const override { return const_cast<UEpicCMSTileBase*>(this); }


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEpicCMSTileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEpicCMSTileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicCMSTileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicCMSTileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicCMSTileBase(UEpicCMSTileBase&&); \
	NO_API UEpicCMSTileBase(const UEpicCMSTileBase&); \
public:


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicCMSTileBase(UEpicCMSTileBase&&); \
	NO_API UEpicCMSTileBase(const UEpicCMSTileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicCMSTileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicCMSTileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEpicCMSTileBase)


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultTitleTextStyle() { return STRUCT_OFFSET(UEpicCMSTileBase, DefaultTitleTextStyle); } \
	FORCEINLINE static uint32 __PPO__FeaturedTitleTextStyle() { return STRUCT_OFFSET(UEpicCMSTileBase, FeaturedTitleTextStyle); } \
	FORCEINLINE static uint32 __PPO__Title() { return STRUCT_OFFSET(UEpicCMSTileBase, Title); } \
	FORCEINLINE static uint32 __PPO__Link() { return STRUCT_OFFSET(UEpicCMSTileBase, Link); } \
	FORCEINLINE static uint32 __PPO__bDownloadingExternalMedia() { return STRUCT_OFFSET(UEpicCMSTileBase, bDownloadingExternalMedia); } \
	FORCEINLINE static uint32 __PPO__bRefreshingMcpCatalog() { return STRUCT_OFFSET(UEpicCMSTileBase, bRefreshingMcpCatalog); } \
	FORCEINLINE static uint32 __PPO__ExternalMedia() { return STRUCT_OFFSET(UEpicCMSTileBase, ExternalMedia); } \
	FORCEINLINE static uint32 __PPO__LazyImage_Icon() { return STRUCT_OFFSET(UEpicCMSTileBase, LazyImage_Icon); } \
	FORCEINLINE static uint32 __PPO__TitleTextBlock() { return STRUCT_OFFSET(UEpicCMSTileBase, TitleTextBlock); } \
	FORCEINLINE static uint32 __PPO__SubtitleTextBlock() { return STRUCT_OFFSET(UEpicCMSTileBase, SubtitleTextBlock); } \
	FORCEINLINE static uint32 __PPO__EyebrowTextBlock() { return STRUCT_OFFSET(UEpicCMSTileBase, EyebrowTextBlock); }


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_13_PROLOG
#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_INCLASS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSTileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
