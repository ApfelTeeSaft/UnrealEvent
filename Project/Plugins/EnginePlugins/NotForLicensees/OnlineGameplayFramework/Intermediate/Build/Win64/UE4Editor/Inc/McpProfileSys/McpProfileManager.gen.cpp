// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpProfileManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpProfileManager() {}
// Cross Module References
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfileManager_NoRegister();
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfileManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FProfileGroupEntry();
// End Cross Module References
	void UMcpProfileManager::StaticRegisterNativesUMcpProfileManager()
	{
	}
	UClass* Z_Construct_UClass_UMcpProfileManager_NoRegister()
	{
		return UMcpProfileManager::StaticClass();
	}
	struct Z_Construct_UClass_UMcpProfileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientProfileGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClientProfileGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientProfileGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerProfileGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerProfileGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerProfileGroups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMcpProfileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "McpProfileManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/McpProfileManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ClientProfileGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileManager" },
		{ "ModuleRelativePath", "Public/McpProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ClientProfileGroups = { UE4CodeGen_Private::EPropertyClass::Array, "ClientProfileGroups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileManager, ClientProfileGroups), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ClientProfileGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ClientProfileGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ClientProfileGroups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientProfileGroups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProfileGroupEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ServerProfileGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileManager" },
		{ "ModuleRelativePath", "Public/McpProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ServerProfileGroups = { UE4CodeGen_Private::EPropertyClass::Array, "ServerProfileGroups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMcpProfileManager, ServerProfileGroups), METADATA_PARAMS(Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ServerProfileGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ServerProfileGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ServerProfileGroups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ServerProfileGroups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProfileGroupEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMcpProfileManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ClientProfileGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ClientProfileGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ServerProfileGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMcpProfileManager_Statics::NewProp_ServerProfileGroups_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMcpProfileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMcpProfileManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMcpProfileManager_Statics::ClassParams = {
		&UMcpProfileManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMcpProfileManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMcpProfileManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMcpProfileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMcpProfileManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMcpProfileManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMcpProfileManager, 57364782);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMcpProfileManager(Z_Construct_UClass_UMcpProfileManager, &UMcpProfileManager::StaticClass, TEXT("/Script/McpProfileSys"), TEXT("UMcpProfileManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMcpProfileManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
