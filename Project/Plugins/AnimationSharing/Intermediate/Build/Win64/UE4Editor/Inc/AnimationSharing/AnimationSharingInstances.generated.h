// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ANIMATIONSHARING_AnimationSharingInstances_generated_h
#error "AnimationSharingInstances.generated.h already included, missing '#pragma once' in AnimationSharingInstances.h"
#endif
#define ANIMATIONSHARING_AnimationSharingInstances_generated_h

#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInstancedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetInstancedActors(Z_Param_Out_Actors); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInstancedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetInstancedActors(Z_Param_Out_Actors); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSharingStateInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingStateInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingStateInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingStateInstance)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSharingStateInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingStateInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingStateInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingStateInstance)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingStateInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingStateInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingStateInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingStateInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingStateInstance(UAnimSharingStateInstance&&); \
	NO_API UAnimSharingStateInstance(const UAnimSharingStateInstance&); \
public:


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingStateInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingStateInstance(UAnimSharingStateInstance&&); \
	NO_API UAnimSharingStateInstance(const UAnimSharingStateInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingStateInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingStateInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingStateInstance)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimationToPlay() { return STRUCT_OFFSET(UAnimSharingStateInstance, AnimationToPlay); } \
	FORCEINLINE static uint32 __PPO__PermutationTimeOffset() { return STRUCT_OFFSET(UAnimSharingStateInstance, PermutationTimeOffset); } \
	FORCEINLINE static uint32 __PPO__PlayRate() { return STRUCT_OFFSET(UAnimSharingStateInstance, PlayRate); } \
	FORCEINLINE static uint32 __PPO__bStateBool() { return STRUCT_OFFSET(UAnimSharingStateInstance, bStateBool); } \
	FORCEINLINE static uint32 __PPO__Instance() { return STRUCT_OFFSET(UAnimSharingStateInstance, Instance); }


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_10_PROLOG
#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_INCLASS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSharingStateInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_RPC_WRAPPERS
#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSharingTransitionInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingTransitionInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingTransitionInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingTransitionInstance)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSharingTransitionInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingTransitionInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingTransitionInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingTransitionInstance)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingTransitionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingTransitionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingTransitionInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingTransitionInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingTransitionInstance(UAnimSharingTransitionInstance&&); \
	NO_API UAnimSharingTransitionInstance(const UAnimSharingTransitionInstance&); \
public:


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingTransitionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingTransitionInstance(UAnimSharingTransitionInstance&&); \
	NO_API UAnimSharingTransitionInstance(const UAnimSharingTransitionInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingTransitionInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingTransitionInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingTransitionInstance)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FromComponent() { return STRUCT_OFFSET(UAnimSharingTransitionInstance, FromComponent); } \
	FORCEINLINE static uint32 __PPO__ToComponent() { return STRUCT_OFFSET(UAnimSharingTransitionInstance, ToComponent); } \
	FORCEINLINE static uint32 __PPO__BlendTime() { return STRUCT_OFFSET(UAnimSharingTransitionInstance, BlendTime); } \
	FORCEINLINE static uint32 __PPO__bBlendBool() { return STRUCT_OFFSET(UAnimSharingTransitionInstance, bBlendBool); }


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_41_PROLOG
#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_INCLASS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSharingTransitionInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_RPC_WRAPPERS
#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSharingAdditiveInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingAdditiveInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingAdditiveInstance)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSharingAdditiveInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingAdditiveInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingAdditiveInstance)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingAdditiveInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingAdditiveInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingAdditiveInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingAdditiveInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingAdditiveInstance(UAnimSharingAdditiveInstance&&); \
	NO_API UAnimSharingAdditiveInstance(const UAnimSharingAdditiveInstance&); \
public:


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingAdditiveInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingAdditiveInstance(UAnimSharingAdditiveInstance&&); \
	NO_API UAnimSharingAdditiveInstance(const UAnimSharingAdditiveInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingAdditiveInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingAdditiveInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingAdditiveInstance)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseComponent() { return STRUCT_OFFSET(UAnimSharingAdditiveInstance, BaseComponent); } \
	FORCEINLINE static uint32 __PPO__AdditiveAnimation() { return STRUCT_OFFSET(UAnimSharingAdditiveInstance, AdditiveAnimation); } \
	FORCEINLINE static uint32 __PPO__Alpha() { return STRUCT_OFFSET(UAnimSharingAdditiveInstance, Alpha); } \
	FORCEINLINE static uint32 __PPO__bStateBool() { return STRUCT_OFFSET(UAnimSharingAdditiveInstance, bStateBool); }


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_62_PROLOG
#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_INCLASS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_67_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSharingAdditiveInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
