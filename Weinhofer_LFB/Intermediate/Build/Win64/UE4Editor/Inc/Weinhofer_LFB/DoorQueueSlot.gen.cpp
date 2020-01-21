// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/DoorQueueSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorQueueSlot() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADoorQueueSlot_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADoorQueueSlot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueueSlot_IsOpen();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueueSlot_OccupantIsLeaving();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobot_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ADoorQueueSlot_SendOccupantIntoOffice();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
// End Cross Module References
	void ADoorQueueSlot::StaticRegisterNativesADoorQueueSlot()
	{
		UClass* Class = ADoorQueueSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSlotNr", &ADoorQueueSlot::execGetSlotNr },
			{ "GetTargetPoint", &ADoorQueueSlot::execGetTargetPoint },
			{ "IsCloserToDoorThan", &ADoorQueueSlot::execIsCloserToDoorThan },
			{ "IsOpen", &ADoorQueueSlot::execIsOpen },
			{ "OccupantIsLeaving", &ADoorQueueSlot::execOccupantIsLeaving },
			{ "RegisterOccupant", &ADoorQueueSlot::execRegisterOccupant },
			{ "SendOccupantIntoOffice", &ADoorQueueSlot::execSendOccupantIntoOffice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics
	{
		struct DoorQueueSlot_eventGetSlotNr_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorQueueSlot_eventGetSlotNr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueueSlot, nullptr, "GetSlotNr", nullptr, nullptr, sizeof(DoorQueueSlot_eventGetSlotNr_Parms), Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics
	{
		struct DoorQueueSlot_eventGetTargetPoint_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorQueueSlot_eventGetTargetPoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueueSlot, nullptr, "GetTargetPoint", nullptr, nullptr, sizeof(DoorQueueSlot_eventGetTargetPoint_Parms), Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics
	{
		struct DoorQueueSlot_eventIsCloserToDoorThan_Parms
		{
			ADoorQueueSlot* OtherSlot;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DoorQueueSlot_eventIsCloserToDoorThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DoorQueueSlot_eventIsCloserToDoorThan_Parms), &Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::NewProp_OtherSlot = { "OtherSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorQueueSlot_eventIsCloserToDoorThan_Parms, OtherSlot), Z_Construct_UClass_ADoorQueueSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::NewProp_OtherSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueueSlot, nullptr, "IsCloserToDoorThan", nullptr, nullptr, sizeof(DoorQueueSlot_eventIsCloserToDoorThan_Parms), Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics
	{
		struct DoorQueueSlot_eventIsOpen_Parms
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
	void Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DoorQueueSlot_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DoorQueueSlot_eventIsOpen_Parms), &Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueueSlot, nullptr, "IsOpen", nullptr, nullptr, sizeof(DoorQueueSlot_eventIsOpen_Parms), Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueueSlot_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueueSlot_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueueSlot_OccupantIsLeaving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueueSlot_OccupantIsLeaving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueueSlot_OccupantIsLeaving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueueSlot, nullptr, "OccupantIsLeaving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueueSlot_OccupantIsLeaving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_OccupantIsLeaving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueueSlot_OccupantIsLeaving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueueSlot_OccupantIsLeaving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics
	{
		struct DoorQueueSlot_eventRegisterOccupant_Parms
		{
			ARobot* NewOccupant;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOccupant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::NewProp_NewOccupant = { "NewOccupant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorQueueSlot_eventRegisterOccupant_Parms, NewOccupant), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::NewProp_NewOccupant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueueSlot, nullptr, "RegisterOccupant", nullptr, nullptr, sizeof(DoorQueueSlot_eventRegisterOccupant_Parms), Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorQueueSlot_SendOccupantIntoOffice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorQueueSlot_SendOccupantIntoOffice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorQueueSlot_SendOccupantIntoOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorQueueSlot, nullptr, "SendOccupantIntoOffice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorQueueSlot_SendOccupantIntoOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoorQueueSlot_SendOccupantIntoOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorQueueSlot_SendOccupantIntoOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorQueueSlot_SendOccupantIntoOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoorQueueSlot_NoRegister()
	{
		return ADoorQueueSlot::StaticClass();
	}
	struct Z_Construct_UClass_ADoorQueueSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotNr_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Occupant_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Occupant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorQueueSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoorQueueSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoorQueueSlot_GetSlotNr, "GetSlotNr" }, // 1999119497
		{ &Z_Construct_UFunction_ADoorQueueSlot_GetTargetPoint, "GetTargetPoint" }, // 4133126132
		{ &Z_Construct_UFunction_ADoorQueueSlot_IsCloserToDoorThan, "IsCloserToDoorThan" }, // 1532752433
		{ &Z_Construct_UFunction_ADoorQueueSlot_IsOpen, "IsOpen" }, // 3548456614
		{ &Z_Construct_UFunction_ADoorQueueSlot_OccupantIsLeaving, "OccupantIsLeaving" }, // 2738673479
		{ &Z_Construct_UFunction_ADoorQueueSlot_RegisterOccupant, "RegisterOccupant" }, // 3424490113
		{ &Z_Construct_UFunction_ADoorQueueSlot_SendOccupantIntoOffice, "SendOccupantIntoOffice" }, // 134646319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueueSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoorQueueSlot.h" },
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_SlotNr_MetaData[] = {
		{ "Category", "DoorQueueSlot" },
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_SlotNr = { "SlotNr", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorQueueSlot, SlotNr), METADATA_PARAMS(Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_SlotNr_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_SlotNr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_Occupant_MetaData[] = {
		{ "Category", "DoorQueueSlot" },
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_Occupant = { "Occupant", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorQueueSlot, Occupant), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_Occupant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_Occupant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_TargetPoint_MetaData[] = {
		{ "Category", "DoorQueueSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorQueueSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_TargetPoint = { "TargetPoint", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorQueueSlot, TargetPoint), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_TargetPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_TargetPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorQueueSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_SlotNr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_Occupant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorQueueSlot_Statics::NewProp_TargetPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorQueueSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorQueueSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoorQueueSlot_Statics::ClassParams = {
		&ADoorQueueSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoorQueueSlot_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADoorQueueSlot_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorQueueSlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADoorQueueSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorQueueSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoorQueueSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorQueueSlot, 3428050893);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ADoorQueueSlot>()
	{
		return ADoorQueueSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorQueueSlot(Z_Construct_UClass_ADoorQueueSlot, &ADoorQueueSlot::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ADoorQueueSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorQueueSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
