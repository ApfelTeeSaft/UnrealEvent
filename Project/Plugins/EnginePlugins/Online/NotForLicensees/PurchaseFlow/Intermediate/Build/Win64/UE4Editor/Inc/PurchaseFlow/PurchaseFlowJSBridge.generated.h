// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPurchaseFlowReceiptParam;
#ifdef PURCHASEFLOW_PurchaseFlowJSBridge_generated_h
#error "PurchaseFlowJSBridge.generated.h already included, missing '#pragma once' in PurchaseFlowJSBridge.h"
#endif
#define PURCHASEFLOW_PurchaseFlowJSBridge_generated_h

#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDefaultExternalBrowserID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDefaultExternalBrowserID(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExternalBrowserName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BrowserId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetExternalBrowserName(Z_Param_BrowserId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExternalBrowserPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BrowserId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetExternalBrowserPath(Z_Param_BrowserId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchExternalBrowserUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LaunchExternalBrowserUrl(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchValidatedExternalBrowserUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AllowedBrowserID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LaunchValidatedExternalBrowserUrl(Z_Param_AllowedBrowserID,Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRECEIPT) \
	{ \
		P_GET_STRUCT(FPurchaseFlowReceiptParam,Z_Param_NewRECEIPT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RECEIPT(Z_Param_NewRECEIPT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestClose) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CloseInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestClose(Z_Param_CloseInfo); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDefaultExternalBrowserID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDefaultExternalBrowserID(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExternalBrowserName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BrowserId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetExternalBrowserName(Z_Param_BrowserId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExternalBrowserPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BrowserId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetExternalBrowserPath(Z_Param_BrowserId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchExternalBrowserUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LaunchExternalBrowserUrl(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchValidatedExternalBrowserUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AllowedBrowserID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LaunchValidatedExternalBrowserUrl(Z_Param_AllowedBrowserID,Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRECEIPT) \
	{ \
		P_GET_STRUCT(FPurchaseFlowReceiptParam,Z_Param_NewRECEIPT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RECEIPT(Z_Param_NewRECEIPT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestClose) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CloseInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestClose(Z_Param_CloseInfo); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPurchaseFlowJSBridge(); \
	friend struct Z_Construct_UClass_UPurchaseFlowJSBridge_Statics; \
public: \
	DECLARE_CLASS(UPurchaseFlowJSBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PurchaseFlow"), NO_API) \
	DECLARE_SERIALIZER(UPurchaseFlowJSBridge)


#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUPurchaseFlowJSBridge(); \
	friend struct Z_Construct_UClass_UPurchaseFlowJSBridge_Statics; \
public: \
	DECLARE_CLASS(UPurchaseFlowJSBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PurchaseFlow"), NO_API) \
	DECLARE_SERIALIZER(UPurchaseFlowJSBridge)


#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPurchaseFlowJSBridge(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPurchaseFlowJSBridge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPurchaseFlowJSBridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPurchaseFlowJSBridge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPurchaseFlowJSBridge(UPurchaseFlowJSBridge&&); \
	NO_API UPurchaseFlowJSBridge(const UPurchaseFlowJSBridge&); \
public:


#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPurchaseFlowJSBridge(UPurchaseFlowJSBridge&&); \
	NO_API UPurchaseFlowJSBridge(const UPurchaseFlowJSBridge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPurchaseFlowJSBridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPurchaseFlowJSBridge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPurchaseFlowJSBridge)


#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_7_PROLOG
#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_INCLASS \
	FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EnginePlugins_Online_NotForLicensees_PurchaseFlow_Source_PurchaseFlow_Public_PurchaseFlowJSBridge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
