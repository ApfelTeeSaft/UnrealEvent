// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/EExternalAccountType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEExternalAccountType() {}
// Cross Module References
	ACCOUNT_API UEnum* Z_Construct_UEnum_Account_EExternalAccountType();
	UPackage* Z_Construct_UPackage__Script_Account();
// End Cross Module References
	static UEnum* EExternalAccountType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Account_EExternalAccountType, Z_Construct_UPackage__Script_Account(), TEXT("EExternalAccountType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExternalAccountType(EExternalAccountType_StaticEnum, TEXT("/Script/Account"), TEXT("EExternalAccountType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Account_EExternalAccountType_CRC() { return 3160229549U; }
	UEnum* Z_Construct_UEnum_Account_EExternalAccountType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Account();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExternalAccountType"), 0, Get_Z_Construct_UEnum_Account_EExternalAccountType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EExternalAccountType::None", (int64)EExternalAccountType::None },
				{ "EExternalAccountType::Facebook", (int64)EExternalAccountType::Facebook },
				{ "EExternalAccountType::Google", (int64)EExternalAccountType::Google },
				{ "EExternalAccountType::Epic_PSN", (int64)EExternalAccountType::Epic_PSN },
				{ "EExternalAccountType::Epic_XBL", (int64)EExternalAccountType::Epic_XBL },
				{ "EExternalAccountType::Epic_Erebus", (int64)EExternalAccountType::Epic_Erebus },
				{ "EExternalAccountType::Epic_Facebook", (int64)EExternalAccountType::Epic_Facebook },
				{ "EExternalAccountType::Epic_Google", (int64)EExternalAccountType::Epic_Google },
				{ "EExternalAccountType::Epic_Portal", (int64)EExternalAccountType::Epic_Portal },
				{ "EExternalAccountType::Epic_Portal_Kairos", (int64)EExternalAccountType::Epic_Portal_Kairos },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EExternalAccountType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Account,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EExternalAccountType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EExternalAccountType",
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
