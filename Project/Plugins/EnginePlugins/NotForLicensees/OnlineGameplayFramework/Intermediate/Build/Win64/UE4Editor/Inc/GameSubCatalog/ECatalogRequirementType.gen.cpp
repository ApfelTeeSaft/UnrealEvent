// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/ECatalogRequirementType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECatalogRequirementType() {}
// Cross Module References
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogRequirementType();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
// End Cross Module References
	static UEnum* ECatalogRequirementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameSubCatalog_ECatalogRequirementType, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("ECatalogRequirementType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECatalogRequirementType(ECatalogRequirementType_StaticEnum, TEXT("/Script/GameSubCatalog"), TEXT("ECatalogRequirementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameSubCatalog_ECatalogRequirementType_CRC() { return 1103076186U; }
	UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogRequirementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECatalogRequirementType"), 0, Get_Z_Construct_UEnum_GameSubCatalog_ECatalogRequirementType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECatalogRequirementType::RequireFulfillment", (int64)ECatalogRequirementType::RequireFulfillment },
				{ "ECatalogRequirementType::DenyOnFulfillment", (int64)ECatalogRequirementType::DenyOnFulfillment },
				{ "ECatalogRequirementType::RequireItemOwnership", (int64)ECatalogRequirementType::RequireItemOwnership },
				{ "ECatalogRequirementType::DenyOnItemOwnership", (int64)ECatalogRequirementType::DenyOnItemOwnership },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECatalogRequirementType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameSubCatalog,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECatalogRequirementType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECatalogRequirementType",
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
