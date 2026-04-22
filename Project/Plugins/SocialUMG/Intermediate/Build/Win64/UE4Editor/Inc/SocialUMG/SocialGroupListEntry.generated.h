// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef SOCIALUMG_SocialGroupListEntry_generated_h
#error "SocialGroupListEntry.generated.h already included, missing '#pragma once' in SocialGroupListEntry.h"
#endif
#define SOCIALUMG_SocialGroupListEntry_generated_h

#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleGetMenuContent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->HandleGetMenuContent(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleGetMenuContent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->HandleGetMenuContent(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialGroupListEntry(); \
	friend struct Z_Construct_UClass_USocialGroupListEntry_Statics; \
public: \
	DECLARE_CLASS(USocialGroupListEntry, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialGroupListEntry) \
	virtual UObject* _getUObject() const override { return const_cast<USocialGroupListEntry*>(this); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSocialGroupListEntry(); \
	friend struct Z_Construct_UClass_USocialGroupListEntry_Statics; \
public: \
	DECLARE_CLASS(USocialGroupListEntry, UCommonButton, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SocialUMG"), NO_API) \
	DECLARE_SERIALIZER(USocialGroupListEntry) \
	virtual UObject* _getUObject() const override { return const_cast<USocialGroupListEntry*>(this); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocialGroupListEntry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocialGroupListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialGroupListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialGroupListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialGroupListEntry(USocialGroupListEntry&&); \
	NO_API USocialGroupListEntry(const USocialGroupListEntry&); \
public:


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialGroupListEntry(USocialGroupListEntry&&); \
	NO_API USocialGroupListEntry(const USocialGroupListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialGroupListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialGroupListEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialGroupListEntry)


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text_GroupName() { return STRUCT_OFFSET(USocialGroupListEntry, Text_GroupName); } \
	FORCEINLINE static uint32 __PPO__MenuAnchor_Actions() { return STRUCT_OFFSET(USocialGroupListEntry, MenuAnchor_Actions); }


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_12_PROLOG
#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_INCLASS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_SocialUMG_Source_SocialUMG_Public_SocialGroupListEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
