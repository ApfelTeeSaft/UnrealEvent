// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialChatMessageEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatMessageEntry() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatMessageEntry_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatMessageEntry();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialChatMessageEntry_CanInteract();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialChatMessageEntry_OnMessageSet();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	SOCIALUMG_API UScriptStruct* Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle();
	UMG_API UClass* Z_Construct_UClass_UUserListEntry_NoRegister();
// End Cross Module References
	static FName NAME_USocialChatMessageEntry_OnMessageSet = FName(TEXT("OnMessageSet"));
	void USocialChatMessageEntry::OnMessageSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_USocialChatMessageEntry_OnMessageSet),NULL);
	}
	void USocialChatMessageEntry::StaticRegisterNativesUSocialChatMessageEntry()
	{
		UClass* Class = USocialChatMessageEntry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &USocialChatMessageEntry::execCanInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics
	{
		struct SocialChatMessageEntry_eventCanInteract_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SocialChatMessageEntry_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocialChatMessageEntry_eventCanInteract_Parms), &Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialChatMessageEntry, "CanInteract", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(SocialChatMessageEntry_eventCanInteract_Parms), Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialChatMessageEntry_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialChatMessageEntry_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialChatMessageEntry_OnMessageSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialChatMessageEntry_OnMessageSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialChatMessageEntry_OnMessageSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialChatMessageEntry, "OnMessageSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialChatMessageEntry_OnMessageSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialChatMessageEntry_OnMessageSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialChatMessageEntry_OnMessageSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialChatMessageEntry_OnMessageSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocialChatMessageEntry_NoRegister()
	{
		return USocialChatMessageEntry::StaticClass();
	}
	struct Z_Construct_UClass_USocialChatMessageEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MessageButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_MessageButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_Header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_ChannelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_ChannelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_SenderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_SenderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialChatMessageEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocialChatMessageEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocialChatMessageEntry_CanInteract, "CanInteract" }, // 2374276224
		{ &Z_Construct_UFunction_USocialChatMessageEntry_OnMessageSet, "OnMessageSet" }, // 3042535982
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialChatMessageEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Button_MessageButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Button_MessageButton = { UE4CodeGen_Private::EPropertyClass::Object, "Button_MessageButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatMessageEntry, Button_MessageButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Button_MessageButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Button_MessageButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_HorizontalBox_Header_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_HorizontalBox_Header = { UE4CodeGen_Private::EPropertyClass::Object, "HorizontalBox_Header", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatMessageEntry, HorizontalBox_Header), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_HorizontalBox_Header_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_HorizontalBox_Header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Timestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Timestamp = { UE4CodeGen_Private::EPropertyClass::Object, "Text_Timestamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatMessageEntry, Text_Timestamp), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Timestamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_ChannelName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_ChannelName = { UE4CodeGen_Private::EPropertyClass::Object, "Text_ChannelName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatMessageEntry, Text_ChannelName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_ChannelName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_ChannelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_SenderName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_SenderName = { UE4CodeGen_Private::EPropertyClass::Object, "Text_SenderName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatMessageEntry, Text_SenderName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_SenderName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_SenderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Message = { UE4CodeGen_Private::EPropertyClass::Object, "Text_Message", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatMessageEntry, Text_Message), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Message_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_DefaultStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntry" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_DefaultStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USocialChatMessageEntry, DefaultStyle), Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle, METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_DefaultStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_DefaultStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialChatMessageEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Button_MessageButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_HorizontalBox_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_ChannelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_SenderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_Text_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatMessageEntry_Statics::NewProp_DefaultStyle,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USocialChatMessageEntry_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserListEntry_NoRegister, (int32)VTABLE_OFFSET(USocialChatMessageEntry, IUserListEntry), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialChatMessageEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialChatMessageEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialChatMessageEntry_Statics::ClassParams = {
		&USocialChatMessageEntry::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USocialChatMessageEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageEntry_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageEntry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialChatMessageEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialChatMessageEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialChatMessageEntry, 288858458);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialChatMessageEntry(Z_Construct_UClass_USocialChatMessageEntry, &USocialChatMessageEntry::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialChatMessageEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialChatMessageEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
