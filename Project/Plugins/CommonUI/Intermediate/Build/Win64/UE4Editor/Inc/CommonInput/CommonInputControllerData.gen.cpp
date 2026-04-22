// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInput/Public/CommonInputControllerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputControllerData() {}
// Cross Module References
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputControllerData_NoRegister();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputControllerData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
	COMMONINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonGamepadType();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
// End Cross Module References
	void UCommonInputControllerData::StaticRegisterNativesUCommonInputControllerData()
	{
	}
	UClass* Z_Construct_UClass_UCommonInputControllerData_NoRegister()
	{
		return UCommonInputControllerData::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputControllerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputBrushDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputBrushDataMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputBrushDataMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GamepadType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GamepadType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputControllerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputControllerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonInputControllerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonInputControllerData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputBrushDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputControllerData" },
		{ "ModuleRelativePath", "Public/CommonInputControllerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputBrushDataMap = { UE4CodeGen_Private::EPropertyClass::Array, "InputBrushDataMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonInputControllerData, InputBrushDataMap), METADATA_PARAMS(Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputBrushDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputBrushDataMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputBrushDataMap_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputBrushDataMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_GamepadType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputControllerData" },
		{ "ModuleRelativePath", "Public/CommonInputControllerData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_GamepadType = { UE4CodeGen_Private::EPropertyClass::Enum, "GamepadType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonInputControllerData, GamepadType), Z_Construct_UEnum_CommonInput_ECommonGamepadType, METADATA_PARAMS(Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_GamepadType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_GamepadType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_GamepadType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputControllerData" },
		{ "ModuleRelativePath", "Public/CommonInputControllerData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputType = { UE4CodeGen_Private::EPropertyClass::Enum, "InputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonInputControllerData, InputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputControllerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputBrushDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputBrushDataMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_GamepadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_GamepadType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputControllerData_Statics::NewProp_InputType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputControllerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputControllerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputControllerData_Statics::ClassParams = {
		&UCommonInputControllerData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		nullptr, 0,
		Z_Construct_UClass_UCommonInputControllerData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonInputControllerData_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputControllerData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonInputControllerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputControllerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonInputControllerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonInputControllerData, 2927443576);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonInputControllerData(Z_Construct_UClass_UCommonInputControllerData, &UCommonInputControllerData::StaticClass, TEXT("/Script/CommonInput"), TEXT("UCommonInputControllerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputControllerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
