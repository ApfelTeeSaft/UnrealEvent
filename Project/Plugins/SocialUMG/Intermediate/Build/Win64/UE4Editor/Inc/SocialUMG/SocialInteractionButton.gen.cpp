// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialInteractionButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialInteractionButton() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialInteractionButton_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialInteractionButton();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialInteractionButton_GetInteractionName();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialInteractionButton_OnInteractionSet();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FName NAME_USocialInteractionButton_OnInteractionSet = FName(TEXT("OnInteractionSet"));
	void USocialInteractionButton::OnInteractionSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_USocialInteractionButton_OnInteractionSet),NULL);
	}
	void USocialInteractionButton::StaticRegisterNativesUSocialInteractionButton()
	{
		UClass* Class = USocialInteractionButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInteractionName", &USocialInteractionButton::execGetInteractionName },
			{ "IsPlatformOnlyFriend", &USocialInteractionButton::execIsPlatformOnlyFriend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics
	{
		struct SocialInteractionButton_eventGetInteractionName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SocialInteractionButton_eventGetInteractionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialInteractionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialInteractionButton, "GetInteractionName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(SocialInteractionButton_eventGetInteractionName_Parms), Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialInteractionButton_GetInteractionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialInteractionButton_GetInteractionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics
	{
		struct SocialInteractionButton_eventIsPlatformOnlyFriend_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocialInteractionButton_eventIsPlatformOnlyFriend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocialInteractionButton_eventIsPlatformOnlyFriend_Parms), &Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialInteractionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialInteractionButton, "IsPlatformOnlyFriend", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(SocialInteractionButton_eventIsPlatformOnlyFriend_Parms), Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialInteractionButton_OnInteractionSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialInteractionButton_OnInteractionSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialInteractionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialInteractionButton_OnInteractionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialInteractionButton, "OnInteractionSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialInteractionButton_OnInteractionSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionButton_OnInteractionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialInteractionButton_OnInteractionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialInteractionButton_OnInteractionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocialInteractionButton_NoRegister()
	{
		return USocialInteractionButton::StaticClass();
	}
	struct Z_Construct_UClass_USocialInteractionButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Border_InteractionIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Border_InteractionIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_InteractionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_InteractionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertingIndicatorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlertingIndicatorColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultIndicatorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultIndicatorColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialInteractionButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButton,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocialInteractionButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocialInteractionButton_GetInteractionName, "GetInteractionName" }, // 4072799351
		{ &Z_Construct_UFunction_USocialInteractionButton_IsPlatformOnlyFriend, "IsPlatformOnlyFriend" }, // 3336000689
		{ &Z_Construct_UFunction_USocialInteractionButton_OnInteractionSet, "OnInteractionSet" }, // 929617142
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialInteractionButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Border_InteractionIndicator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Border_InteractionIndicator = { UE4CodeGen_Private::EPropertyClass::Object, "Border_InteractionIndicator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialInteractionButton, Border_InteractionIndicator), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Border_InteractionIndicator_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Border_InteractionIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Text_InteractionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Text_InteractionName = { UE4CodeGen_Private::EPropertyClass::Object, "Text_InteractionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialInteractionButton, Text_InteractionName), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Text_InteractionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Text_InteractionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_AlertingIndicatorColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionButton" },
		{ "ModuleRelativePath", "Public/SocialInteractionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_AlertingIndicatorColor = { UE4CodeGen_Private::EPropertyClass::Struct, "AlertingIndicatorColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USocialInteractionButton, AlertingIndicatorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_AlertingIndicatorColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_AlertingIndicatorColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_DefaultIndicatorColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionButton" },
		{ "ModuleRelativePath", "Public/SocialInteractionButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_DefaultIndicatorColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultIndicatorColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USocialInteractionButton, DefaultIndicatorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_DefaultIndicatorColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_DefaultIndicatorColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialInteractionButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Border_InteractionIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_Text_InteractionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_AlertingIndicatorColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionButton_Statics::NewProp_DefaultIndicatorColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialInteractionButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialInteractionButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialInteractionButton_Statics::ClassParams = {
		&USocialInteractionButton::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USocialInteractionButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionButton_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialInteractionButton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialInteractionButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialInteractionButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialInteractionButton, 1149227297);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialInteractionButton(Z_Construct_UClass_USocialInteractionButton, &USocialInteractionButton::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialInteractionButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialInteractionButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
