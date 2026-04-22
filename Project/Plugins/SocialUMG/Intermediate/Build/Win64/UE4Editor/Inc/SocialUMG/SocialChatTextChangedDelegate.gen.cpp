// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialChatTextChangedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatTextChangedDelegate() {}
// Cross Module References
	SOCIALUMG_API UFunction* Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics
	{
		struct _Script_SocialUMG_eventSocialChatTextChanged_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_SocialUMG_eventSocialChatTextChanged_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialChatTextChangedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SocialUMG, "SocialChatTextChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04130000, sizeof(_Script_SocialUMG_eventSocialChatTextChanged_Parms), Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SocialUMG_SocialChatTextChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
