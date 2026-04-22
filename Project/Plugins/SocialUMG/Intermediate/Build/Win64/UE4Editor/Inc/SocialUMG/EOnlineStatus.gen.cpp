// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/EOnlineStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOnlineStatus() {}
// Cross Module References
	SOCIALUMG_API UEnum* Z_Construct_UEnum_SocialUMG_EOnlineStatus();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
// End Cross Module References
	static UEnum* EOnlineStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SocialUMG_EOnlineStatus, Z_Construct_UPackage__Script_SocialUMG(), TEXT("EOnlineStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineStatus(EOnlineStatus_StaticEnum, TEXT("/Script/SocialUMG"), TEXT("EOnlineStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SocialUMG_EOnlineStatus_CRC() { return 4071278549U; }
	UEnum* Z_Construct_UEnum_SocialUMG_EOnlineStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SocialUMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineStatus"), 0, Get_Z_Construct_UEnum_SocialUMG_EOnlineStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineStatus::Online", (int64)EOnlineStatus::Online },
				{ "EOnlineStatus::Away", (int64)EOnlineStatus::Away },
				{ "EOnlineStatus::Offline", (int64)EOnlineStatus::Offline },
				{ "EOnlineStatus::Blocked", (int64)EOnlineStatus::Blocked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EOnlineStatus.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SocialUMG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOnlineStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EOnlineStatus",
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
