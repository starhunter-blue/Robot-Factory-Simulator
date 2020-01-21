// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Workscreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkscreen() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWorkscreen_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWorkscreen();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWorkscreen_DismissRobotFromOffice();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_URobotAgenda_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWorkscreen_InformOfRoboterLeavingOffice();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWorkscreen_LetRobotIntoOffice();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWorkscreen_QueueHasRobot();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWorkscreen_SendCollectOrder();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWorkscreen_SendProductionOrder();
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_EWareType();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWorkscreen_SendSupplyOrder();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMachine_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobot_NoRegister();
// End Cross Module References
	static FName NAME_AWorkscreen_GiveRobotAgenda = FName(TEXT("GiveRobotAgenda"));
	void AWorkscreen::GiveRobotAgenda(int32 RobotNr, URobotAgenda* RobotAgenda)
	{
		Workscreen_eventGiveRobotAgenda_Parms Parms;
		Parms.RobotNr=RobotNr;
		Parms.RobotAgenda=RobotAgenda;
		ProcessEvent(FindFunctionChecked(NAME_AWorkscreen_GiveRobotAgenda),&Parms);
	}
	static FName NAME_AWorkscreen_InformOfRoboterLeavingOffice = FName(TEXT("InformOfRoboterLeavingOffice"));
	void AWorkscreen::InformOfRoboterLeavingOffice()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWorkscreen_InformOfRoboterLeavingOffice),NULL);
	}
	void AWorkscreen::StaticRegisterNativesAWorkscreen()
	{
		UClass* Class = AWorkscreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DismissRobotFromOffice", &AWorkscreen::execDismissRobotFromOffice },
			{ "LetRobotIntoOffice", &AWorkscreen::execLetRobotIntoOffice },
			{ "QueueHasRobot", &AWorkscreen::execQueueHasRobot },
			{ "SendCallToOfficeOrder", &AWorkscreen::execSendCallToOfficeOrder },
			{ "SendCollectOrder", &AWorkscreen::execSendCollectOrder },
			{ "SendProductionOrder", &AWorkscreen::execSendProductionOrder },
			{ "SendSupplyOrder", &AWorkscreen::execSendSupplyOrder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorkscreen_DismissRobotFromOffice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_DismissRobotFromOffice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorkscreen_DismissRobotFromOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorkscreen, nullptr, "DismissRobotFromOffice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_DismissRobotFromOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_DismissRobotFromOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorkscreen_DismissRobotFromOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorkscreen_DismissRobotFromOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RobotAgenda_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RobotAgenda;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RobotNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::NewProp_RobotAgenda_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::NewProp_RobotAgenda = { "RobotAgenda", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Workscreen_eventGiveRobotAgenda_Parms, RobotAgenda), Z_Construct_UClass_URobotAgenda_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::NewProp_RobotAgenda_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::NewProp_RobotAgenda_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::NewProp_RobotNr = { "RobotNr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Workscreen_eventGiveRobotAgenda_Parms, RobotNr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::NewProp_RobotAgenda,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::NewProp_RobotNr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorkscreen, nullptr, "GiveRobotAgenda", nullptr, nullptr, sizeof(Workscreen_eventGiveRobotAgenda_Parms), Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorkscreen_InformOfRoboterLeavingOffice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_InformOfRoboterLeavingOffice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorkscreen_InformOfRoboterLeavingOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorkscreen, nullptr, "InformOfRoboterLeavingOffice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_InformOfRoboterLeavingOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_InformOfRoboterLeavingOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorkscreen_InformOfRoboterLeavingOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorkscreen_InformOfRoboterLeavingOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorkscreen_LetRobotIntoOffice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_LetRobotIntoOffice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorkscreen_LetRobotIntoOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorkscreen, nullptr, "LetRobotIntoOffice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_LetRobotIntoOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_LetRobotIntoOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorkscreen_LetRobotIntoOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorkscreen_LetRobotIntoOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics
	{
		struct Workscreen_eventQueueHasRobot_Parms
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
	void Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Workscreen_eventQueueHasRobot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Workscreen_eventQueueHasRobot_Parms), &Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorkscreen, nullptr, "QueueHasRobot", nullptr, nullptr, sizeof(Workscreen_eventQueueHasRobot_Parms), Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorkscreen_QueueHasRobot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorkscreen_QueueHasRobot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics
	{
		struct Workscreen_eventSendCallToOfficeOrder_Parms
		{
			int32 TargetRobotNr;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetRobotNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::NewProp_TargetRobotNr = { "TargetRobotNr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Workscreen_eventSendCallToOfficeOrder_Parms, TargetRobotNr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::NewProp_TargetRobotNr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorkscreen, nullptr, "SendCallToOfficeOrder", nullptr, nullptr, sizeof(Workscreen_eventSendCallToOfficeOrder_Parms), Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics
	{
		struct Workscreen_eventSendCollectOrder_Parms
		{
			int32 TargetRobotNr;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetRobotNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::NewProp_TargetRobotNr = { "TargetRobotNr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Workscreen_eventSendCollectOrder_Parms, TargetRobotNr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::NewProp_TargetRobotNr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorkscreen, nullptr, "SendCollectOrder", nullptr, nullptr, sizeof(Workscreen_eventSendCollectOrder_Parms), Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorkscreen_SendCollectOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorkscreen_SendCollectOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics
	{
		struct Workscreen_eventSendProductionOrder_Parms
		{
			int32 TargetRobotNr;
			EWareType WareType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WareType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WareType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetRobotNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::NewProp_WareType = { "WareType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Workscreen_eventSendProductionOrder_Parms, WareType), Z_Construct_UEnum_Weinhofer_LFB_EWareType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::NewProp_WareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::NewProp_TargetRobotNr = { "TargetRobotNr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Workscreen_eventSendProductionOrder_Parms, TargetRobotNr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::NewProp_WareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::NewProp_WareType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::NewProp_TargetRobotNr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorkscreen, nullptr, "SendProductionOrder", nullptr, nullptr, sizeof(Workscreen_eventSendProductionOrder_Parms), Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorkscreen_SendProductionOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorkscreen_SendProductionOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics
	{
		struct Workscreen_eventSendSupplyOrder_Parms
		{
			int32 TargetRobotNr;
			AMachine* TargetMachine;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMachine;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetRobotNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::NewProp_TargetMachine = { "TargetMachine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Workscreen_eventSendSupplyOrder_Parms, TargetMachine), Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::NewProp_TargetRobotNr = { "TargetRobotNr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Workscreen_eventSendSupplyOrder_Parms, TargetRobotNr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::NewProp_TargetMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::NewProp_TargetRobotNr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorkscreen, nullptr, "SendSupplyOrder", nullptr, nullptr, sizeof(Workscreen_eventSendSupplyOrder_Parms), Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorkscreen_SendSupplyOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorkscreen_SendSupplyOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWorkscreen_NoRegister()
	{
		return AWorkscreen::StaticClass();
	}
	struct Z_Construct_UClass_AWorkscreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Machines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Machines;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Machines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Robots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Robots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Robots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorkscreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorkscreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorkscreen_DismissRobotFromOffice, "DismissRobotFromOffice" }, // 1110293356
		{ &Z_Construct_UFunction_AWorkscreen_GiveRobotAgenda, "GiveRobotAgenda" }, // 614981592
		{ &Z_Construct_UFunction_AWorkscreen_InformOfRoboterLeavingOffice, "InformOfRoboterLeavingOffice" }, // 2415973334
		{ &Z_Construct_UFunction_AWorkscreen_LetRobotIntoOffice, "LetRobotIntoOffice" }, // 1878701091
		{ &Z_Construct_UFunction_AWorkscreen_QueueHasRobot, "QueueHasRobot" }, // 51277768
		{ &Z_Construct_UFunction_AWorkscreen_SendCallToOfficeOrder, "SendCallToOfficeOrder" }, // 4294052035
		{ &Z_Construct_UFunction_AWorkscreen_SendCollectOrder, "SendCollectOrder" }, // 409556209
		{ &Z_Construct_UFunction_AWorkscreen_SendProductionOrder, "SendProductionOrder" }, // 1299069162
		{ &Z_Construct_UFunction_AWorkscreen_SendSupplyOrder, "SendSupplyOrder" }, // 3152591218
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorkscreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Workscreen.h" },
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorkscreen_Statics::NewProp_Machines_MetaData[] = {
		{ "Category", "Waypoints" },
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorkscreen_Statics::NewProp_Machines = { "Machines", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorkscreen, Machines), METADATA_PARAMS(Z_Construct_UClass_AWorkscreen_Statics::NewProp_Machines_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorkscreen_Statics::NewProp_Machines_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorkscreen_Statics::NewProp_Machines_Inner = { "Machines", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorkscreen_Statics::NewProp_Robots_MetaData[] = {
		{ "Category", "Waypoints" },
		{ "ModuleRelativePath", "Workscreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorkscreen_Statics::NewProp_Robots = { "Robots", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorkscreen, Robots), METADATA_PARAMS(Z_Construct_UClass_AWorkscreen_Statics::NewProp_Robots_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorkscreen_Statics::NewProp_Robots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorkscreen_Statics::NewProp_Robots_Inner = { "Robots", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorkscreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorkscreen_Statics::NewProp_Machines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorkscreen_Statics::NewProp_Machines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorkscreen_Statics::NewProp_Robots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorkscreen_Statics::NewProp_Robots_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorkscreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorkscreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorkscreen_Statics::ClassParams = {
		&AWorkscreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorkscreen_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWorkscreen_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWorkscreen_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWorkscreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorkscreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorkscreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorkscreen, 288793421);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AWorkscreen>()
	{
		return AWorkscreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorkscreen(Z_Construct_UClass_AWorkscreen, &AWorkscreen::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AWorkscreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorkscreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
