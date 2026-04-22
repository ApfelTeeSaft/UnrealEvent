// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UACBase/Public/UACNetworkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUACNetworkComponent() {}
// Cross Module References
	UACBASE_API UClass* Z_Construct_UClass_UUACNetworkComponent_NoRegister();
	UACBASE_API UClass* Z_Construct_UClass_UUACNetworkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UACBase();
	UACBASE_API UFunction* Z_Construct_UFunction_UUACNetworkComponent_SendClientHello();
	UACBASE_API UFunction* Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient();
	UACBASE_API UFunction* Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer();
// End Cross Module References
	static FName NAME_UUACNetworkComponent_SendClientHello = FName(TEXT("SendClientHello"));
	void UUACNetworkComponent::SendClientHello(uint32 SessionKey)
	{
		UACNetworkComponent_eventSendClientHello_Parms Parms;
		Parms.SessionKey=SessionKey;
		ProcessEvent(FindFunctionChecked(NAME_UUACNetworkComponent_SendClientHello),&Parms);
	}
	static FName NAME_UUACNetworkComponent_SendPacketToClient = FName(TEXT("SendPacketToClient"));
	void UUACNetworkComponent::SendPacketToClient(uint8 Type, TArray<uint8> const& Packet)
	{
		UACNetworkComponent_eventSendPacketToClient_Parms Parms;
		Parms.Type=Type;
		Parms.Packet=Packet;
		ProcessEvent(FindFunctionChecked(NAME_UUACNetworkComponent_SendPacketToClient),&Parms);
	}
	static FName NAME_UUACNetworkComponent_SendPacketToServer = FName(TEXT("SendPacketToServer"));
	void UUACNetworkComponent::SendPacketToServer(uint8 Type, TArray<uint8> const& Packet)
	{
		UACNetworkComponent_eventSendPacketToServer_Parms Parms;
		Parms.Type=Type;
		Parms.Packet=Packet;
		ProcessEvent(FindFunctionChecked(NAME_UUACNetworkComponent_SendPacketToServer),&Parms);
	}
	void UUACNetworkComponent::StaticRegisterNativesUUACNetworkComponent()
	{
		UClass* Class = UUACNetworkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendClientHello", &UUACNetworkComponent::execSendClientHello },
			{ "SendPacketToClient", &UUACNetworkComponent::execSendPacketToClient },
			{ "SendPacketToServer", &UUACNetworkComponent::execSendPacketToServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SessionKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::NewProp_SessionKey = { UE4CodeGen_Private::EPropertyClass::UInt32, "SessionKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UACNetworkComponent_eventSendClientHello_Parms, SessionKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::NewProp_SessionKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UACNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUACNetworkComponent, "SendClientHello", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC0, sizeof(UACNetworkComponent_eventSendClientHello_Parms), Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUACNetworkComponent_SendClientHello()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUACNetworkComponent_SendClientHello_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Packet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Packet;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Packet_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::NewProp_Packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::NewProp_Packet = { UE4CodeGen_Private::EPropertyClass::Array, "Packet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000082, 1, nullptr, STRUCT_OFFSET(UACNetworkComponent_eventSendPacketToClient_Parms, Packet), METADATA_PARAMS(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::NewProp_Packet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::NewProp_Packet_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::NewProp_Packet_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Packet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Byte, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UACNetworkComponent_eventSendPacketToClient_Parms, Type), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::NewProp_Packet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::NewProp_Packet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UACNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUACNetworkComponent, "SendPacketToClient", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x05080CC0, sizeof(UACNetworkComponent_eventSendPacketToClient_Parms), Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Packet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Packet;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Packet_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::NewProp_Packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::NewProp_Packet = { UE4CodeGen_Private::EPropertyClass::Array, "Packet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000082, 1, nullptr, STRUCT_OFFSET(UACNetworkComponent_eventSendPacketToServer_Parms, Packet), METADATA_PARAMS(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::NewProp_Packet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::NewProp_Packet_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::NewProp_Packet_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Packet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Byte, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UACNetworkComponent_eventSendPacketToServer_Parms, Type), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::NewProp_Packet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::NewProp_Packet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UACNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUACNetworkComponent, "SendPacketToServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84280CC0, sizeof(UACNetworkComponent_eventSendPacketToServer_Parms), Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUACNetworkComponent_NoRegister()
	{
		return UUACNetworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUACNetworkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUACNetworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UACBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUACNetworkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUACNetworkComponent_SendClientHello, "SendClientHello" }, // 3713295191
		{ &Z_Construct_UFunction_UUACNetworkComponent_SendPacketToClient, "SendPacketToClient" }, // 2952553801
		{ &Z_Construct_UFunction_UUACNetworkComponent_SendPacketToServer, "SendPacketToServer" }, // 3507632896
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUACNetworkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UACNetworkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UACNetworkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUACNetworkComponent_Statics::NewProp_PlayerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UACNetworkComponent" },
		{ "ModuleRelativePath", "Public/UACNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUACNetworkComponent_Statics::NewProp_PlayerID = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UUACNetworkComponent, PlayerID), METADATA_PARAMS(Z_Construct_UClass_UUACNetworkComponent_Statics::NewProp_PlayerID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUACNetworkComponent_Statics::NewProp_PlayerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUACNetworkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUACNetworkComponent_Statics::NewProp_PlayerID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUACNetworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUACNetworkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUACNetworkComponent_Statics::ClassParams = {
		&UUACNetworkComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UUACNetworkComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UUACNetworkComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUACNetworkComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUACNetworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUACNetworkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUACNetworkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUACNetworkComponent, 2720765936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUACNetworkComponent(Z_Construct_UClass_UUACNetworkComponent, &UUACNetworkComponent::StaticClass, TEXT("/Script/UACBase"), TEXT("UUACNetworkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUACNetworkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
