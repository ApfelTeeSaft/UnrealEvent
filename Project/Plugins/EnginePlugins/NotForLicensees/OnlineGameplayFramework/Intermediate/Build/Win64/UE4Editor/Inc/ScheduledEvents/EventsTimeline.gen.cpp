// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScheduledEvents/Public/EventsTimeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventsTimeline() {}
// Cross Module References
	SCHEDULEDEVENTS_API UScriptStruct* Z_Construct_UScriptStruct_FEventsTimeline();
	UPackage* Z_Construct_UPackage__Script_ScheduledEvents();
	SCHEDULEDEVENTS_API UScriptStruct* Z_Construct_UScriptStruct_FEventChannelState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FEventsTimeline::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCHEDULEDEVENTS_API uint32 Get_Z_Construct_UScriptStruct_FEventsTimeline_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsTimeline, Z_Construct_UPackage__Script_ScheduledEvents(), TEXT("EventsTimeline"), sizeof(FEventsTimeline), Get_Z_Construct_UScriptStruct_FEventsTimeline_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsTimeline(FEventsTimeline::StaticStruct, TEXT("/Script/ScheduledEvents"), TEXT("EventsTimeline"), false, nullptr, nullptr);
static struct FScriptStruct_ScheduledEvents_StaticRegisterNativesFEventsTimeline
{
	FScriptStruct_ScheduledEvents_StaticRegisterNativesFEventsTimeline()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventsTimeline")),new UScriptStruct::TCppStructOps<FEventsTimeline>);
	}
} ScriptStruct_ScheduledEvents_StaticRegisterNativesFEventsTimeline;
	struct Z_Construct_UScriptStruct_FEventsTimeline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheExpire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CacheExpire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsTimeline_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventsTimeline.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsTimeline>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_States_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventsTimeline" },
		{ "ModuleRelativePath", "Public/EventsTimeline.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_States = { UE4CodeGen_Private::EPropertyClass::Array, "States", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEventsTimeline, States), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_States_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_States_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_States_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "States", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEventChannelState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_CacheExpire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventsTimeline" },
		{ "ModuleRelativePath", "Public/EventsTimeline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_CacheExpire = { UE4CodeGen_Private::EPropertyClass::Struct, "CacheExpire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEventsTimeline, CacheExpire), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_CacheExpire_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_CacheExpire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsTimeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_States,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_States_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsTimeline_Statics::NewProp_CacheExpire,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsTimeline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScheduledEvents,
		nullptr,
		&NewStructOps,
		"EventsTimeline",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEventsTimeline),
		alignof(FEventsTimeline),
		Z_Construct_UScriptStruct_FEventsTimeline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsTimeline_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsTimeline_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsTimeline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsTimeline()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsTimeline_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ScheduledEvents();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsTimeline"), sizeof(FEventsTimeline), Get_Z_Construct_UScriptStruct_FEventsTimeline_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsTimeline_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsTimeline_CRC() { return 1432009532U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
