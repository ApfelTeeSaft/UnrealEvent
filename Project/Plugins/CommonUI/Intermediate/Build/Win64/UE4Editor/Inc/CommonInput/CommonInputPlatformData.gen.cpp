// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInput/Public/CommonInputPlatformData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputPlatformData() {}
// Cross Module References
	COMMONINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputPlatformData();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputControllerData_NoRegister();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonGamepadType();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
// End Cross Module References
class UScriptStruct* FCommonInputPlatformData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONINPUT_API uint32 Get_Z_Construct_UScriptStruct_FCommonInputPlatformData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputPlatformData, Z_Construct_UPackage__Script_CommonInput(), TEXT("CommonInputPlatformData"), sizeof(FCommonInputPlatformData), Get_Z_Construct_UScriptStruct_FCommonInputPlatformData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonInputPlatformData(FCommonInputPlatformData::StaticStruct, TEXT("/Script/CommonInput"), TEXT("CommonInputPlatformData"), false, nullptr, nullptr);
static struct FScriptStruct_CommonInput_StaticRegisterNativesFCommonInputPlatformData
{
	FScriptStruct_CommonInput_StaticRegisterNativesFCommonInputPlatformData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonInputPlatformData")),new UScriptStruct::TCppStructOps<FCommonInputPlatformData>);
	}
} ScriptStruct_CommonInput_StaticRegisterNativesFCommonInputPlatformData;
	struct Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControllerData;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ControllerData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsTouch_MetaData[];
#endif
		static void NewProp_bSupportsTouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsTouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanChangeGamepadType_MetaData[];
#endif
		static void NewProp_bCanChangeGamepadType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanChangeGamepadType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGamepadType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultGamepadType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultGamepadType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsGamepad_MetaData[];
#endif
		static void NewProp_bSupportsGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsGamepad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsMouseAndKeyboard_MetaData[];
#endif
		static void NewProp_bSupportsMouseAndKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsMouseAndKeyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupported_MetaData[];
#endif
		static void NewProp_bSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupported;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonInputPlatformData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputPlatformData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_ControllerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputPlatformData" },
		{ "ModuleRelativePath", "Public/CommonInputPlatformData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_ControllerData = { UE4CodeGen_Private::EPropertyClass::Array, "ControllerData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputPlatformData, ControllerData), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_ControllerData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_ControllerData_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_ControllerData_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "ControllerData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UCommonInputControllerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsTouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputPlatformData" },
		{ "ModuleRelativePath", "Public/CommonInputPlatformData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsTouch_SetBit(void* Obj)
	{
		((FCommonInputPlatformData*)Obj)->bSupportsTouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsTouch = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsTouch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCommonInputPlatformData), &Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsTouch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsTouch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsTouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bCanChangeGamepadType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputPlatformData" },
		{ "ModuleRelativePath", "Public/CommonInputPlatformData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bCanChangeGamepadType_SetBit(void* Obj)
	{
		((FCommonInputPlatformData*)Obj)->bCanChangeGamepadType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bCanChangeGamepadType = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanChangeGamepadType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCommonInputPlatformData), &Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bCanChangeGamepadType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bCanChangeGamepadType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bCanChangeGamepadType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultGamepadType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputPlatformData" },
		{ "ModuleRelativePath", "Public/CommonInputPlatformData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultGamepadType = { UE4CodeGen_Private::EPropertyClass::Enum, "DefaultGamepadType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputPlatformData, DefaultGamepadType), Z_Construct_UEnum_CommonInput_ECommonGamepadType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultGamepadType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultGamepadType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultGamepadType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsGamepad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputPlatformData" },
		{ "ModuleRelativePath", "Public/CommonInputPlatformData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsGamepad_SetBit(void* Obj)
	{
		((FCommonInputPlatformData*)Obj)->bSupportsGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsGamepad = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsGamepad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCommonInputPlatformData), &Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsGamepad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsGamepad_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsGamepad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsMouseAndKeyboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputPlatformData" },
		{ "ModuleRelativePath", "Public/CommonInputPlatformData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsMouseAndKeyboard_SetBit(void* Obj)
	{
		((FCommonInputPlatformData*)Obj)->bSupportsMouseAndKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsMouseAndKeyboard = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsMouseAndKeyboard", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCommonInputPlatformData), &Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsMouseAndKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsMouseAndKeyboard_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsMouseAndKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultInputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputPlatformData" },
		{ "ModuleRelativePath", "Public/CommonInputPlatformData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultInputType = { UE4CodeGen_Private::EPropertyClass::Enum, "DefaultInputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputPlatformData, DefaultInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultInputType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultInputType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupported_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputPlatformData" },
		{ "ModuleRelativePath", "Public/CommonInputPlatformData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupported_SetBit(void* Obj)
	{
		((FCommonInputPlatformData*)Obj)->bSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupported = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupported", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCommonInputPlatformData), &Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupported_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupported_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_ControllerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_ControllerData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsTouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bCanChangeGamepadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultGamepadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultGamepadType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupportsMouseAndKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_DefaultInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::NewProp_bSupported,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
		nullptr,
		&NewStructOps,
		"CommonInputPlatformData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCommonInputPlatformData),
		alignof(FCommonInputPlatformData),
		Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputPlatformData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonInputPlatformData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonInputPlatformData"), sizeof(FCommonInputPlatformData), Get_Z_Construct_UScriptStruct_FCommonInputPlatformData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonInputPlatformData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonInputPlatformData_CRC() { return 1117566446U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
