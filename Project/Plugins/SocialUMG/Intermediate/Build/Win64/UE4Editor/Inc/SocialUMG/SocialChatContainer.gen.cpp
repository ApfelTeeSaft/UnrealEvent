// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialChatContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatContainer() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatContainer_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatContainer();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialChatContainer_FocusEditableText();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialChatContainer_HandleLeftTabPressed();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialChatContainer_HandleRightTabPressed();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialChatContainer_SendCurrentMessage();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatEditableText_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatMessageList_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroup_NoRegister();
	PARTY_API UClass* Z_Construct_UClass_USocialChatChannel_NoRegister();
	PARTY_API UClass* Z_Construct_UClass_USocialChatManager_NoRegister();
// End Cross Module References
	static FName NAME_USocialChatContainer_OnChatOpenChanged = FName(TEXT("OnChatOpenChanged"));
	void USocialChatContainer::OnChatOpenChanged(bool bShouldBeOpen)
	{
		SocialChatContainer_eventOnChatOpenChanged_Parms Parms;
		Parms.bShouldBeOpen=bShouldBeOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USocialChatContainer_OnChatOpenChanged),&Parms);
	}
	void USocialChatContainer::StaticRegisterNativesUSocialChatContainer()
	{
		UClass* Class = USocialChatContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DynamicHandleMessageTextCommitted", &USocialChatContainer::execDynamicHandleMessageTextCommitted },
			{ "FocusEditableText", &USocialChatContainer::execFocusEditableText },
			{ "HandleLeftTabPressed", &USocialChatContainer::execHandleLeftTabPressed },
			{ "HandleRightTabPressed", &USocialChatContainer::execHandleRightTabPressed },
			{ "SendCurrentMessage", &USocialChatContainer::execSendCurrentMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics
	{
		struct SocialChatContainer_eventDynamicHandleMessageTextCommitted_Parms
		{
			FText MessageText;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MessageText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::NewProp_CommitMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "CommitMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocialChatContainer_eventDynamicHandleMessageTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::NewProp_MessageText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::NewProp_MessageText = { UE4CodeGen_Private::EPropertyClass::Text, "MessageText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SocialChatContainer_eventDynamicHandleMessageTextCommitted_Parms, MessageText), METADATA_PARAMS(Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::NewProp_MessageText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::NewProp_MessageText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::NewProp_CommitMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::NewProp_MessageText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialChatContainer, "DynamicHandleMessageTextCommitted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04440401, sizeof(SocialChatContainer_eventDynamicHandleMessageTextCommitted_Parms), Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialChatContainer_FocusEditableText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialChatContainer_FocusEditableText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialChatContainer_FocusEditableText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialChatContainer, "FocusEditableText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialChatContainer_FocusEditableText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialChatContainer_FocusEditableText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialChatContainer_FocusEditableText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialChatContainer_FocusEditableText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialChatContainer_HandleLeftTabPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialChatContainer_HandleLeftTabPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialChatContainer_HandleLeftTabPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialChatContainer, "HandleLeftTabPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialChatContainer_HandleLeftTabPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialChatContainer_HandleLeftTabPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialChatContainer_HandleLeftTabPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialChatContainer_HandleLeftTabPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialChatContainer_HandleRightTabPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialChatContainer_HandleRightTabPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialChatContainer_HandleRightTabPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialChatContainer, "HandleRightTabPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialChatContainer_HandleRightTabPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialChatContainer_HandleRightTabPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialChatContainer_HandleRightTabPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialChatContainer_HandleRightTabPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics
	{
		static void NewProp_bShouldBeOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::NewProp_bShouldBeOpen_SetBit(void* Obj)
	{
		((SocialChatContainer_eventOnChatOpenChanged_Parms*)Obj)->bShouldBeOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::NewProp_bShouldBeOpen = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeOpen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocialChatContainer_eventOnChatOpenChanged_Parms), &Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::NewProp_bShouldBeOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::NewProp_bShouldBeOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialChatContainer, "OnChatOpenChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, sizeof(SocialChatContainer_eventOnChatOpenChanged_Parms), Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialChatContainer_SendCurrentMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialChatContainer_SendCurrentMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialChatContainer_SendCurrentMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialChatContainer, "SendCurrentMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialChatContainer_SendCurrentMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialChatContainer_SendCurrentMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialChatContainer_SendCurrentMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialChatContainer_SendCurrentMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocialChatContainer_NoRegister()
	{
		return USocialChatContainer::StaticClass();
	}
	struct Z_Construct_UClass_USocialChatContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_Channels_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_Channels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryBox_JoinedChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntryBox_JoinedChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_SendMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_SendMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEditableText_MessageEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChatEditableText_MessageEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatList_Messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChatList_Messages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabButtonGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabButtonGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinedChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JoinedChannels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinedChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChatManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialChatContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocialChatContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocialChatContainer_DynamicHandleMessageTextCommitted, "DynamicHandleMessageTextCommitted" }, // 4290202735
		{ &Z_Construct_UFunction_USocialChatContainer_FocusEditableText, "FocusEditableText" }, // 1427433332
		{ &Z_Construct_UFunction_USocialChatContainer_HandleLeftTabPressed, "HandleLeftTabPressed" }, // 643229385
		{ &Z_Construct_UFunction_USocialChatContainer_HandleRightTabPressed, "HandleRightTabPressed" }, // 1655091372
		{ &Z_Construct_UFunction_USocialChatContainer_OnChatOpenChanged, "OnChatOpenChanged" }, // 3535261298
		{ &Z_Construct_UFunction_USocialChatContainer_SendCurrentMessage, "SendCurrentMessage" }, // 1430815479
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialChatContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ScrollBox_Channels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ScrollBox_Channels = { UE4CodeGen_Private::EPropertyClass::Object, "ScrollBox_Channels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatContainer, ScrollBox_Channels), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ScrollBox_Channels_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ScrollBox_Channels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::NewProp_EntryBox_JoinedChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_EntryBox_JoinedChannels = { UE4CodeGen_Private::EPropertyClass::Object, "EntryBox_JoinedChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatContainer, EntryBox_JoinedChannels), Z_Construct_UClass_UDynamicEntryBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_EntryBox_JoinedChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_EntryBox_JoinedChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::NewProp_Button_SendMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_Button_SendMessage = { UE4CodeGen_Private::EPropertyClass::Object, "Button_SendMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatContainer, Button_SendMessage), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_Button_SendMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_Button_SendMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatEditableText_MessageEntry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatEditableText_MessageEntry = { UE4CodeGen_Private::EPropertyClass::Object, "ChatEditableText_MessageEntry", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatContainer, ChatEditableText_MessageEntry), Z_Construct_UClass_USocialChatEditableText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatEditableText_MessageEntry_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatEditableText_MessageEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatList_Messages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatList_Messages = { UE4CodeGen_Private::EPropertyClass::Object, "ChatList_Messages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(USocialChatContainer, ChatList_Messages), Z_Construct_UClass_USocialChatMessageList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatList_Messages_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatList_Messages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::NewProp_TabButtonGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatContainer" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_TabButtonGroup = { UE4CodeGen_Private::EPropertyClass::Object, "TabButtonGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, STRUCT_OFFSET(USocialChatContainer, TabButtonGroup), Z_Construct_UClass_UCommonButtonGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_TabButtonGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_TabButtonGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ActiveChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatContainer" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ActiveChannel = { UE4CodeGen_Private::EPropertyClass::Object, "ActiveChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USocialChatContainer, ActiveChannel), Z_Construct_UClass_USocialChatChannel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ActiveChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ActiveChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::NewProp_JoinedChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatContainer" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_JoinedChannels = { UE4CodeGen_Private::EPropertyClass::Array, "JoinedChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USocialChatContainer, JoinedChannels), METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_JoinedChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_JoinedChannels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_JoinedChannels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "JoinedChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USocialChatChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatContainer" },
		{ "ModuleRelativePath", "Public/SocialChatContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatManager = { UE4CodeGen_Private::EPropertyClass::Object, "ChatManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USocialChatContainer, ChatManager), Z_Construct_UClass_USocialChatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialChatContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ScrollBox_Channels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_EntryBox_JoinedChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_Button_SendMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatEditableText_MessageEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatList_Messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_TabButtonGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ActiveChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_JoinedChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_JoinedChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatContainer_Statics::NewProp_ChatManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialChatContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialChatContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialChatContainer_Statics::ClassParams = {
		&USocialChatContainer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USocialChatContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialChatContainer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialChatContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialChatContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialChatContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialChatContainer, 1324133508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialChatContainer(Z_Construct_UClass_USocialChatContainer, &USocialChatContainer::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialChatContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialChatContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
