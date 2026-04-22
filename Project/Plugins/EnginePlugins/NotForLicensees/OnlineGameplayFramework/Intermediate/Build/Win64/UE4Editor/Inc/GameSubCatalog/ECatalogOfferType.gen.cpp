// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/ECatalogOfferType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECatalogOfferType() {}
// Cross Module References
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogOfferType();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
// End Cross Module References
	static UEnum* ECatalogOfferType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameSubCatalog_ECatalogOfferType, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("ECatalogOfferType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECatalogOfferType(ECatalogOfferType_StaticEnum, TEXT("/Script/GameSubCatalog"), TEXT("ECatalogOfferType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameSubCatalog_ECatalogOfferType_CRC() { return 2787942052U; }
	UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogOfferType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECatalogOfferType"), 0, Get_Z_Construct_UEnum_GameSubCatalog_ECatalogOfferType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECatalogOfferType::StaticPrice", (int64)ECatalogOfferType::StaticPrice },
				{ "ECatalogOfferType::DynamicBundle", (int64)ECatalogOfferType::DynamicBundle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECatalogOfferType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameSubCatalog,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECatalogOfferType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECatalogOfferType",
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
