// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UMenuAnchor;
#ifdef COMMONUI_CommonPopupMenu_generated_h
#error "CommonPopupMenu.generated.h already included, missing '#pragma once' in CommonPopupMenu.h"
#endif
#define COMMONUI_CommonPopupMenu_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_RPC_WRAPPERS \
	virtual void HandlePostDifferentContextProviderSet_Implementation(); \
	virtual void HandlePreDifferentContextProviderSet_Implementation(); \
 \
	DECLARE_FUNCTION(execHandlePostDifferentContextProviderSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePostDifferentContextProviderSet_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePreDifferentContextProviderSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePreDifferentContextProviderSet_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnIsOpenChanged) \
	{ \
		P_GET_UBOOL(Z_Param_IsOpen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnIsOpenChanged(Z_Param_IsOpen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestClose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetContextProvider) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_NewContextProvidingObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetContextProvider(Z_Param_NewContextProvidingObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningMenuAnchor) \
	{ \
		P_GET_OBJECT(UMenuAnchor,Z_Param_MenuAnchor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwningMenuAnchor(Z_Param_MenuAnchor); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandlePostDifferentContextProviderSet_Implementation(); \
	virtual void HandlePreDifferentContextProviderSet_Implementation(); \
 \
	DECLARE_FUNCTION(execHandlePostDifferentContextProviderSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePostDifferentContextProviderSet_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePreDifferentContextProviderSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePreDifferentContextProviderSet_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnIsOpenChanged) \
	{ \
		P_GET_UBOOL(Z_Param_IsOpen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnIsOpenChanged(Z_Param_IsOpen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestClose(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetContextProvider) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_NewContextProvidingObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetContextProvider(Z_Param_NewContextProvidingObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningMenuAnchor) \
	{ \
		P_GET_OBJECT(UMenuAnchor,Z_Param_MenuAnchor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwningMenuAnchor(Z_Param_MenuAnchor); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_EVENT_PARMS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonPopupMenu(); \
	friend struct Z_Construct_UClass_UCommonPopupMenu_Statics; \
public: \
	DECLARE_CLASS(UCommonPopupMenu, UCommonActivatablePanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonPopupMenu)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCommonPopupMenu(); \
	friend struct Z_Construct_UClass_UCommonPopupMenu_Statics; \
public: \
	DECLARE_CLASS(UCommonPopupMenu, UCommonActivatablePanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonPopupMenu)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonPopupMenu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPopupMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPopupMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPopupMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPopupMenu(UCommonPopupMenu&&); \
	NO_API UCommonPopupMenu(const UCommonPopupMenu&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPopupMenu(UCommonPopupMenu&&); \
	NO_API UCommonPopupMenu(const UCommonPopupMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPopupMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPopupMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonPopupMenu)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bUseInputStack() { return STRUCT_OFFSET(UCommonPopupMenu, bUseInputStack); } \
	FORCEINLINE static uint32 __PPO__OwningMenuAnchor() { return STRUCT_OFFSET(UCommonPopupMenu, OwningMenuAnchor); } \
	FORCEINLINE static uint32 __PPO__ContextProvidingObject() { return STRUCT_OFFSET(UCommonPopupMenu, ContextProvidingObject); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_9_PROLOG \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_EVENT_PARMS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonPopupMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
