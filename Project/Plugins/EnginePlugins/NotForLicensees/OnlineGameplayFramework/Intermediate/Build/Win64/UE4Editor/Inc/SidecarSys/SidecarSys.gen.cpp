// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SidecarSys/Public/SidecarSys.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSidecarSys() {}
// Cross Module References
	SIDECARSYS_API UClass* Z_Construct_UClass_USidecarSys_NoRegister();
	SIDECARSYS_API UClass* Z_Construct_UClass_USidecarSys();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SidecarSys();
	SIDECARSYS_API UScriptStruct* Z_Construct_UScriptStruct_FSidecarFileInfo();
// End Cross Module References
	void USidecarSys::StaticRegisterNativesUSidecarSys()
	{
	}
	UClass* Z_Construct_UClass_USidecarSys_NoRegister()
	{
		return USidecarSys::StaticClass();
	}
	struct Z_Construct_UClass_USidecarSys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_McpProxyUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_McpProxyUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_McpDispatchBatchUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_McpDispatchBatchUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_McpDispatchUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_McpDispatchUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DssCheckinUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DssCheckinUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DssRestoreUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DssRestoreUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DssUploadUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DssUploadUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DssCheckoutUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DssCheckoutUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DssDownloadUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DssDownloadUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FileInfoMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileInfoMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileInfoMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USidecarSys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SidecarSys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SidecarSys.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::NewProp_McpProxyUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarSys" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_McpProxyUrl = { UE4CodeGen_Private::EPropertyClass::Str, "McpProxyUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USidecarSys, McpProxyUrl), METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::NewProp_McpProxyUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::NewProp_McpProxyUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchBatchUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarSys" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchBatchUrl = { UE4CodeGen_Private::EPropertyClass::Str, "McpDispatchBatchUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USidecarSys, McpDispatchBatchUrl), METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchBatchUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchBatchUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarSys" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchUrl = { UE4CodeGen_Private::EPropertyClass::Str, "McpDispatchUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USidecarSys, McpDispatchUrl), METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckinUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarSys" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckinUrl = { UE4CodeGen_Private::EPropertyClass::Str, "DssCheckinUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USidecarSys, DssCheckinUrl), METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckinUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckinUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::NewProp_DssRestoreUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarSys" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_DssRestoreUrl = { UE4CodeGen_Private::EPropertyClass::Str, "DssRestoreUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USidecarSys, DssRestoreUrl), METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssRestoreUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssRestoreUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::NewProp_DssUploadUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarSys" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_DssUploadUrl = { UE4CodeGen_Private::EPropertyClass::Str, "DssUploadUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USidecarSys, DssUploadUrl), METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssUploadUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssUploadUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckoutUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarSys" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckoutUrl = { UE4CodeGen_Private::EPropertyClass::Str, "DssCheckoutUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USidecarSys, DssCheckoutUrl), METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckoutUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckoutUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::NewProp_DssDownloadUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarSys" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_DssDownloadUrl = { UE4CodeGen_Private::EPropertyClass::Str, "DssDownloadUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USidecarSys, DssDownloadUrl), METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssDownloadUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::NewProp_DssDownloadUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidecarSys_Statics::NewProp_FileInfoMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarSys" },
		{ "ModuleRelativePath", "Public/SidecarSys.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_FileInfoMap = { UE4CodeGen_Private::EPropertyClass::Map, "FileInfoMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USidecarSys, FileInfoMap), METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::NewProp_FileInfoMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::NewProp_FileInfoMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_FileInfoMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "FileInfoMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USidecarSys_Statics::NewProp_FileInfoMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "FileInfoMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FSidecarFileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USidecarSys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_McpProxyUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchBatchUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_McpDispatchUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckinUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_DssRestoreUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_DssUploadUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_DssCheckoutUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_DssDownloadUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_FileInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_FileInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidecarSys_Statics::NewProp_FileInfoMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USidecarSys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USidecarSys>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USidecarSys_Statics::ClassParams = {
		&USidecarSys::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_USidecarSys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USidecarSys_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USidecarSys_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USidecarSys()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USidecarSys_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USidecarSys, 2732766744);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USidecarSys(Z_Construct_UClass_USidecarSys, &USidecarSys::StaticClass, TEXT("/Script/SidecarSys"), TEXT("USidecarSys"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USidecarSys);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
