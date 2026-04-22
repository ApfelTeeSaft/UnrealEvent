// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/EStoreCurrencyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStoreCurrencyType() {}
// Cross Module References
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
// End Cross Module References
	static UEnum* EStoreCurrencyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("EStoreCurrencyType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStoreCurrencyType(EStoreCurrencyType_StaticEnum, TEXT("/Script/GameSubCatalog"), TEXT("EStoreCurrencyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType_CRC() { return 3984168862U; }
	UEnum* Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStoreCurrencyType"), 0, Get_Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStoreCurrencyType::RealMoney", (int64)EStoreCurrencyType::RealMoney },
				{ "EStoreCurrencyType::MtxCurrency", (int64)EStoreCurrencyType::MtxCurrency },
				{ "EStoreCurrencyType::GameItem", (int64)EStoreCurrencyType::GameItem },
				{ "EStoreCurrencyType::Other", (int64)EStoreCurrencyType::Other },
				{ "EStoreCurrencyType::MAX", (int64)EStoreCurrencyType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EStoreCurrencyType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameSubCatalog,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStoreCurrencyType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EStoreCurrencyType::Type",
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
