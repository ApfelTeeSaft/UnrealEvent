// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/EMeshNetworkNodeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMeshNetworkNodeType() {}
// Cross Module References
	MESHNETWORK_API UEnum* Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
// End Cross Module References
	static UEnum* EMeshNetworkNodeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType, Z_Construct_UPackage__Script_MeshNetwork(), TEXT("EMeshNetworkNodeType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshNetworkNodeType(EMeshNetworkNodeType_StaticEnum, TEXT("/Script/MeshNetwork"), TEXT("EMeshNetworkNodeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType_CRC() { return 2931706237U; }
	UEnum* Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MeshNetwork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshNetworkNodeType"), 0, Get_Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshNetworkNodeType::Root", (int64)EMeshNetworkNodeType::Root },
				{ "EMeshNetworkNodeType::Inner", (int64)EMeshNetworkNodeType::Inner },
				{ "EMeshNetworkNodeType::Edge", (int64)EMeshNetworkNodeType::Edge },
				{ "EMeshNetworkNodeType::Client", (int64)EMeshNetworkNodeType::Client },
				{ "EMeshNetworkNodeType::Unknown", (int64)EMeshNetworkNodeType::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMeshNetworkNodeType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MeshNetwork,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMeshNetworkNodeType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMeshNetworkNodeType",
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
