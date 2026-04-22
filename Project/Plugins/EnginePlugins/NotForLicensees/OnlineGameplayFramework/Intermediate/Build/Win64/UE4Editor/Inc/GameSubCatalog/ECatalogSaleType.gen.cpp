// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/ECatalogSaleType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECatalogSaleType() {}
// Cross Module References
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
// End Cross Module References
	static UEnum* ECatalogSaleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("ECatalogSaleType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECatalogSaleType(ECatalogSaleType_StaticEnum, TEXT("/Script/GameSubCatalog"), TEXT("ECatalogSaleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType_CRC() { return 1142484057U; }
	UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECatalogSaleType"), 0, Get_Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECatalogSaleType::NotOnSale", (int64)ECatalogSaleType::NotOnSale },
				{ "ECatalogSaleType::UndecoratedNewPrice", (int64)ECatalogSaleType::UndecoratedNewPrice },
				{ "ECatalogSaleType::AmountOff", (int64)ECatalogSaleType::AmountOff },
				{ "ECatalogSaleType::PercentOff", (int64)ECatalogSaleType::PercentOff },
				{ "ECatalogSaleType::PercentOn", (int64)ECatalogSaleType::PercentOn },
				{ "ECatalogSaleType::Strikethrough", (int64)ECatalogSaleType::Strikethrough },
				{ "ECatalogSaleType::MAX", (int64)ECatalogSaleType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECatalogSaleType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameSubCatalog,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECatalogSaleType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ECatalogSaleType::Type",
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
