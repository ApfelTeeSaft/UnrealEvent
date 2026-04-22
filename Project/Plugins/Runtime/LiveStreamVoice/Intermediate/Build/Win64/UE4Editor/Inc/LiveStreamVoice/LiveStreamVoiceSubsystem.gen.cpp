// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveStreamVoice/Public/LiveStreamVoiceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveStreamVoiceSubsystem() {}
// Cross Module References
	LIVESTREAMVOICE_API UClass* Z_Construct_UClass_ULiveStreamVoiceSubsystem_NoRegister();
	LIVESTREAMVOICE_API UClass* Z_Construct_UClass_ULiveStreamVoiceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_LiveStreamVoice();
	LIVESTREAMVOICE_API UFunction* Z_Construct_UFunction_ULiveStreamVoiceSubsystem_ClearVoiceSettings();
	LIVESTREAMVOICE_API UFunction* Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing();
	LIVESTREAMVOICE_API UFunction* Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceSettings();
// End Cross Module References
	void ULiveStreamVoiceSubsystem::StaticRegisterNativesULiveStreamVoiceSubsystem()
	{
		UClass* Class = ULiveStreamVoiceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearVoiceSettings", &ULiveStreamVoiceSubsystem::execClearVoiceSettings },
			{ "EnableLocalVoiceProcessing", &ULiveStreamVoiceSubsystem::execEnableLocalVoiceProcessing },
			{ "SetVoiceSettings", &ULiveStreamVoiceSubsystem::execSetVoiceSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveStreamVoiceSubsystem_ClearVoiceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveStreamVoiceSubsystem_ClearVoiceSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveStreamVoiceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveStreamVoiceSubsystem_ClearVoiceSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveStreamVoiceSubsystem, "ClearVoiceSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_ClearVoiceSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_ClearVoiceSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveStreamVoiceSubsystem_ClearVoiceSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveStreamVoiceSubsystem_ClearVoiceSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics
	{
		struct LiveStreamVoiceSubsystem_eventEnableLocalVoiceProcessing_Parms
		{
			uint8 LocalUserNum;
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalUserNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((LiveStreamVoiceSubsystem_eventEnableLocalVoiceProcessing_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LiveStreamVoiceSubsystem_eventEnableLocalVoiceProcessing_Parms), &Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::NewProp_LocalUserNum = { UE4CodeGen_Private::EPropertyClass::Byte, "LocalUserNum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LiveStreamVoiceSubsystem_eventEnableLocalVoiceProcessing_Parms, LocalUserNum), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::NewProp_LocalUserNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveStreamVoiceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveStreamVoiceSubsystem, "EnableLocalVoiceProcessing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LiveStreamVoiceSubsystem_eventEnableLocalVoiceProcessing_Parms), Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics
	{
		struct LiveStreamVoiceSubsystem_eventSetVoiceSettings_Parms
		{
			FVoiceSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::NewProp_InSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "InSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(LiveStreamVoiceSubsystem_eventSetVoiceSettings_Parms, InSettings), Z_Construct_UScriptStruct_FVoiceSettings, METADATA_PARAMS(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::NewProp_InSettings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveStreamVoiceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveStreamVoiceSubsystem, "SetVoiceSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(LiveStreamVoiceSubsystem_eventSetVoiceSettings_Parms), Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULiveStreamVoiceSubsystem_NoRegister()
	{
		return ULiveStreamVoiceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveStreamVoice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveStreamVoiceSubsystem_ClearVoiceSettings, "ClearVoiceSettings" }, // 4139920706
		{ &Z_Construct_UFunction_ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing, "EnableLocalVoiceProcessing" }, // 184269102
		{ &Z_Construct_UFunction_ULiveStreamVoiceSubsystem_SetVoiceSettings, "SetVoiceSettings" }, // 1595439815
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiveStreamVoiceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveStreamVoiceSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LiveStreamVoiceSubsystem" },
		{ "ModuleRelativePath", "Public/LiveStreamVoiceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::NewProp_PlaybackSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaybackSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000005, 1, nullptr, STRUCT_OFFSET(ULiveStreamVoiceSubsystem, PlaybackSettings), Z_Construct_UScriptStruct_FVoiceSettings, METADATA_PARAMS(Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::NewProp_PlaybackSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::NewProp_PlaybackSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::NewProp_PlaybackSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveStreamVoiceSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::ClassParams = {
		&ULiveStreamVoiceSubsystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveStreamVoiceSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveStreamVoiceSubsystem, 1109667439);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveStreamVoiceSubsystem(Z_Construct_UClass_ULiveStreamVoiceSubsystem, &ULiveStreamVoiceSubsystem::StaticClass, TEXT("/Script/LiveStreamVoice"), TEXT("ULiveStreamVoiceSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveStreamVoiceSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
