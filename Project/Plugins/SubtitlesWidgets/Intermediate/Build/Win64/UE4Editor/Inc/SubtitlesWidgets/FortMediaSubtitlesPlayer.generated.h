// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
class UOverlays;
#ifdef SUBTITLESWIDGETS_FortMediaSubtitlesPlayer_generated_h
#error "FortMediaSubtitlesPlayer.generated.h already included, missing '#pragma once' in FortMediaSubtitlesPlayer.h"
#endif
#define SUBTITLESWIDGETS_FortMediaSubtitlesPlayer_generated_h

#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindToMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_InMediaPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToMediaPlayer(Z_Param_InMediaPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubtitles) \
	{ \
		P_GET_OBJECT(UOverlays,Z_Param_Subtitles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSubtitles(Z_Param_Subtitles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindToMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_InMediaPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToMediaPlayer(Z_Param_InMediaPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubtitles) \
	{ \
		P_GET_OBJECT(UOverlays,Z_Param_Subtitles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSubtitles(Z_Param_Subtitles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFortMediaSubtitlesPlayer(); \
	friend struct Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics; \
public: \
	DECLARE_CLASS(UFortMediaSubtitlesPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubtitlesWidgets"), NO_API) \
	DECLARE_SERIALIZER(UFortMediaSubtitlesPlayer)


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUFortMediaSubtitlesPlayer(); \
	friend struct Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics; \
public: \
	DECLARE_CLASS(UFortMediaSubtitlesPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubtitlesWidgets"), NO_API) \
	DECLARE_SERIALIZER(UFortMediaSubtitlesPlayer)


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFortMediaSubtitlesPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFortMediaSubtitlesPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFortMediaSubtitlesPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFortMediaSubtitlesPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFortMediaSubtitlesPlayer(UFortMediaSubtitlesPlayer&&); \
	NO_API UFortMediaSubtitlesPlayer(const UFortMediaSubtitlesPlayer&); \
public:


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFortMediaSubtitlesPlayer(UFortMediaSubtitlesPlayer&&); \
	NO_API UFortMediaSubtitlesPlayer(const UFortMediaSubtitlesPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFortMediaSubtitlesPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFortMediaSubtitlesPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFortMediaSubtitlesPlayer)


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_9_PROLOG
#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_INCLASS \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SubtitlesWidgets_Source_SubtitlesWidgets_Public_FortMediaSubtitlesPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
