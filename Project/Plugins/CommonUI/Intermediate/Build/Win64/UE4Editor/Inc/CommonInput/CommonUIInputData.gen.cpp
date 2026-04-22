// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInput/Public/CommonUIInputData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIInputData() {}
// Cross Module References
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonUIInputData_NoRegister();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonUIInputData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
	void UCommonUIInputData::StaticRegisterNativesUCommonUIInputData()
	{
	}
	UClass* Z_Construct_UClass_UCommonUIInputData_NoRegister()
	{
		return UCommonUIInputData::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUIInputData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultClickAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultClickAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUIInputData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonUIInputData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUIInputData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUIInputData" },
		{ "ModuleRelativePath", "Public/CommonUIInputData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultClickAction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonUIInputData, DefaultClickAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUIInputData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUIInputData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIInputData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIInputData_Statics::ClassParams = {
		&UCommonUIInputData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		nullptr, 0,
		Z_Construct_UClass_UCommonUIInputData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputData_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUIInputData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonUIInputData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonUIInputData, 3714798724);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonUIInputData(Z_Construct_UClass_UCommonUIInputData, &UCommonUIInputData::StaticClass, TEXT("/Script/CommonInput"), TEXT("UCommonUIInputData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIInputData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
