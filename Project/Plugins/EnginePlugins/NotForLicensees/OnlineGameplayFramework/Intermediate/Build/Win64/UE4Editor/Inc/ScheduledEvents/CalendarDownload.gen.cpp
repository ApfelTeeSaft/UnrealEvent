// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScheduledEvents/Public/CalendarDownload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalendarDownload() {}
// Cross Module References
	SCHEDULEDEVENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCalendarDownload();
	UPackage* Z_Construct_UPackage__Script_ScheduledEvents();
	SCHEDULEDEVENTS_API UScriptStruct* Z_Construct_UScriptStruct_FEventsTimeline();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FCalendarDownload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCHEDULEDEVENTS_API uint32 Get_Z_Construct_UScriptStruct_FCalendarDownload_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCalendarDownload, Z_Construct_UPackage__Script_ScheduledEvents(), TEXT("CalendarDownload"), sizeof(FCalendarDownload), Get_Z_Construct_UScriptStruct_FCalendarDownload_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCalendarDownload(FCalendarDownload::StaticStruct, TEXT("/Script/ScheduledEvents"), TEXT("CalendarDownload"), false, nullptr, nullptr);
static struct FScriptStruct_ScheduledEvents_StaticRegisterNativesFCalendarDownload
{
	FScriptStruct_ScheduledEvents_StaticRegisterNativesFCalendarDownload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CalendarDownload")),new UScriptStruct::TCppStructOps<FCalendarDownload>);
	}
} ScriptStruct_ScheduledEvents_StaticRegisterNativesFCalendarDownload;
	struct Z_Construct_UScriptStruct_FCalendarDownload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Channels;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Channels_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Channels_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheIntervalMins_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_CacheIntervalMins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsTimeOffsetHrs_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_EventsTimeOffsetHrs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalendarDownload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CalendarDownload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCalendarDownload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_Channels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CalendarDownload" },
		{ "ModuleRelativePath", "Public/CalendarDownload.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_Channels = { UE4CodeGen_Private::EPropertyClass::Map, "Channels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCalendarDownload, Channels), METADATA_PARAMS(Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_Channels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_Channels_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_Channels_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Channels_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_Channels_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Channels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FEventsTimeline, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CacheIntervalMins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CalendarDownload" },
		{ "ModuleRelativePath", "Public/CalendarDownload.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CacheIntervalMins = { UE4CodeGen_Private::EPropertyClass::Double, "CacheIntervalMins", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCalendarDownload, CacheIntervalMins), METADATA_PARAMS(Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CacheIntervalMins_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CacheIntervalMins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_EventsTimeOffsetHrs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CalendarDownload" },
		{ "ModuleRelativePath", "Public/CalendarDownload.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_EventsTimeOffsetHrs = { UE4CodeGen_Private::EPropertyClass::Double, "EventsTimeOffsetHrs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCalendarDownload, EventsTimeOffsetHrs), METADATA_PARAMS(Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_EventsTimeOffsetHrs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_EventsTimeOffsetHrs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CurrentTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CalendarDownload" },
		{ "ModuleRelativePath", "Public/CalendarDownload.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CurrentTime = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCalendarDownload, CurrentTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CurrentTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CurrentTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCalendarDownload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_Channels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_Channels_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_Channels_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CacheIntervalMins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_EventsTimeOffsetHrs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalendarDownload_Statics::NewProp_CurrentTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCalendarDownload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScheduledEvents,
		nullptr,
		&NewStructOps,
		"CalendarDownload",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCalendarDownload),
		alignof(FCalendarDownload),
		Z_Construct_UScriptStruct_FCalendarDownload_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCalendarDownload_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCalendarDownload_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCalendarDownload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCalendarDownload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCalendarDownload_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ScheduledEvents();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CalendarDownload"), sizeof(FCalendarDownload), Get_Z_Construct_UScriptStruct_FCalendarDownload_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCalendarDownload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCalendarDownload_CRC() { return 2931674554U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
