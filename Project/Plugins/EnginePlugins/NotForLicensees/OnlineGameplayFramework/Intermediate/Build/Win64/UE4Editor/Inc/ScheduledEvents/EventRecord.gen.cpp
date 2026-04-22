// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScheduledEvents/Public/EventRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventRecord() {}
// Cross Module References
	SCHEDULEDEVENTS_API UScriptStruct* Z_Construct_UScriptStruct_FEventRecord();
	UPackage* Z_Construct_UPackage__Script_ScheduledEvents();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FEventRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCHEDULEDEVENTS_API uint32 Get_Z_Construct_UScriptStruct_FEventRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventRecord, Z_Construct_UPackage__Script_ScheduledEvents(), TEXT("EventRecord"), sizeof(FEventRecord), Get_Z_Construct_UScriptStruct_FEventRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventRecord(FEventRecord::StaticStruct, TEXT("/Script/ScheduledEvents"), TEXT("EventRecord"), false, nullptr, nullptr);
static struct FScriptStruct_ScheduledEvents_StaticRegisterNativesFEventRecord
{
	FScriptStruct_ScheduledEvents_StaticRegisterNativesFEventRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventRecord")),new UScriptStruct::TCppStructOps<FEventRecord>);
	}
} ScriptStruct_ScheduledEvents_StaticRegisterNativesFEventRecord;
	struct Z_Construct_UScriptStruct_FEventRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSince_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveSince;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveUntil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveUntil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveSince_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventRecord" },
		{ "ModuleRelativePath", "Public/EventRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveSince = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveSince", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEventRecord, ActiveSince), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveSince_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveSince_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveUntil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventRecord" },
		{ "ModuleRelativePath", "Public/EventRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveUntil = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveUntil", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEventRecord, ActiveUntil), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveUntil_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveUntil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_EventType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventRecord" },
		{ "ModuleRelativePath", "Public/EventRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_EventType = { UE4CodeGen_Private::EPropertyClass::Str, "EventType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEventRecord, EventType), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_EventType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_EventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveSince,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_ActiveUntil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventRecord_Statics::NewProp_EventType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScheduledEvents,
		nullptr,
		&NewStructOps,
		"EventRecord",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEventRecord),
		alignof(FEventRecord),
		Z_Construct_UScriptStruct_FEventRecord_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventRecord_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventRecord_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventRecord_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ScheduledEvents();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventRecord"), sizeof(FEventRecord), Get_Z_Construct_UScriptStruct_FEventRecord_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventRecord_CRC() { return 544283904U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
