// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Robot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobot() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobot_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobot();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_ActivateDisobedience();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_CheckInAtSlot();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADoorQueueSlot_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_CollectMaterial();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMachineMaterial_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_CollectWare();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMachine_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_DeliverWare();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWareGrabber_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_DestroyCarriedStuff();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_DropMaterialDown();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_DropOffWare();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_EnterLift();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_FindMachineToCollectFrom();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GetAgenda();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_URobotAgenda_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GetBehaviorState();
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_ERobotState();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GetCarriedMaterial();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GetCarriedWare();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GetDoorQueue();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADoorQueue_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GetLift();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ALift_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GetQueueSlot();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GetRobotNr();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GetWorkTargetMachine();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GiveCallToOfficeCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GiveCollectWorkCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GiveOverlordOrder();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GiveProductionWorkCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_HasNumber();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_IsOnLift();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_IsRequestFulfilled();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_LeaveLift();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_NotifyDoorSlotOfLeaving();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_PlayHappyGreeting();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_PlaySettingAppropriateExpression();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_RegisterWithLift();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_RequestMaterial();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_SendIntoOffice();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_SetHasBeenInOffice();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_SetHasNotBeenInOffice();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_SetIdling();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_SetNotOnLift();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_SetOnLift();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_SupplyMachine();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_TerminateProductionWorkCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_TerminateSupplyWorkCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_ThrowWareOnHead();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobot_WasAlreadyInOffice();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWare_NoRegister();
// End Cross Module References
	static FName NAME_ARobot_ActivateDisobedience = FName(TEXT("ActivateDisobedience"));
	void ARobot::ActivateDisobedience()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobot_ActivateDisobedience),NULL);
	}
	static FName NAME_ARobot_DropMaterialDown = FName(TEXT("DropMaterialDown"));
	void ARobot::DropMaterialDown()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobot_DropMaterialDown),NULL);
	}
	static FName NAME_ARobot_DropOffWare = FName(TEXT("DropOffWare"));
	void ARobot::DropOffWare(AWareGrabber* WareGrabber)
	{
		Robot_eventDropOffWare_Parms Parms;
		Parms.WareGrabber=WareGrabber;
		ProcessEvent(FindFunctionChecked(NAME_ARobot_DropOffWare),&Parms);
	}
	static FName NAME_ARobot_PlayHappyGreeting = FName(TEXT("PlayHappyGreeting"));
	void ARobot::PlayHappyGreeting()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobot_PlayHappyGreeting),NULL);
	}
	static FName NAME_ARobot_PlaySettingAppropriateExpression = FName(TEXT("PlaySettingAppropriateExpression"));
	void ARobot::PlaySettingAppropriateExpression()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobot_PlaySettingAppropriateExpression),NULL);
	}
	static FName NAME_ARobot_ThrowWareOnHead = FName(TEXT("ThrowWareOnHead"));
	void ARobot::ThrowWareOnHead()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobot_ThrowWareOnHead),NULL);
	}
	void ARobot::StaticRegisterNativesARobot()
	{
		UClass* Class = ARobot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckInAtSlot", &ARobot::execCheckInAtSlot },
			{ "CollectMaterial", &ARobot::execCollectMaterial },
			{ "CollectWare", &ARobot::execCollectWare },
			{ "DeliverWare", &ARobot::execDeliverWare },
			{ "DestroyCarriedStuff", &ARobot::execDestroyCarriedStuff },
			{ "EnterLift", &ARobot::execEnterLift },
			{ "FindMachineToCollectFrom", &ARobot::execFindMachineToCollectFrom },
			{ "GetAgenda", &ARobot::execGetAgenda },
			{ "GetBehaviorState", &ARobot::execGetBehaviorState },
			{ "GetCarriedMaterial", &ARobot::execGetCarriedMaterial },
			{ "GetCarriedWare", &ARobot::execGetCarriedWare },
			{ "GetDoorQueue", &ARobot::execGetDoorQueue },
			{ "GetLift", &ARobot::execGetLift },
			{ "GetQueueSlot", &ARobot::execGetQueueSlot },
			{ "GetRobotNr", &ARobot::execGetRobotNr },
			{ "GetWorkTargetMachine", &ARobot::execGetWorkTargetMachine },
			{ "GiveCallToOfficeCommand", &ARobot::execGiveCallToOfficeCommand },
			{ "GiveCollectWorkCommand", &ARobot::execGiveCollectWorkCommand },
			{ "GiveOverlordOrder", &ARobot::execGiveOverlordOrder },
			{ "GiveProductionWorkCommand", &ARobot::execGiveProductionWorkCommand },
			{ "GiveSupplyWorkCommand", &ARobot::execGiveSupplyWorkCommand },
			{ "HasNumber", &ARobot::execHasNumber },
			{ "IsOnLift", &ARobot::execIsOnLift },
			{ "IsRequestFulfilled", &ARobot::execIsRequestFulfilled },
			{ "LeaveLift", &ARobot::execLeaveLift },
			{ "NotifyDoorSlotOfLeaving", &ARobot::execNotifyDoorSlotOfLeaving },
			{ "RegisterWithLift", &ARobot::execRegisterWithLift },
			{ "RequestMaterial", &ARobot::execRequestMaterial },
			{ "SendIntoOffice", &ARobot::execSendIntoOffice },
			{ "SetHasBeenInOffice", &ARobot::execSetHasBeenInOffice },
			{ "SetHasNotBeenInOffice", &ARobot::execSetHasNotBeenInOffice },
			{ "SetIdling", &ARobot::execSetIdling },
			{ "SetNotOnLift", &ARobot::execSetNotOnLift },
			{ "SetOnLift", &ARobot::execSetOnLift },
			{ "SupplyMachine", &ARobot::execSupplyMachine },
			{ "TerminateProductionWorkCommand", &ARobot::execTerminateProductionWorkCommand },
			{ "TerminateSupplyWorkCommand", &ARobot::execTerminateSupplyWorkCommand },
			{ "WasAlreadyInOffice", &ARobot::execWasAlreadyInOffice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARobot_ActivateDisobedience_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_ActivateDisobedience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_ActivateDisobedience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "ActivateDisobedience", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_ActivateDisobedience_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_ActivateDisobedience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_ActivateDisobedience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_ActivateDisobedience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics
	{
		struct Robot_eventCheckInAtSlot_Parms
		{
			ADoorQueueSlot* Slot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventCheckInAtSlot_Parms, Slot), Z_Construct_UClass_ADoorQueueSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "CheckInAtSlot", nullptr, nullptr, sizeof(Robot_eventCheckInAtSlot_Parms), Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_CheckInAtSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_CheckInAtSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_CollectMaterial_Statics
	{
		struct Robot_eventCollectMaterial_Parms
		{
			AMachineMaterial* MaterialToCollect;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialToCollect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_CollectMaterial_Statics::NewProp_MaterialToCollect = { "MaterialToCollect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventCollectMaterial_Parms, MaterialToCollect), Z_Construct_UClass_AMachineMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_CollectMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_CollectMaterial_Statics::NewProp_MaterialToCollect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_CollectMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_CollectMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "CollectMaterial", nullptr, nullptr, sizeof(Robot_eventCollectMaterial_Parms), Z_Construct_UFunction_ARobot_CollectMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_CollectMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_CollectMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_CollectMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_CollectMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_CollectMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_CollectWare_Statics
	{
		struct Robot_eventCollectWare_Parms
		{
			AMachine* TargetMachine;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARobot_CollectWare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Robot_eventCollectWare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobot_CollectWare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Robot_eventCollectWare_Parms), &Z_Construct_UFunction_ARobot_CollectWare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_CollectWare_Statics::NewProp_TargetMachine = { "TargetMachine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventCollectWare_Parms, TargetMachine), Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_CollectWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_CollectWare_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_CollectWare_Statics::NewProp_TargetMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_CollectWare_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_CollectWare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "CollectWare", nullptr, nullptr, sizeof(Robot_eventCollectWare_Parms), Z_Construct_UFunction_ARobot_CollectWare_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_CollectWare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_CollectWare_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_CollectWare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_CollectWare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_CollectWare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_DeliverWare_Statics
	{
		struct Robot_eventDeliverWare_Parms
		{
			AWareGrabber* AtWareGrabber;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtWareGrabber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_DeliverWare_Statics::NewProp_AtWareGrabber = { "AtWareGrabber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventDeliverWare_Parms, AtWareGrabber), Z_Construct_UClass_AWareGrabber_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_DeliverWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_DeliverWare_Statics::NewProp_AtWareGrabber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_DeliverWare_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_DeliverWare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "DeliverWare", nullptr, nullptr, sizeof(Robot_eventDeliverWare_Parms), Z_Construct_UFunction_ARobot_DeliverWare_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_DeliverWare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_DeliverWare_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_DeliverWare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_DeliverWare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_DeliverWare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_DestroyCarriedStuff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_DestroyCarriedStuff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_DestroyCarriedStuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "DestroyCarriedStuff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_DestroyCarriedStuff_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_DestroyCarriedStuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_DestroyCarriedStuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_DestroyCarriedStuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_DropMaterialDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_DropMaterialDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_DropMaterialDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "DropMaterialDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_DropMaterialDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_DropMaterialDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_DropMaterialDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_DropMaterialDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_DropOffWare_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WareGrabber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_DropOffWare_Statics::NewProp_WareGrabber = { "WareGrabber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventDropOffWare_Parms, WareGrabber), Z_Construct_UClass_AWareGrabber_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_DropOffWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_DropOffWare_Statics::NewProp_WareGrabber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_DropOffWare_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_DropOffWare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "DropOffWare", nullptr, nullptr, sizeof(Robot_eventDropOffWare_Parms), Z_Construct_UFunction_ARobot_DropOffWare_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_DropOffWare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_DropOffWare_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_DropOffWare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_DropOffWare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_DropOffWare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_EnterLift_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_EnterLift_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_EnterLift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "EnterLift", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_EnterLift_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_EnterLift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_EnterLift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_EnterLift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_FindMachineToCollectFrom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_FindMachineToCollectFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_FindMachineToCollectFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "FindMachineToCollectFrom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_FindMachineToCollectFrom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_FindMachineToCollectFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_FindMachineToCollectFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_FindMachineToCollectFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GetAgenda_Statics
	{
		struct Robot_eventGetAgenda_Parms
		{
			URobotAgenda* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetAgenda_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GetAgenda_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGetAgenda_Parms, ReturnValue), Z_Construct_UClass_URobotAgenda_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetAgenda_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetAgenda_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GetAgenda_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetAgenda_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetAgenda_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GetAgenda_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GetAgenda", nullptr, nullptr, sizeof(Robot_eventGetAgenda_Parms), Z_Construct_UFunction_ARobot_GetAgenda_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetAgenda_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetAgenda_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetAgenda_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GetAgenda()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GetAgenda_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GetBehaviorState_Statics
	{
		struct Robot_eventGetBehaviorState_Parms
		{
			ERobotState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGetBehaviorState_Parms, ReturnValue), Z_Construct_UEnum_Weinhofer_LFB_ERobotState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GetBehaviorState", nullptr, nullptr, sizeof(Robot_eventGetBehaviorState_Parms), Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GetBehaviorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GetBehaviorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics
	{
		struct Robot_eventGetCarriedMaterial_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGetCarriedMaterial_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GetCarriedMaterial", nullptr, nullptr, sizeof(Robot_eventGetCarriedMaterial_Parms), Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GetCarriedMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GetCarriedMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GetCarriedWare_Statics
	{
		struct Robot_eventGetCarriedWare_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGetCarriedWare_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GetCarriedWare", nullptr, nullptr, sizeof(Robot_eventGetCarriedWare_Parms), Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GetCarriedWare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GetCarriedWare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GetDoorQueue_Statics
	{
		struct Robot_eventGetDoorQueue_Parms
		{
			ADoorQueue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGetDoorQueue_Parms, ReturnValue), Z_Construct_UClass_ADoorQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GetDoorQueue", nullptr, nullptr, sizeof(Robot_eventGetDoorQueue_Parms), Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GetDoorQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GetDoorQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GetLift_Statics
	{
		struct Robot_eventGetLift_Parms
		{
			ALift* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GetLift_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGetLift_Parms, ReturnValue), Z_Construct_UClass_ALift_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GetLift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetLift_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetLift_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GetLift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GetLift", nullptr, nullptr, sizeof(Robot_eventGetLift_Parms), Z_Construct_UFunction_ARobot_GetLift_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetLift_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetLift_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetLift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GetLift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GetLift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GetQueueSlot_Statics
	{
		struct Robot_eventGetQueueSlot_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGetQueueSlot_Parms, ReturnValue), Z_Construct_UClass_ADoorQueueSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GetQueueSlot", nullptr, nullptr, sizeof(Robot_eventGetQueueSlot_Parms), Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GetQueueSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GetQueueSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GetRobotNr_Statics
	{
		struct Robot_eventGetRobotNr_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARobot_GetRobotNr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGetRobotNr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GetRobotNr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetRobotNr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetRobotNr_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Accessors\n" },
		{ "ModuleRelativePath", "Robot.h" },
		{ "ToolTip", "Accessors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GetRobotNr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GetRobotNr", nullptr, nullptr, sizeof(Robot_eventGetRobotNr_Parms), Z_Construct_UFunction_ARobot_GetRobotNr_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetRobotNr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetRobotNr_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetRobotNr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GetRobotNr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GetRobotNr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics
	{
		struct Robot_eventGetWorkTargetMachine_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGetWorkTargetMachine_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GetWorkTargetMachine", nullptr, nullptr, sizeof(Robot_eventGetWorkTargetMachine_Parms), Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GetWorkTargetMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GetWorkTargetMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GiveCallToOfficeCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GiveCallToOfficeCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GiveCallToOfficeCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GiveCallToOfficeCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GiveCallToOfficeCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GiveCallToOfficeCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GiveCallToOfficeCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GiveCallToOfficeCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GiveCollectWorkCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GiveCollectWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GiveCollectWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GiveCollectWorkCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GiveCollectWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GiveCollectWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GiveCollectWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GiveCollectWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics
	{
		struct Robot_eventGiveOverlordOrder_Parms
		{
			URobotAgenda* NewAgenda;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAgenda_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAgenda;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::NewProp_NewAgenda_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::NewProp_NewAgenda = { "NewAgenda", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGiveOverlordOrder_Parms, NewAgenda), Z_Construct_UClass_URobotAgenda_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::NewProp_NewAgenda_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::NewProp_NewAgenda_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::NewProp_NewAgenda,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GiveOverlordOrder", nullptr, nullptr, sizeof(Robot_eventGiveOverlordOrder_Parms), Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GiveOverlordOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GiveOverlordOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics
	{
		struct Robot_eventGiveProductionWorkCommand_Parms
		{
			AMachine* TargetMachine;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::NewProp_TargetMachine = { "TargetMachine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGiveProductionWorkCommand_Parms, TargetMachine), Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::NewProp_TargetMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GiveProductionWorkCommand", nullptr, nullptr, sizeof(Robot_eventGiveProductionWorkCommand_Parms), Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GiveProductionWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GiveProductionWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics
	{
		struct Robot_eventGiveSupplyWorkCommand_Parms
		{
			AMachine* TargetMachine;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::NewProp_TargetMachine = { "TargetMachine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventGiveSupplyWorkCommand_Parms, TargetMachine), Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::NewProp_TargetMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "GiveSupplyWorkCommand", nullptr, nullptr, sizeof(Robot_eventGiveSupplyWorkCommand_Parms), Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_HasNumber_Statics
	{
		struct Robot_eventHasNumber_Parms
		{
			int32 Number;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARobot_HasNumber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Robot_eventHasNumber_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobot_HasNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Robot_eventHasNumber_Parms), &Z_Construct_UFunction_ARobot_HasNumber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARobot_HasNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventHasNumber_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_HasNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_HasNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_HasNumber_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_HasNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_HasNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "HasNumber", nullptr, nullptr, sizeof(Robot_eventHasNumber_Parms), Z_Construct_UFunction_ARobot_HasNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_HasNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_HasNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_HasNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_HasNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_HasNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_IsOnLift_Statics
	{
		struct Robot_eventIsOnLift_Parms
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
	void Z_Construct_UFunction_ARobot_IsOnLift_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Robot_eventIsOnLift_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobot_IsOnLift_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Robot_eventIsOnLift_Parms), &Z_Construct_UFunction_ARobot_IsOnLift_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_IsOnLift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_IsOnLift_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_IsOnLift_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_IsOnLift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "IsOnLift", nullptr, nullptr, sizeof(Robot_eventIsOnLift_Parms), Z_Construct_UFunction_ARobot_IsOnLift_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_IsOnLift_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_IsOnLift_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_IsOnLift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_IsOnLift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_IsOnLift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics
	{
		struct Robot_eventIsRequestFulfilled_Parms
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
	void Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Robot_eventIsRequestFulfilled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Robot_eventIsRequestFulfilled_Parms), &Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "IsRequestFulfilled", nullptr, nullptr, sizeof(Robot_eventIsRequestFulfilled_Parms), Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_IsRequestFulfilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_IsRequestFulfilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_LeaveLift_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_LeaveLift_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_LeaveLift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "LeaveLift", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_LeaveLift_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_LeaveLift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_LeaveLift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_LeaveLift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_NotifyDoorSlotOfLeaving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_NotifyDoorSlotOfLeaving_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_NotifyDoorSlotOfLeaving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "NotifyDoorSlotOfLeaving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_NotifyDoorSlotOfLeaving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_NotifyDoorSlotOfLeaving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_NotifyDoorSlotOfLeaving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_NotifyDoorSlotOfLeaving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_PlayHappyGreeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_PlayHappyGreeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Expressions and Animations" },
		{ "Comment", "//Expressions and Animations\n" },
		{ "ModuleRelativePath", "Robot.h" },
		{ "ToolTip", "Expressions and Animations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_PlayHappyGreeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "PlayHappyGreeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_PlayHappyGreeting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_PlayHappyGreeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_PlayHappyGreeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_PlayHappyGreeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_PlaySettingAppropriateExpression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_PlaySettingAppropriateExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "Expressions and Animations" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_PlaySettingAppropriateExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "PlaySettingAppropriateExpression", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_PlaySettingAppropriateExpression_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_PlaySettingAppropriateExpression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_PlaySettingAppropriateExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_PlaySettingAppropriateExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_RegisterWithLift_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_RegisterWithLift_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_RegisterWithLift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "RegisterWithLift", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_RegisterWithLift_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_RegisterWithLift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_RegisterWithLift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_RegisterWithLift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_RequestMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_RequestMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//World Interaction Functions\n" },
		{ "ModuleRelativePath", "Robot.h" },
		{ "ToolTip", "World Interaction Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_RequestMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "RequestMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_RequestMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_RequestMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_RequestMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_RequestMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_SendIntoOffice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_SendIntoOffice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_SendIntoOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "SendIntoOffice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_SendIntoOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_SendIntoOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_SendIntoOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_SendIntoOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_SetHasBeenInOffice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_SetHasBeenInOffice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_SetHasBeenInOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "SetHasBeenInOffice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_SetHasBeenInOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_SetHasBeenInOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_SetHasBeenInOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_SetHasBeenInOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_SetHasNotBeenInOffice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_SetHasNotBeenInOffice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_SetHasNotBeenInOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "SetHasNotBeenInOffice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_SetHasNotBeenInOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_SetHasNotBeenInOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_SetHasNotBeenInOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_SetHasNotBeenInOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_SetIdling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_SetIdling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "Comment", "//Command Behavior\n" },
		{ "ModuleRelativePath", "Robot.h" },
		{ "ToolTip", "Command Behavior" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_SetIdling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "SetIdling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_SetIdling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_SetIdling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_SetIdling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_SetIdling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_SetNotOnLift_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_SetNotOnLift_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_SetNotOnLift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "SetNotOnLift", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_SetNotOnLift_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_SetNotOnLift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_SetNotOnLift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_SetNotOnLift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_SetOnLift_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_SetOnLift_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_SetOnLift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "SetOnLift", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_SetOnLift_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_SetOnLift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_SetOnLift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_SetOnLift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_SupplyMachine_Statics
	{
		struct Robot_eventSupplyMachine_Parms
		{
			AMachine* TargetMachine;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobot_SupplyMachine_Statics::NewProp_TargetMachine = { "TargetMachine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Robot_eventSupplyMachine_Parms, TargetMachine), Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_SupplyMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_SupplyMachine_Statics::NewProp_TargetMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_SupplyMachine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_SupplyMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "SupplyMachine", nullptr, nullptr, sizeof(Robot_eventSupplyMachine_Parms), Z_Construct_UFunction_ARobot_SupplyMachine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_SupplyMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_SupplyMachine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_SupplyMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_SupplyMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_SupplyMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_TerminateProductionWorkCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_TerminateProductionWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_TerminateProductionWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "TerminateProductionWorkCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_TerminateProductionWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_TerminateProductionWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_TerminateProductionWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_TerminateProductionWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_TerminateSupplyWorkCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_TerminateSupplyWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_TerminateSupplyWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "TerminateSupplyWorkCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_TerminateSupplyWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_TerminateSupplyWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_TerminateSupplyWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_TerminateSupplyWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_ThrowWareOnHead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_ThrowWareOnHead_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_ThrowWareOnHead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "ThrowWareOnHead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_ThrowWareOnHead_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_ThrowWareOnHead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_ThrowWareOnHead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_ThrowWareOnHead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics
	{
		struct Robot_eventWasAlreadyInOffice_Parms
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
	void Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Robot_eventWasAlreadyInOffice_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Robot_eventWasAlreadyInOffice_Parms), &Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobot, nullptr, "WasAlreadyInOffice", nullptr, nullptr, sizeof(Robot_eventWasAlreadyInOffice_Parms), Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobot_WasAlreadyInOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobot_WasAlreadyInOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARobot_NoRegister()
	{
		return ARobot::StaticClass();
	}
	struct Z_Construct_UClass_ARobot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Agenda_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agenda;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLift_MetaData[];
#endif
		static void NewProp_OnLift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnLift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lift_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorQueueSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorQueueSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarriedWare_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarriedWare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarriedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarriedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RobotNr_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RobotNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARobot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARobot_ActivateDisobedience, "ActivateDisobedience" }, // 1696056975
		{ &Z_Construct_UFunction_ARobot_CheckInAtSlot, "CheckInAtSlot" }, // 2442385693
		{ &Z_Construct_UFunction_ARobot_CollectMaterial, "CollectMaterial" }, // 980105425
		{ &Z_Construct_UFunction_ARobot_CollectWare, "CollectWare" }, // 1763210478
		{ &Z_Construct_UFunction_ARobot_DeliverWare, "DeliverWare" }, // 628476982
		{ &Z_Construct_UFunction_ARobot_DestroyCarriedStuff, "DestroyCarriedStuff" }, // 2073975344
		{ &Z_Construct_UFunction_ARobot_DropMaterialDown, "DropMaterialDown" }, // 2895820355
		{ &Z_Construct_UFunction_ARobot_DropOffWare, "DropOffWare" }, // 2524544434
		{ &Z_Construct_UFunction_ARobot_EnterLift, "EnterLift" }, // 4124750077
		{ &Z_Construct_UFunction_ARobot_FindMachineToCollectFrom, "FindMachineToCollectFrom" }, // 4072568390
		{ &Z_Construct_UFunction_ARobot_GetAgenda, "GetAgenda" }, // 2432418992
		{ &Z_Construct_UFunction_ARobot_GetBehaviorState, "GetBehaviorState" }, // 3747972822
		{ &Z_Construct_UFunction_ARobot_GetCarriedMaterial, "GetCarriedMaterial" }, // 3086691272
		{ &Z_Construct_UFunction_ARobot_GetCarriedWare, "GetCarriedWare" }, // 3866156406
		{ &Z_Construct_UFunction_ARobot_GetDoorQueue, "GetDoorQueue" }, // 3681840419
		{ &Z_Construct_UFunction_ARobot_GetLift, "GetLift" }, // 1827133448
		{ &Z_Construct_UFunction_ARobot_GetQueueSlot, "GetQueueSlot" }, // 1062772840
		{ &Z_Construct_UFunction_ARobot_GetRobotNr, "GetRobotNr" }, // 3771374075
		{ &Z_Construct_UFunction_ARobot_GetWorkTargetMachine, "GetWorkTargetMachine" }, // 4231115432
		{ &Z_Construct_UFunction_ARobot_GiveCallToOfficeCommand, "GiveCallToOfficeCommand" }, // 1203458162
		{ &Z_Construct_UFunction_ARobot_GiveCollectWorkCommand, "GiveCollectWorkCommand" }, // 2880840192
		{ &Z_Construct_UFunction_ARobot_GiveOverlordOrder, "GiveOverlordOrder" }, // 3219502834
		{ &Z_Construct_UFunction_ARobot_GiveProductionWorkCommand, "GiveProductionWorkCommand" }, // 884114738
		{ &Z_Construct_UFunction_ARobot_GiveSupplyWorkCommand, "GiveSupplyWorkCommand" }, // 7792729
		{ &Z_Construct_UFunction_ARobot_HasNumber, "HasNumber" }, // 1955040716
		{ &Z_Construct_UFunction_ARobot_IsOnLift, "IsOnLift" }, // 581968494
		{ &Z_Construct_UFunction_ARobot_IsRequestFulfilled, "IsRequestFulfilled" }, // 3173921377
		{ &Z_Construct_UFunction_ARobot_LeaveLift, "LeaveLift" }, // 2942167497
		{ &Z_Construct_UFunction_ARobot_NotifyDoorSlotOfLeaving, "NotifyDoorSlotOfLeaving" }, // 3345940309
		{ &Z_Construct_UFunction_ARobot_PlayHappyGreeting, "PlayHappyGreeting" }, // 298784010
		{ &Z_Construct_UFunction_ARobot_PlaySettingAppropriateExpression, "PlaySettingAppropriateExpression" }, // 3209940973
		{ &Z_Construct_UFunction_ARobot_RegisterWithLift, "RegisterWithLift" }, // 2925410054
		{ &Z_Construct_UFunction_ARobot_RequestMaterial, "RequestMaterial" }, // 4218340261
		{ &Z_Construct_UFunction_ARobot_SendIntoOffice, "SendIntoOffice" }, // 675478362
		{ &Z_Construct_UFunction_ARobot_SetHasBeenInOffice, "SetHasBeenInOffice" }, // 2713217207
		{ &Z_Construct_UFunction_ARobot_SetHasNotBeenInOffice, "SetHasNotBeenInOffice" }, // 793936742
		{ &Z_Construct_UFunction_ARobot_SetIdling, "SetIdling" }, // 2617299513
		{ &Z_Construct_UFunction_ARobot_SetNotOnLift, "SetNotOnLift" }, // 2855959113
		{ &Z_Construct_UFunction_ARobot_SetOnLift, "SetOnLift" }, // 953083457
		{ &Z_Construct_UFunction_ARobot_SupplyMachine, "SupplyMachine" }, // 3757078630
		{ &Z_Construct_UFunction_ARobot_TerminateProductionWorkCommand, "TerminateProductionWorkCommand" }, // 2953849245
		{ &Z_Construct_UFunction_ARobot_TerminateSupplyWorkCommand, "TerminateSupplyWorkCommand" }, // 1598175884
		{ &Z_Construct_UFunction_ARobot_ThrowWareOnHead, "ThrowWareOnHead" }, // 1475802718
		{ &Z_Construct_UFunction_ARobot_WasAlreadyInOffice, "WasAlreadyInOffice" }, // 207615832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Robot.h" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobot_Statics::NewProp_Agenda_MetaData[] = {
		{ "Category", "Robot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobot_Statics::NewProp_Agenda = { "Agenda", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobot, Agenda), Z_Construct_UClass_URobotAgenda_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobot_Statics::NewProp_Agenda_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobot_Statics::NewProp_Agenda_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobot_Statics::NewProp_OnLift_MetaData[] = {
		{ "Category", "Robot" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	void Z_Construct_UClass_ARobot_Statics::NewProp_OnLift_SetBit(void* Obj)
	{
		((ARobot*)Obj)->OnLift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARobot_Statics::NewProp_OnLift = { "OnLift", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARobot), &Z_Construct_UClass_ARobot_Statics::NewProp_OnLift_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARobot_Statics::NewProp_OnLift_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobot_Statics::NewProp_OnLift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobot_Statics::NewProp_Lift_MetaData[] = {
		{ "Category", "Robot" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobot_Statics::NewProp_Lift = { "Lift", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobot, Lift), Z_Construct_UClass_ALift_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobot_Statics::NewProp_Lift_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobot_Statics::NewProp_Lift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobot_Statics::NewProp_DoorQueueSlot_MetaData[] = {
		{ "Category", "Robot" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobot_Statics::NewProp_DoorQueueSlot = { "DoorQueueSlot", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobot, DoorQueueSlot), Z_Construct_UClass_ADoorQueueSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobot_Statics::NewProp_DoorQueueSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobot_Statics::NewProp_DoorQueueSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobot_Statics::NewProp_CarriedWare_MetaData[] = {
		{ "Category", "Robot" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobot_Statics::NewProp_CarriedWare = { "CarriedWare", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobot, CarriedWare), Z_Construct_UClass_AWare_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobot_Statics::NewProp_CarriedWare_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobot_Statics::NewProp_CarriedWare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobot_Statics::NewProp_CarriedMaterial_MetaData[] = {
		{ "Category", "Robot" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobot_Statics::NewProp_CarriedMaterial = { "CarriedMaterial", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobot, CarriedMaterial), Z_Construct_UClass_AMachineMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobot_Statics::NewProp_CarriedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobot_Statics::NewProp_CarriedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobot_Statics::NewProp_RobotNr_MetaData[] = {
		{ "Category", "Robot" },
		{ "ModuleRelativePath", "Robot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARobot_Statics::NewProp_RobotNr = { "RobotNr", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobot, RobotNr), METADATA_PARAMS(Z_Construct_UClass_ARobot_Statics::NewProp_RobotNr_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobot_Statics::NewProp_RobotNr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobot_Statics::NewProp_Agenda,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobot_Statics::NewProp_OnLift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobot_Statics::NewProp_Lift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobot_Statics::NewProp_DoorQueueSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobot_Statics::NewProp_CarriedWare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobot_Statics::NewProp_CarriedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobot_Statics::NewProp_RobotNr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARobot_Statics::ClassParams = {
		&ARobot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARobot_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ARobot_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARobot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARobot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARobot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARobot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARobot, 1269264233);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ARobot>()
	{
		return ARobot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobot(Z_Construct_UClass_ARobot, &ARobot::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ARobot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
