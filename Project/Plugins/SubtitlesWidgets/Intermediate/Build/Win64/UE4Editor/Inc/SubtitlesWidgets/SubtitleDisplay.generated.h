// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBTITLESWIDGETS_SubtitleDisplay_generated_h
#error "SubtitleDisplay.generated.h already included, missing '#pragma once' in SubtitleDisplay.h"
#endif
#define SUBTITLESWIDGETS_SubtitleDisplay_generated_h

#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasSubtitles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSubtitles(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasSubtitles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSubtitles(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubtitleDisplay(); \
	friend struct Z_Construct_UClass_USubtitleDisplay_Statics; \
public: \
	DECLARE_CLASS(USubtitleDisplay, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubtitlesWidgets"), NO_API) \
	DECLARE_SERIALIZER(USubtitleDisplay)


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSubtitleDisplay(); \
	friend struct Z_Construct_UClass_USubtitleDisplay_Statics; \
public: \
	DECLARE_CLASS(USubtitleDisplay, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubtitlesWidgets"), NO_API) \
	DECLARE_SERIALIZER(USubtitleDisplay)


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubtitleDisplay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubtitleDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubtitleDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitleDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubtitleDisplay(USubtitleDisplay&&); \
	NO_API USubtitleDisplay(const USubtitleDisplay&); \
public:


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubtitleDisplay(USubtitleDisplay&&); \
	NO_API USubtitleDisplay(const USubtitleDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubtitleDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitleDisplay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubtitleDisplay)


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_8_PROLOG
#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_INCLASS \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_SubtitleDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
