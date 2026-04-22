// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicGameplayStatsRuntime/Public/EEpicLeaderboardUpdateFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEpicLeaderboardUpdateFunction() {}
// Cross Module References
	EPICGAMEPLAYSTATSRUNTIME_API UEnum* Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardUpdateFunction();
	UPackage* Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
// End Cross Module References
	static UEnum* EEpicLeaderboardUpdateFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardUpdateFunction, Z_Construct_UPackage__Script_EpicGameplayStatsRuntime(), TEXT("EEpicLeaderboardUpdateFunction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEpicLeaderboardUpdateFunction(EEpicLeaderboardUpdateFunction_StaticEnum, TEXT("/Script/EpicGameplayStatsRuntime"), TEXT("EEpicLeaderboardUpdateFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardUpdateFunction_CRC() { return 3397848371U; }
	UEnum* Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardUpdateFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEpicLeaderboardUpdateFunction"), 0, Get_Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardUpdateFunction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEpicLeaderboardUpdateFunction::Min", (int64)EEpicLeaderboardUpdateFunction::Min },
				{ "EEpicLeaderboardUpdateFunction::Max", (int64)EEpicLeaderboardUpdateFunction::Max },
				{ "EEpicLeaderboardUpdateFunction::Sum", (int64)EEpicLeaderboardUpdateFunction::Sum },
				{ "EEpicLeaderboardUpdateFunction::MostRecent", (int64)EEpicLeaderboardUpdateFunction::MostRecent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEpicLeaderboardUpdateFunction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EpicGameplayStatsRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEpicLeaderboardUpdateFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EEpicLeaderboardUpdateFunction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
