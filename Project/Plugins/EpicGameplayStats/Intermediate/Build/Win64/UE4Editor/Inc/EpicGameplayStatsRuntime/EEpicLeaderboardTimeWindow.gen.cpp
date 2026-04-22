// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicGameplayStatsRuntime/Public/EEpicLeaderboardTimeWindow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEpicLeaderboardTimeWindow() {}
// Cross Module References
	EPICGAMEPLAYSTATSRUNTIME_API UEnum* Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardTimeWindow();
	UPackage* Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
// End Cross Module References
	static UEnum* EEpicLeaderboardTimeWindow_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardTimeWindow, Z_Construct_UPackage__Script_EpicGameplayStatsRuntime(), TEXT("EEpicLeaderboardTimeWindow"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEpicLeaderboardTimeWindow(EEpicLeaderboardTimeWindow_StaticEnum, TEXT("/Script/EpicGameplayStatsRuntime"), TEXT("EEpicLeaderboardTimeWindow"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardTimeWindow_CRC() { return 3037966601U; }
	UEnum* Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardTimeWindow()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEpicLeaderboardTimeWindow"), 0, Get_Z_Construct_UEnum_EpicGameplayStatsRuntime_EEpicLeaderboardTimeWindow_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEpicLeaderboardTimeWindow::Daily", (int64)EEpicLeaderboardTimeWindow::Daily },
				{ "EEpicLeaderboardTimeWindow::Weekly", (int64)EEpicLeaderboardTimeWindow::Weekly },
				{ "EEpicLeaderboardTimeWindow::Monthly", (int64)EEpicLeaderboardTimeWindow::Monthly },
				{ "EEpicLeaderboardTimeWindow::AllTime", (int64)EEpicLeaderboardTimeWindow::AllTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEpicLeaderboardTimeWindow.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EpicGameplayStatsRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEpicLeaderboardTimeWindow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EEpicLeaderboardTimeWindow",
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
