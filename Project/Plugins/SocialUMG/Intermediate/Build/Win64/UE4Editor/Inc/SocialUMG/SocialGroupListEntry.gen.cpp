// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialGroupListEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialGroupListEntry() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialGroupListEntry_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialGroupListEntry();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
// End Cross Module References
	void USocialGroupListEntry::StaticRegisterNativesUSocialGroupListEntry()
	{
		UClass* Class = USocialGroupListEntry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleGetMenuContent", &USocialGroupListEntry::execHandleGetMenuContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics
	{
		struct SocialGroupListEntry_eventHandleGetMenuContent_Parms
		{
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(SocialGroupListEntry_eventHandleGetMenuContent_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialGroupListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialGroupListEntry, "HandleGetMenuContent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(SocialGroupListEntry_eventHandleGetMenuContent_Parms), Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocialGroupListEntry_NoRegister()
	{
		return USocialGroupListEntry::StaticClass();
	}
	struct Z_Construct_UClass_USocialGroupListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuAnchor_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuAnchor_Actions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialGroupListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButton,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocialGroupListEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocialGroupListEntry_HandleGetMenuContent, "HandleGetMenuContent" }, // 4047413701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupListEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialGroupListEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialGroupListEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_MenuAnchor_Actions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialGroupListEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialGroupListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_MenuAnchor_Actions = { UE4CodeGen_Private::EPropertyClass::Object, "MenuAnchor_Actions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(USocialGroupListEntry, MenuAnchor_Actions), Z_Construct_UClass_UMenuAnchor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_MenuAnchor_Actions_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_MenuAnchor_Actions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_Text_GroupName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialGroupListEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialGroupListEntry.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))\n USocialGroupChannel* SocialGroup; Didnt exist on s7" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_Text_GroupName = { UE4CodeGen_Private::EPropertyClass::Object, "Text_GroupName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(USocialGroupListEntry, Text_GroupName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_Text_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_Text_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialGroupListEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_MenuAnchor_Actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupListEntry_Statics::NewProp_Text_GroupName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USocialGroupListEntry_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(USocialGroupListEntry, IUserObjectListEntry), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialGroupListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialGroupListEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialGroupListEntry_Statics::ClassParams = {
		&USocialGroupListEntry::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USocialGroupListEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialGroupListEntry_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_USocialGroupListEntry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialGroupListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialGroupListEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialGroupListEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialGroupListEntry, 4048593209);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialGroupListEntry(Z_Construct_UClass_USocialGroupListEntry, &USocialGroupListEntry::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialGroupListEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialGroupListEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
