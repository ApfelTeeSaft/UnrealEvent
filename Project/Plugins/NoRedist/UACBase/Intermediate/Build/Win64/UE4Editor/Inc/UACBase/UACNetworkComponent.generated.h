// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UACBASE_UACNetworkComponent_generated_h
#error "UACNetworkComponent.generated.h already included, missing '#pragma once' in UACNetworkComponent.h"
#endif
#define UACBASE_UACNetworkComponent_generated_h

#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_RPC_WRAPPERS \
	virtual void SendClientHello_Implementation(uint32 SessionKey); \
	virtual void SendPacketToClient_Implementation(uint8 Type, TArray<uint8> const& Packet); \
	virtual bool SendPacketToServer_Validate(uint8 , TArray<uint8> const& ); \
	virtual void SendPacketToServer_Implementation(uint8 Type, TArray<uint8> const& Packet); \
 \
	DECLARE_FUNCTION(execSendClientHello) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_SessionKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendClientHello_Implementation(Z_Param_SessionKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPacketToClient) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Type); \
		P_GET_TARRAY(uint8,Z_Param_Packet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendPacketToClient_Implementation(Z_Param_Type,Z_Param_Packet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPacketToServer) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Type); \
		P_GET_TARRAY(uint8,Z_Param_Packet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SendPacketToServer_Validate(Z_Param_Type,Z_Param_Packet)) \
		{ \
			RPC_ValidateFailed(TEXT("SendPacketToServer_Validate")); \
			return; \
		} \
		P_THIS->SendPacketToServer_Implementation(Z_Param_Type,Z_Param_Packet); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SendClientHello_Implementation(uint32 SessionKey); \
	virtual void SendPacketToClient_Implementation(uint8 Type, TArray<uint8> const& Packet); \
	virtual bool SendPacketToServer_Validate(uint8 , TArray<uint8> const& ); \
	virtual void SendPacketToServer_Implementation(uint8 Type, TArray<uint8> const& Packet); \
 \
	DECLARE_FUNCTION(execSendClientHello) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_SessionKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendClientHello_Implementation(Z_Param_SessionKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPacketToClient) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Type); \
		P_GET_TARRAY(uint8,Z_Param_Packet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendPacketToClient_Implementation(Z_Param_Type,Z_Param_Packet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPacketToServer) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Type); \
		P_GET_TARRAY(uint8,Z_Param_Packet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SendPacketToServer_Validate(Z_Param_Type,Z_Param_Packet)) \
		{ \
			RPC_ValidateFailed(TEXT("SendPacketToServer_Validate")); \
			return; \
		} \
		P_THIS->SendPacketToServer_Implementation(Z_Param_Type,Z_Param_Packet); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_EVENT_PARMS \
	struct UACNetworkComponent_eventSendClientHello_Parms \
	{ \
		uint32 SessionKey; \
	}; \
	struct UACNetworkComponent_eventSendPacketToClient_Parms \
	{ \
		uint8 Type; \
		TArray<uint8> Packet; \
	}; \
	struct UACNetworkComponent_eventSendPacketToServer_Parms \
	{ \
		uint8 Type; \
		TArray<uint8> Packet; \
	};


#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUACNetworkComponent(); \
	friend struct Z_Construct_UClass_UUACNetworkComponent_Statics; \
public: \
	DECLARE_CLASS(UUACNetworkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UACBase"), NO_API) \
	DECLARE_SERIALIZER(UUACNetworkComponent)


#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUUACNetworkComponent(); \
	friend struct Z_Construct_UClass_UUACNetworkComponent_Statics; \
public: \
	DECLARE_CLASS(UUACNetworkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UACBase"), NO_API) \
	DECLARE_SERIALIZER(UUACNetworkComponent)


#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUACNetworkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUACNetworkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUACNetworkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUACNetworkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUACNetworkComponent(UUACNetworkComponent&&); \
	NO_API UUACNetworkComponent(const UUACNetworkComponent&); \
public:


#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUACNetworkComponent(UUACNetworkComponent&&); \
	NO_API UUACNetworkComponent(const UUACNetworkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUACNetworkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUACNetworkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUACNetworkComponent)


#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_6_PROLOG \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_EVENT_PARMS


#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_INCLASS \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_NoRedist_UACBase_Source_UACBase_Public_UACNetworkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
