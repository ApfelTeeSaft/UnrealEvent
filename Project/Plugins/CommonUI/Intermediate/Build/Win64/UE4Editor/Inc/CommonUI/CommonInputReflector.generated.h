// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButton;
struct FCommonInputActionHandlerData;
#ifdef COMMONUI_CommonInputReflector_generated_h
#error "CommonInputReflector.generated.h already included, missing '#pragma once' in CommonInputReflector.h"
#endif
#define COMMONUI_CommonInputReflector_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_RPC_WRAPPERS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_EVENT_PARMS \
	struct CommonInputReflector_eventOnButtonAdded_Parms \
	{ \
		UCommonButton* AddedButton; \
		FCommonInputActionHandlerData Data; \
	};


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputReflector(); \
	friend struct Z_Construct_UClass_UCommonInputReflector_Statics; \
public: \
	DECLARE_CLASS(UCommonInputReflector, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputReflector)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCommonInputReflector(); \
	friend struct Z_Construct_UClass_UCommonInputReflector_Statics; \
public: \
	DECLARE_CLASS(UCommonInputReflector, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputReflector)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonInputReflector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputReflector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputReflector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputReflector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputReflector(UCommonInputReflector&&); \
	NO_API UCommonInputReflector(const UCommonInputReflector&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputReflector(UCommonInputReflector&&); \
	NO_API UCommonInputReflector(const UCommonInputReflector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputReflector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputReflector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonInputReflector)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveButtons() { return STRUCT_OFFSET(UCommonInputReflector, ActiveButtons); } \
	FORCEINLINE static uint32 __PPO__InactiveButtons() { return STRUCT_OFFSET(UCommonInputReflector, InactiveButtons); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_10_PROLOG \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_EVENT_PARMS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonInputReflector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
