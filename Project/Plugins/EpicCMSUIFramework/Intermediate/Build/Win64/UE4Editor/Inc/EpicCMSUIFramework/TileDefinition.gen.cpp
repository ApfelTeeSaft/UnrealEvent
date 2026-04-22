// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/TileDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileDefinition() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTileDefinition();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
	EPICCMSUIFRAMEWORK_API UEnum* Z_Construct_UEnum_EpicCMSUIFramework_EDateType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FTileDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICCMSUIFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FTileDefinition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileDefinition, Z_Construct_UPackage__Script_EpicCMSUIFramework(), TEXT("TileDefinition"), sizeof(FTileDefinition), Get_Z_Construct_UScriptStruct_FTileDefinition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTileDefinition(FTileDefinition::StaticStruct, TEXT("/Script/EpicCMSUIFramework"), TEXT("TileDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFTileDefinition
{
	FScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFTileDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TileDefinition")),new UScriptStruct::TCppStructOps<FTileDefinition>);
	}
} ScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFTileDefinition;
	struct Z_Construct_UScriptStruct_FTileDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsVisible_MetaData[];
#endif
		static void NewProp_IsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MediaUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CountdownType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CountdownType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Countdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Countdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Link;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Eyebrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Eyebrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TypeString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_IsVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_IsVisible_SetBit(void* Obj)
	{
		((FTileDefinition*)Obj)->IsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_IsVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "IsVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTileDefinition), &Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_IsVisible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_IsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_MediaUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_MediaUrl = { UE4CodeGen_Private::EPropertyClass::Str, "MediaUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTileDefinition, MediaUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_MediaUrl_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_MediaUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_CountdownType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_CountdownType = { UE4CodeGen_Private::EPropertyClass::Enum, "CountdownType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTileDefinition, CountdownType), Z_Construct_UEnum_EpicCMSUIFramework_EDateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_CountdownType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_CountdownType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_CountdownType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Countdown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Countdown = { UE4CodeGen_Private::EPropertyClass::Struct, "Countdown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTileDefinition, Countdown), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Countdown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Countdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_GroupID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_GroupID = { UE4CodeGen_Private::EPropertyClass::Str, "GroupID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTileDefinition, GroupID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_GroupID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_GroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Link_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Link = { UE4CodeGen_Private::EPropertyClass::Str, "Link", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTileDefinition, Link), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Link_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Link_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Eyebrow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Eyebrow = { UE4CodeGen_Private::EPropertyClass::Str, "Eyebrow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTileDefinition, Eyebrow), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Eyebrow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Eyebrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Subtitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Subtitle = { UE4CodeGen_Private::EPropertyClass::Str, "Subtitle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTileDefinition, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Subtitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Title = { UE4CodeGen_Private::EPropertyClass::Str, "Title", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTileDefinition, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_TypeString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TileDefinition" },
		{ "ModuleRelativePath", "Public/TileDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_TypeString = { UE4CodeGen_Private::EPropertyClass::Str, "TypeString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTileDefinition, TypeString), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_TypeString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_TypeString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_IsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_MediaUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_CountdownType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_CountdownType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Countdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_GroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Link,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Eyebrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileDefinition_Statics::NewProp_TypeString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
		nullptr,
		&NewStructOps,
		"TileDefinition",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTileDefinition),
		alignof(FTileDefinition),
		Z_Construct_UScriptStruct_FTileDefinition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTileDefinition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTileDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTileDefinition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicCMSUIFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TileDefinition"), sizeof(FTileDefinition), Get_Z_Construct_UScriptStruct_FTileDefinition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTileDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTileDefinition_CRC() { return 4158594525U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
