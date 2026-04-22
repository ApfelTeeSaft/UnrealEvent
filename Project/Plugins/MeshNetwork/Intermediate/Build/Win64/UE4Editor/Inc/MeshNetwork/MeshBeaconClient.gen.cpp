// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/MeshBeaconClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBeaconClient() {}
// Cross Module References
	MESHNETWORK_API UClass* Z_Construct_UClass_AMeshBeaconClient_NoRegister();
	MESHNETWORK_API UClass* Z_Construct_UClass_AMeshBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_AMeshBeaconClient_OnRep_ConnectedToRoot();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility();
// End Cross Module References
	static FName NAME_AMeshBeaconClient_ServerUpdateLevelVisibility = FName(TEXT("ServerUpdateLevelVisibility"));
	void AMeshBeaconClient::ServerUpdateLevelVisibility(FName PackageName, bool bIsVisible)
	{
		MeshBeaconClient_eventServerUpdateLevelVisibility_Parms Parms;
		Parms.PackageName=PackageName;
		Parms.bIsVisible=bIsVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMeshBeaconClient_ServerUpdateLevelVisibility),&Parms);
	}
	void AMeshBeaconClient::StaticRegisterNativesAMeshBeaconClient()
	{
		UClass* Class = AMeshBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ConnectedToRoot", &AMeshBeaconClient::execOnRep_ConnectedToRoot },
			{ "ServerUpdateLevelVisibility", &AMeshBeaconClient::execServerUpdateLevelVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMeshBeaconClient_OnRep_ConnectedToRoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeshBeaconClient_OnRep_ConnectedToRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeshBeaconClient_OnRep_ConnectedToRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeshBeaconClient, "OnRep_ConnectedToRoot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeshBeaconClient_OnRep_ConnectedToRoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMeshBeaconClient_OnRep_ConnectedToRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeshBeaconClient_OnRep_ConnectedToRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeshBeaconClient_OnRep_ConnectedToRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics
	{
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((MeshBeaconClient_eventServerUpdateLevelVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::NewProp_bIsVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshBeaconClient_eventServerUpdateLevelVisibility_Parms), &Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Name, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshBeaconClient_eventServerUpdateLevelVisibility_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::NewProp_PackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshBeaconClient.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)\n  void ServerUpdateMultipleLevelsVisibility(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeshBeaconClient, "ServerUpdateLevelVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, sizeof(MeshBeaconClient_eventServerUpdateLevelVisibility_Parms), Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMeshBeaconClient_NoRegister()
	{
		return AMeshBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_AMeshBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConnectedToRoot_MetaData[];
#endif
		static void NewProp_bConnectedToRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConnectedToRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeshBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshNetwork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMeshBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMeshBeaconClient_OnRep_ConnectedToRoot, "OnRep_ConnectedToRoot" }, // 579590124
		{ &Z_Construct_UFunction_AMeshBeaconClient_ServerUpdateLevelVisibility, "ServerUpdateLevelVisibility" }, // 1672683700
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeshBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshBeaconClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshBeaconClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeshBeaconClient_Statics::NewProp_bConnectedToRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshBeaconClient" },
		{ "ModuleRelativePath", "Public/MeshBeaconClient.h" },
	};
#endif
	void Z_Construct_UClass_AMeshBeaconClient_Statics::NewProp_bConnectedToRoot_SetBit(void* Obj)
	{
		((AMeshBeaconClient*)Obj)->bConnectedToRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMeshBeaconClient_Statics::NewProp_bConnectedToRoot = { UE4CodeGen_Private::EPropertyClass::Bool, "bConnectedToRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000025, 1, "OnRep_ConnectedToRoot", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMeshBeaconClient), &Z_Construct_UClass_AMeshBeaconClient_Statics::NewProp_bConnectedToRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMeshBeaconClient_Statics::NewProp_bConnectedToRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMeshBeaconClient_Statics::NewProp_bConnectedToRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMeshBeaconClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeshBeaconClient_Statics::NewProp_bConnectedToRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeshBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshBeaconClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeshBeaconClient_Statics::ClassParams = {
		&AMeshBeaconClient::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMeshBeaconClient_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMeshBeaconClient_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMeshBeaconClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMeshBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeshBeaconClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeshBeaconClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeshBeaconClient, 2193497809);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeshBeaconClient(Z_Construct_UClass_AMeshBeaconClient, &AMeshBeaconClient::StaticClass, TEXT("/Script/MeshNetwork"), TEXT("AMeshBeaconClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshBeaconClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
