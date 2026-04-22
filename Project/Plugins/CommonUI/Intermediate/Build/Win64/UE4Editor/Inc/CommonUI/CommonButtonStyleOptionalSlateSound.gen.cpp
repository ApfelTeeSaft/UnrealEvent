// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonButtonStyleOptionalSlateSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonButtonStyleOptionalSlateSound() {}
// Cross Module References
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
// End Cross Module References
class UScriptStruct* FCommonButtonStyleOptionalSlateSound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONUI_API uint32 Get_Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonButtonStyleOptionalSlateSound"), sizeof(FCommonButtonStyleOptionalSlateSound), Get_Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonButtonStyleOptionalSlateSound(FCommonButtonStyleOptionalSlateSound::StaticStruct, TEXT("/Script/CommonUI"), TEXT("CommonButtonStyleOptionalSlateSound"), false, nullptr, nullptr);
static struct FScriptStruct_CommonUI_StaticRegisterNativesFCommonButtonStyleOptionalSlateSound
{
	FScriptStruct_CommonUI_StaticRegisterNativesFCommonButtonStyleOptionalSlateSound()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonButtonStyleOptionalSlateSound")),new UScriptStruct::TCppStructOps<FCommonButtonStyleOptionalSlateSound>);
	}
} ScriptStruct_CommonUI_StaticRegisterNativesFCommonButtonStyleOptionalSlateSound;
	struct Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSound_MetaData[];
#endif
		static void NewProp_bHasSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonStyleOptionalSlateSound.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonButtonStyleOptionalSlateSound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyleOptionalSlateSound" },
		{ "ModuleRelativePath", "Public/CommonButtonStyleOptionalSlateSound.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Struct, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonButtonStyleOptionalSlateSound, Sound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyleOptionalSlateSound" },
		{ "ModuleRelativePath", "Public/CommonButtonStyleOptionalSlateSound.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_SetBit(void* Obj)
	{
		((FCommonButtonStyleOptionalSlateSound*)Obj)->bHasSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCommonButtonStyleOptionalSlateSound), &Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonButtonStyleOptionalSlateSound",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCommonButtonStyleOptionalSlateSound),
		alignof(FCommonButtonStyleOptionalSlateSound),
		Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonButtonStyleOptionalSlateSound"), sizeof(FCommonButtonStyleOptionalSlateSound), Get_Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_CRC() { return 598452412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
