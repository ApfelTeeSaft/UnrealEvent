// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef SOCIALUMG_SocialListEntry_generated_h
#error "SocialListEntry.generated.h already included, missing '#pragma once' in SocialListEntry.h"
#endif
#define SOCIALUMG_SocialListEntry_generated_h

#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleGetMenuContent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->HandleGetMenuContent(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleGetMenuContent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->HandleGetMenuContent(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialListEntry(); \
	friend struct Z_Construct_UClass_USocialListEntry_Statics; \
public: \
	DECLARE_CLASS(USocialListEntry, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialListEntry) \
	virtual UObject* _getUObject() const override { return const_cast<USocialListEntry*>(this); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSocialListEntry(); \
	friend struct Z_Construct_UClass_USocialListEntry_Statics; \
public: \
	DECLARE_CLASS(USocialListEntry, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialListEntry) \
	virtual UObject* _getUObject() const override { return const_cast<USocialListEntry*>(this); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocialListEntry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocialListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialListEntry(USocialListEntry&&); \
	NO_API USocialListEntry(const USocialListEntry&); \
public:


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialListEntry(USocialListEntry&&); \
	NO_API USocialListEntry(const USocialListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialListEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialListEntry)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text_DisplayName() { return STRUCT_OFFSET(USocialListEntry, Text_DisplayName); } \
	FORCEINLINE static uint32 __PPO__Text_RichPresence() { return STRUCT_OFFSET(USocialListEntry, Text_RichPresence); } \
	FORCEINLINE static uint32 __PPO__MenuAnchor_Actions() { return STRUCT_OFFSET(USocialListEntry, MenuAnchor_Actions); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_11_PROLOG
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_INCLASS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialListEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
