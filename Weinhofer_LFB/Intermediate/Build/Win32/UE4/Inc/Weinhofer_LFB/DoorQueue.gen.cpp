// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/DoorQueue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorQueue() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADoorQueue_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADoorQueue();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueue_CheckInAtSlot();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobot_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADoorQueueSlot_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueue_HasRobot();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueue_LetFirstRobotInQueueIn();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
// End Cross Module References
	void ADoorQueue::StaticRegisterNativesADoorQueue()
	{
		UClass* Class = ADoorQueue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckInAtSlot", &ADoorQueue::execCheckInAtSlot },
			{ "GetFirstOpenSlot", &ADoorQueue::execGetFirstOpenSlot },
			{ "GetNrOfWaitingRobots", &ADoorQueue::execGetNrOfWaitingRobots },
			{ "HasRobot", &ADoorQueue::execHasRobot },
			{ "LetFirstRobotInQueueIn", &ADoorQueue::execLetFirstRobotInQueueIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics
	{
		struct DoorQueue_eventCheckInAtSlot_Parms
		{
			ADoorQueueSlot* Slot;
			ARobot* Robot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Robot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::NewProp_Robot = { "Robot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorQueue_eventCheckInAtSlot_Parms, Robot), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorQueue_eventCheckInAtSlot_Parms, Slot), Z_Construct_UClass_ADoorQueueSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::NewProp_Robot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueue, nullptr, "CheckInAtSlot", nullptr, nullptr, sizeof(DoorQueue_eventCheckInAtSlot_Parms), Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueue_CheckInAtSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueue_CheckInAtSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics
	{
		struct DoorQueue_eventGetFirstOpenSlot_Parms
		{
			ADoorQueueSlot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorQueue_eventGetFirstOpenSlot_Parms, ReturnValue), Z_Construct_UClass_ADoorQueueSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueue, nullptr, "GetFirstOpenSlot", nullptr, nullptr, sizeof(DoorQueue_eventGetFirstOpenSlot_Parms), Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics
	{
		struct DoorQueue_eventGetNrOfWaitingRobots_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorQueue_eventGetNrOfWaitingRobots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueue, nullptr, "GetNrOfWaitingRobots", nullptr, nullptr, sizeof(DoorQueue_eventGetNrOfWaitingRobots_Parms), Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueue_HasRobot_Statics
	{
		struct DoorQueue_eventHasRobot_Parms
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
	void Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DoorQueue_eventHasRobot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DoorQueue_eventHasRobot_Parms), &Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueue, nullptr, "HasRobot", nullptr, nullptr, sizeof(DoorQueue_eventHasRobot_Parms), Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueue_HasRobot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueue_HasRobot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueue_LetFirstRobotInQueueIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueue_LetFirstRobotInQueueIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueue_LetFirstRobotInQueueIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueue, nullptr, "LetFirstRobotInQueueIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueue_LetFirstRobotInQueueIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueue_LetFirstRobotInQueueIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueue_LetFirstRobotInQueueIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueue_LetFirstRobotInQueueIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoorQueue_NoRegister()
	{
		return ADoorQueue::StaticClass();
	}
	struct Z_Construct_UClass_ADoorQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FifthInLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FifthInLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourthInLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FourthInLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdInLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdInLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondInLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondInLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstInLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstInLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoorQueue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoorQueue_CheckInAtSlot, "CheckInAtSlot" }, // 1334965211
		{ &Z_Construct_UFunction_ADoorQueue_GetFirstOpenSlot, "GetFirstOpenSlot" }, // 3913354399
		{ &Z_Construct_UFunction_ADoorQueue_GetNrOfWaitingRobots, "GetNrOfWaitingRobots" }, // 448116580
		{ &Z_Construct_UFunction_ADoorQueue_HasRobot, "HasRobot" }, // 1156098072
		{ &Z_Construct_UFunction_ADoorQueue_LetFirstRobotInQueueIn, "LetFirstRobotInQueueIn" }, // 2634307614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoorQueue.h" },
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueue_Statics::NewProp_FifthInLine_MetaData[] = {
		{ "Category", "DoorQueue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorQueue_Statics::NewProp_FifthInLine = { "FifthInLine", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorQueue, FifthInLine), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorQueue_Statics::NewProp_FifthInLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoorQueue_Statics::NewProp_FifthInLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueue_Statics::NewProp_FourthInLine_MetaData[] = {
		{ "Category", "DoorQueue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorQueue_Statics::NewProp_FourthInLine = { "FourthInLine", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorQueue, FourthInLine), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorQueue_Statics::NewProp_FourthInLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoorQueue_Statics::NewProp_FourthInLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueue_Statics::NewProp_ThirdInLine_MetaData[] = {
		{ "Category", "DoorQueue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorQueue_Statics::NewProp_ThirdInLine = { "ThirdInLine", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorQueue, ThirdInLine), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorQueue_Statics::NewProp_ThirdInLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoorQueue_Statics::NewProp_ThirdInLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueue_Statics::NewProp_SecondInLine_MetaData[] = {
		{ "Category", "DoorQueue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorQueue_Statics::NewProp_SecondInLine = { "SecondInLine", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorQueue, SecondInLine), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorQueue_Statics::NewProp_SecondInLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoorQueue_Statics::NewProp_SecondInLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueue_Statics::NewProp_FirstInLine_MetaData[] = {
		{ "Category", "DoorQueue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorQueue_Statics::NewProp_FirstInLine = { "FirstInLine", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorQueue, FirstInLine), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorQueue_Statics::NewProp_FirstInLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoorQueue_Statics::NewProp_FirstInLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorQueue_Statics::NewProp_FifthInLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorQueue_Statics::NewProp_FourthInLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorQueue_Statics::NewProp_ThirdInLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorQueue_Statics::NewProp_SecondInLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorQueue_Statics::NewProp_FirstInLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorQueue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoorQueue_Statics::ClassParams = {
		&ADoorQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoorQueue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADoorQueue_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorQueue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADoorQueue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorQueue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoorQueue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorQueue, 3879954002);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ADoorQueue>()
	{
		return ADoorQueue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorQueue(Z_Construct_UClass_ADoorQueue, &ADoorQueue::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ADoorQueue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorQueue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
