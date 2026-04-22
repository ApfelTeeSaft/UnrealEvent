// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/EConsoleAuthLinkState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEConsoleAuthLinkState() {}
// Cross Module References
	ACCOUNT_API UEnum* Z_Construct_UEnum_Account_EConsoleAuthLinkState();
	UPackage* Z_Construct_UPackage__Script_Account();
// End Cross Module References
	static UEnum* EConsoleAuthLinkState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Account_EConsoleAuthLinkState, Z_Construct_UPackage__Script_Account(), TEXT("EConsoleAuthLinkState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConsoleAuthLinkState(EConsoleAuthLinkState_StaticEnum, TEXT("/Script/Account"), TEXT("EConsoleAuthLinkState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Account_EConsoleAuthLinkState_CRC() { return 1841868374U; }
	UEnum* Z_Construct_UEnum_Account_EConsoleAuthLinkState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Account();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConsoleAuthLinkState"), 0, Get_Z_Construct_UEnum_Account_EConsoleAuthLinkState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConsoleAuthLinkState::NotOnConsole", (int64)EConsoleAuthLinkState::NotOnConsole },
				{ "EConsoleAuthLinkState::ConsoleNotLoggedIn", (int64)EConsoleAuthLinkState::ConsoleNotLoggedIn },
				{ "EConsoleAuthLinkState::EpicNotLoggedIn", (int64)EConsoleAuthLinkState::EpicNotLoggedIn },
				{ "EConsoleAuthLinkState::ThisEpicAccountLinked", (int64)EConsoleAuthLinkState::ThisEpicAccountLinked },
				{ "EConsoleAuthLinkState::OtherEpicAccountLinked", (int64)EConsoleAuthLinkState::OtherEpicAccountLinked },
				{ "EConsoleAuthLinkState::NoEpicAccountLinked", (int64)EConsoleAuthLinkState::NoEpicAccountLinked },
				{ "EConsoleAuthLinkState::PrimaryIdNotLinked", (int64)EConsoleAuthLinkState::PrimaryIdNotLinked },
				{ "EConsoleAuthLinkState::SecondaryIdNotLinked", (int64)EConsoleAuthLinkState::SecondaryIdNotLinked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EConsoleAuthLinkState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Account,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EConsoleAuthLinkState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EConsoleAuthLinkState",
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
