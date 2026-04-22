// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/OnCMSTileConfirmedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnCMSTileConfirmedDelegate() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics
	{
		struct _Script_EpicCMSUIFramework_eventOnCMSTileConfirmed_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_EpicCMSUIFramework_eventOnCMSTileConfirmed_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_EpicCMSUIFramework_eventOnCMSTileConfirmed_Parms), &Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnCMSTileConfirmedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicCMSUIFramework, "OnCMSTileConfirmed__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04130000, sizeof(_Script_EpicCMSUIFramework_eventOnCMSTileConfirmed_Parms), Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EpicCMSUIFramework_OnCMSTileConfirmed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
