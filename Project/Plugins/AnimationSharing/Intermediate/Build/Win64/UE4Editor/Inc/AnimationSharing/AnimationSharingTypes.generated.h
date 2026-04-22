// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
class AActor;
#ifdef ANIMATIONSHARING_AnimationSharingTypes_generated_h
#error "AnimationSharingTypes.generated.h already included, missing '#pragma once' in AnimationSharingTypes.h"
#endif
#define ANIMATIONSHARING_AnimationSharingTypes_generated_h

#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationStateEntry_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationSetup_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_RPC_WRAPPERS \
	virtual UEnum* GetAnimationStateEnum_Implementation(); \
	virtual void ProcessActorState_Implementation(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess); \
 \
	DECLARE_FUNCTION(execGetAnimationStateEnum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEnum**)Z_Param__Result=P_THIS->GetAnimationStateEnum_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessActorState) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutState); \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CurrentState); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OnDemandState); \
		P_GET_UBOOL_REF(Z_Param_Out_bShouldProcess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProcessActorState_Implementation(Z_Param_Out_OutState,Z_Param_InActor,Z_Param_CurrentState,Z_Param_OnDemandState,Z_Param_Out_bShouldProcess); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimationStateEnum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEnum**)Z_Param__Result=P_THIS->GetAnimationStateEnum_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessActorState) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutState); \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CurrentState); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OnDemandState); \
		P_GET_UBOOL_REF(Z_Param_Out_bShouldProcess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProcessActorState_Implementation(Z_Param_Out_OutState,Z_Param_InActor,Z_Param_CurrentState,Z_Param_OnDemandState,Z_Param_Out_bShouldProcess); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_EVENT_PARMS \
	struct AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms \
	{ \
		UEnum* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct AnimationSharingStateProcessor_eventProcessActorState_Parms \
	{ \
		int32 OutState; \
		AActor* InActor; \
		uint8 CurrentState; \
		uint8 OnDemandState; \
		bool bShouldProcess; \
	};


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSharingStateProcessor(); \
	friend struct Z_Construct_UClass_UAnimationSharingStateProcessor_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingStateProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSharingStateProcessor)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSharingStateProcessor(); \
	friend struct Z_Construct_UClass_UAnimationSharingStateProcessor_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingStateProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSharingStateProcessor)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSharingStateProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingStateProcessor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSharingStateProcessor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingStateProcessor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSharingStateProcessor(UAnimationSharingStateProcessor&&); \
	NO_API UAnimationSharingStateProcessor(const UAnimationSharingStateProcessor&); \
public:


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSharingStateProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSharingStateProcessor(UAnimationSharingStateProcessor&&); \
	NO_API UAnimationSharingStateProcessor(const UAnimationSharingStateProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSharingStateProcessor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingStateProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingStateProcessor)


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_92_PROLOG \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_EVENT_PARMS


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_INCLASS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
