// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/ECreateAccountResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECreateAccountResult() {}
// Cross Module References
	ACCOUNT_API UEnum* Z_Construct_UEnum_Account_ECreateAccountResult();
	UPackage* Z_Construct_UPackage__Script_Account();
// End Cross Module References
	static UEnum* ECreateAccountResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Account_ECreateAccountResult, Z_Construct_UPackage__Script_Account(), TEXT("ECreateAccountResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECreateAccountResult(ECreateAccountResult_StaticEnum, TEXT("/Script/Account"), TEXT("ECreateAccountResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Account_ECreateAccountResult_CRC() { return 2519369568U; }
	UEnum* Z_Construct_UEnum_Account_ECreateAccountResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Account();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECreateAccountResult"), 0, Get_Z_Construct_UEnum_Account_ECreateAccountResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECreateAccountResult::NotStarted", (int64)ECreateAccountResult::NotStarted },
				{ "ECreateAccountResult::Pending", (int64)ECreateAccountResult::Pending },
				{ "ECreateAccountResult::Success", (int64)ECreateAccountResult::Success },
				{ "ECreateAccountResult::Console_LoginFailed", (int64)ECreateAccountResult::Console_LoginFailed },
				{ "ECreateAccountResult::Console_DuplicateAuthAssociation", (int64)ECreateAccountResult::Console_DuplicateAuthAssociation },
				{ "ECreateAccountResult::DuplicateAccount", (int64)ECreateAccountResult::DuplicateAccount },
				{ "ECreateAccountResult::GenericError", (int64)ECreateAccountResult::GenericError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECreateAccountResult.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Account,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECreateAccountResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECreateAccountResult",
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
