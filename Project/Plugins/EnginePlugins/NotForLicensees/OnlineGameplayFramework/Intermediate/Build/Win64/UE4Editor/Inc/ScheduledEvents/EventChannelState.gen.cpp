// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScheduledEvents/Public/EventChannelState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventChannelState() {}
// Cross Module References
	SCHEDULEDEVENTS_API UScriptStruct* Z_Construct_UScriptStruct_FEventChannelState();
	UPackage* Z_Construct_UPackage__Script_ScheduledEvents();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	SCHEDULEDEVENTS_API UScriptStruct* Z_Construct_UScriptStruct_FEventRecord();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FEventChannelState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCHEDULEDEVENTS_API uint32 Get_Z_Construct_UScriptStruct_FEventChannelState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventChannelState, Z_Construct_UPackage__Script_ScheduledEvents(), TEXT("EventChannelState"), sizeof(FEventChannelState), Get_Z_Construct_UScriptStruct_FEventChannelState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventChannelState(FEventChannelState::StaticStruct, TEXT("/Script/ScheduledEvents"), TEXT("EventChannelState"), false, nullptr, nullptr);
static struct FScriptStruct_ScheduledEvents_StaticRegisterNativesFEventChannelState
{
	FScriptStruct_ScheduledEvents_StaticRegisterNativesFEventChannelState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventChannelState")),new UScriptStruct::TCppStructOps<FEventChannelState>);
	}
} ScriptStruct_ScheduledEvents_StaticRegisterNativesFEventChannelState;
	struct Z_Construct_UScriptStruct_FEventChannelState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValidFrom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventChannelState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventChannelState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventChannelState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventChannelState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventChannelState" },
		{ "ModuleRelativePath", "Public/EventChannelState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_State = { UE4CodeGen_Private::EPropertyClass::Struct, "State", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEventChannelState, State), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ActiveEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventChannelState" },
		{ "ModuleRelativePath", "Public/EventChannelState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ActiveEvents = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveEvents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEventChannelState, ActiveEvents), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ActiveEvents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ActiveEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ActiveEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveEvents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEventRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ValidFrom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventChannelState" },
		{ "ModuleRelativePath", "Public/EventChannelState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ValidFrom = { UE4CodeGen_Private::EPropertyClass::Struct, "ValidFrom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEventChannelState, ValidFrom), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ValidFrom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ValidFrom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventChannelState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ActiveEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ActiveEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventChannelState_Statics::NewProp_ValidFrom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventChannelState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScheduledEvents,
		nullptr,
		&NewStructOps,
		"EventChannelState",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEventChannelState),
		alignof(FEventChannelState),
		Z_Construct_UScriptStruct_FEventChannelState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventChannelState_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventChannelState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventChannelState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventChannelState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventChannelState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ScheduledEvents();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventChannelState"), sizeof(FEventChannelState), Get_Z_Construct_UScriptStruct_FEventChannelState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventChannelState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventChannelState_CRC() { return 3145143706U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
