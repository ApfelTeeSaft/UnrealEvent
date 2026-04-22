// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicGameplayStatsRuntime/Public/GameplayStatMetadataTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayStatMetadataTableRow() {}
// Cross Module References
	EPICGAMEPLAYSTATSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow();
	UPackage* Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReferenceHelper();
	EPICGAMEPLAYSTATSRUNTIME_API UEnum* Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardDataType();
	EPICGAMEPLAYSTATSRUNTIME_API UEnum* Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardUpdateFunction();
	EPICGAMEPLAYSTATSRUNTIME_API UEnum* Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardTimeWindow();
// End Cross Module References
class UScriptStruct* FGameplayStatMetadataTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICGAMEPLAYSTATSRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow, Z_Construct_UPackage__Script_EpicGameplayStatsRuntime(), TEXT("GameplayStatMetadataTableRow"), sizeof(FGameplayStatMetadataTableRow), Get_Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayStatMetadataTableRow(FGameplayStatMetadataTableRow::StaticStruct, TEXT("/Script/EpicGameplayStatsRuntime"), TEXT("GameplayStatMetadataTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFGameplayStatMetadataTableRow
{
	FScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFGameplayStatMetadataTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayStatMetadataTableRow")),new UScriptStruct::TCppStructOps<FGameplayStatMetadataTableRow>);
	}
} ScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFGameplayStatMetadataTableRow;
	struct Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceHelper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInFrontEnd_MetaData[];
#endif
		static void NewProp_bShowInFrontEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInFrontEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportToBackEnd_MetaData[];
#endif
		static void NewProp_bExportToBackEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportToBackEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeeklyRefreshInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeeklyRefreshInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPublish_MetaData[];
#endif
		static void NewProp_bPublish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPublish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metric_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Metric;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Metric_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Windows_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Windows;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Windows_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Windows_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackendName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BackendName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayStatMetadataTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_ReferenceHelper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_ReferenceHelper = { UE4CodeGen_Private::EPropertyClass::Struct, "ReferenceHelper", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayStatMetadataTableRow, ReferenceHelper), Z_Construct_UScriptStruct_FGameplayTagReferenceHelper, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_ReferenceHelper_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_ReferenceHelper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bShowInFrontEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bShowInFrontEnd_SetBit(void* Obj)
	{
		((FGameplayStatMetadataTableRow*)Obj)->bShowInFrontEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bShowInFrontEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowInFrontEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGameplayStatMetadataTableRow), &Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bShowInFrontEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bShowInFrontEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bShowInFrontEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bExportToBackEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bExportToBackEnd_SetBit(void* Obj)
	{
		((FGameplayStatMetadataTableRow*)Obj)->bExportToBackEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bExportToBackEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "bExportToBackEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGameplayStatMetadataTableRow), &Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bExportToBackEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bExportToBackEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bExportToBackEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_WeeklyRefreshInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_WeeklyRefreshInterval = { UE4CodeGen_Private::EPropertyClass::Int, "WeeklyRefreshInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayStatMetadataTableRow, WeeklyRefreshInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_WeeklyRefreshInterval_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_WeeklyRefreshInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bPublish_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bPublish_SetBit(void* Obj)
	{
		((FGameplayStatMetadataTableRow*)Obj)->bPublish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bPublish = { UE4CodeGen_Private::EPropertyClass::Bool, "bPublish", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGameplayStatMetadataTableRow), &Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bPublish_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bPublish_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bPublish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DataType = { UE4CodeGen_Private::EPropertyClass::Enum, "DataType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayStatMetadataTableRow, DataType), Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DataType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DataType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Metric_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Metric = { UE4CodeGen_Private::EPropertyClass::Enum, "Metric", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayStatMetadataTableRow, Metric), Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardUpdateFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Metric_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Metric_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Metric_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Windows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Windows = { UE4CodeGen_Private::EPropertyClass::Array, "Windows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayStatMetadataTableRow, Windows), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Windows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Windows_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Windows_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "Windows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardTimeWindow, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Windows_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayStatMetadataTableRow, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_BackendName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatMetadataTableRow" },
		{ "ModuleRelativePath", "Public/GameplayStatMetadataTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_BackendName = { UE4CodeGen_Private::EPropertyClass::Str, "BackendName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameplayStatMetadataTableRow, BackendName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_BackendName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_BackendName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_ReferenceHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bShowInFrontEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bExportToBackEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_WeeklyRefreshInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_bPublish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Metric,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Metric_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Windows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Windows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_Windows_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::NewProp_BackendName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicGameplayStatsRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GameplayStatMetadataTableRow",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGameplayStatMetadataTableRow),
		alignof(FGameplayStatMetadataTableRow),
		Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayStatMetadataTableRow"), sizeof(FGameplayStatMetadataTableRow), Get_Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayStatMetadataTableRow_CRC() { return 3696247400U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
