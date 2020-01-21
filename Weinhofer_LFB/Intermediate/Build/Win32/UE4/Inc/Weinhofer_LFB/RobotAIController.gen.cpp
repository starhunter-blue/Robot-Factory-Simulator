// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/RobotAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotAIController() {}
// Cross Module References
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_ERobotState();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobotAIController_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobotAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_ClearMachineToCollectFrom();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_FindMachineToCollectFrom();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GetCurrentState();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GetDoorQueue();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADoorQueue_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GetWareGrabber();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GetWaypointCollection();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UWaypointCollection_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GiveCallToOfficeCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GiveCollectWorkCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMachine_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_LeaveOffice();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_OnStateUpdated();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_PermitToEnterOffice();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_RequestMaterial();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_SetIdling();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_SetStateAutonomous();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_TerminateCollectCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_TerminateProductionWorkCommand();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotAIController_TerminateSupplyWorkCommand();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWareGrabber_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMaterialDispenser_NoRegister();
// End Cross Module References
	static UEnum* ERobotState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Weinhofer_LFB_ERobotState, Z_Construct_UPackage__Script_Weinhofer_LFB(), TEXT("ERobotState"));
		}
		return Singleton;
	}
	template<> WEINHOFER_LFB_API UEnum* StaticEnum<ERobotState>()
	{
		return ERobotState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERobotState(ERobotState_StaticEnum, TEXT("/Script/Weinhofer_LFB"), TEXT("ERobotState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Weinhofer_LFB_ERobotState_Hash() { return 1360953488U; }
	UEnum* Z_Construct_UEnum_Weinhofer_LFB_ERobotState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Weinhofer_LFB();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERobotState"), 0, Get_Z_Construct_UEnum_Weinhofer_LFB_ERobotState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERobotState::RSE_UNSET", (int64)ERobotState::RSE_UNSET },
				{ "ERobotState::RSE_Autonomous", (int64)ERobotState::RSE_Autonomous },
				{ "ERobotState::RSE_Idle", (int64)ERobotState::RSE_Idle },
				{ "ERobotState::RSE_Producing", (int64)ERobotState::RSE_Producing },
				{ "ERobotState::RSE_Supplying", (int64)ERobotState::RSE_Supplying },
				{ "ERobotState::RSE_Collecting", (int64)ERobotState::RSE_Collecting },
				{ "ERobotState::RSE_CalledToOffice", (int64)ERobotState::RSE_CalledToOffice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* State a robot can be in, ie. if he's idling, working, ect.\n*/" },
				{ "ModuleRelativePath", "RobotAIController.h" },
				{ "RSE_Autonomous.DisplayName", "Autonomous" },
				{ "RSE_Autonomous.Name", "ERobotState::RSE_Autonomous" },
				{ "RSE_CalledToOffice.DisplayName", "Called to Office" },
				{ "RSE_CalledToOffice.Name", "ERobotState::RSE_CalledToOffice" },
				{ "RSE_Collecting.DisplayName", "Collecting" },
				{ "RSE_Collecting.Name", "ERobotState::RSE_Collecting" },
				{ "RSE_Idle.DisplayName", "Idle" },
				{ "RSE_Idle.Name", "ERobotState::RSE_Idle" },
				{ "RSE_Producing.DisplayName", "Producing" },
				{ "RSE_Producing.Name", "ERobotState::RSE_Producing" },
				{ "RSE_Supplying.DisplayName", "Supplying" },
				{ "RSE_Supplying.Name", "ERobotState::RSE_Supplying" },
				{ "RSE_UNSET.DisplayName", "Unset" },
				{ "RSE_UNSET.Name", "ERobotState::RSE_UNSET" },
				{ "ToolTip", "* State a robot can be in, ie. if he's idling, working, ect." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
				nullptr,
				"ERobotState",
				"ERobotState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_ARobotAIController_LeaveOffice = FName(TEXT("LeaveOffice"));
	void ARobotAIController::LeaveOffice()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobotAIController_LeaveOffice),NULL);
	}
	static FName NAME_ARobotAIController_OnStateUpdated = FName(TEXT("OnStateUpdated"));
	void ARobotAIController::OnStateUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobotAIController_OnStateUpdated),NULL);
	}
	static FName NAME_ARobotAIController_PermitToEnterOffice = FName(TEXT("PermitToEnterOffice"));
	void ARobotAIController::PermitToEnterOffice()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobotAIController_PermitToEnterOffice),NULL);
	}
	void ARobotAIController::StaticRegisterNativesARobotAIController()
	{
		UClass* Class = ARobotAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMachineToCollectFrom", &ARobotAIController::execClearMachineToCollectFrom },
			{ "FindMachineToCollectFrom", &ARobotAIController::execFindMachineToCollectFrom },
			{ "GetCurrentState", &ARobotAIController::execGetCurrentState },
			{ "GetDoorQueue", &ARobotAIController::execGetDoorQueue },
			{ "GetMaterialDispenser", &ARobotAIController::execGetMaterialDispenser },
			{ "GetWareGrabber", &ARobotAIController::execGetWareGrabber },
			{ "GetWaypointCollection", &ARobotAIController::execGetWaypointCollection },
			{ "GetWorkProductionTargetWaypoint", &ARobotAIController::execGetWorkProductionTargetWaypoint },
			{ "GetWorkTargetMachine", &ARobotAIController::execGetWorkTargetMachine },
			{ "GiveCallToOfficeCommand", &ARobotAIController::execGiveCallToOfficeCommand },
			{ "GiveCollectWorkCommand", &ARobotAIController::execGiveCollectWorkCommand },
			{ "GiveProductionWorkCommand", &ARobotAIController::execGiveProductionWorkCommand },
			{ "GiveSupplyWorkCommand", &ARobotAIController::execGiveSupplyWorkCommand },
			{ "RequestMaterial", &ARobotAIController::execRequestMaterial },
			{ "SetIdling", &ARobotAIController::execSetIdling },
			{ "SetStateAutonomous", &ARobotAIController::execSetStateAutonomous },
			{ "TerminateCollectCommand", &ARobotAIController::execTerminateCollectCommand },
			{ "TerminateProductionWorkCommand", &ARobotAIController::execTerminateProductionWorkCommand },
			{ "TerminateSupplyWorkCommand", &ARobotAIController::execTerminateSupplyWorkCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARobotAIController_ClearMachineToCollectFrom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_ClearMachineToCollectFrom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_ClearMachineToCollectFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "ClearMachineToCollectFrom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_ClearMachineToCollectFrom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_ClearMachineToCollectFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_ClearMachineToCollectFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_ClearMachineToCollectFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_FindMachineToCollectFrom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_FindMachineToCollectFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_FindMachineToCollectFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "FindMachineToCollectFrom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_FindMachineToCollectFrom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_FindMachineToCollectFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_FindMachineToCollectFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_FindMachineToCollectFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics
	{
		struct RobotAIController_eventGetCurrentState_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAIController_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_Weinhofer_LFB_ERobotState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Accessor Functions\n" },
		{ "ModuleRelativePath", "RobotAIController.h" },
		{ "ToolTip", "Accessor Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(RobotAIController_eventGetCurrentState_Parms), Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics
	{
		struct RobotAIController_eventGetDoorQueue_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAIController_eventGetDoorQueue_Parms, ReturnValue), Z_Construct_UClass_ADoorQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GetDoorQueue", nullptr, nullptr, sizeof(RobotAIController_eventGetDoorQueue_Parms), Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GetDoorQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GetDoorQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics
	{
		struct RobotAIController_eventGetMaterialDispenser_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAIController_eventGetMaterialDispenser_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GetMaterialDispenser", nullptr, nullptr, sizeof(RobotAIController_eventGetMaterialDispenser_Parms), Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics
	{
		struct RobotAIController_eventGetWareGrabber_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAIController_eventGetWareGrabber_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GetWareGrabber", nullptr, nullptr, sizeof(RobotAIController_eventGetWareGrabber_Parms), Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GetWareGrabber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GetWareGrabber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics
	{
		struct RobotAIController_eventGetWaypointCollection_Parms
		{
			UWaypointCollection* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAIController_eventGetWaypointCollection_Parms, ReturnValue), Z_Construct_UClass_UWaypointCollection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GetWaypointCollection", nullptr, nullptr, sizeof(RobotAIController_eventGetWaypointCollection_Parms), Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GetWaypointCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GetWaypointCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics
	{
		struct RobotAIController_eventGetWorkProductionTargetWaypoint_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAIController_eventGetWorkProductionTargetWaypoint_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GetWorkProductionTargetWaypoint", nullptr, nullptr, sizeof(RobotAIController_eventGetWorkProductionTargetWaypoint_Parms), Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics
	{
		struct RobotAIController_eventGetWorkTargetMachine_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAIController_eventGetWorkTargetMachine_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GetWorkTargetMachine", nullptr, nullptr, sizeof(RobotAIController_eventGetWorkTargetMachine_Parms), Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GiveCallToOfficeCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GiveCallToOfficeCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GiveCallToOfficeCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GiveCallToOfficeCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GiveCallToOfficeCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GiveCallToOfficeCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GiveCallToOfficeCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GiveCallToOfficeCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GiveCollectWorkCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GiveCollectWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GiveCollectWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GiveCollectWorkCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GiveCollectWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GiveCollectWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GiveCollectWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GiveCollectWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics
	{
		struct RobotAIController_eventGiveProductionWorkCommand_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::NewProp_TargetMachine = { "TargetMachine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAIController_eventGiveProductionWorkCommand_Parms, TargetMachine), Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::NewProp_TargetMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GiveProductionWorkCommand", nullptr, nullptr, sizeof(RobotAIController_eventGiveProductionWorkCommand_Parms), Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics
	{
		struct RobotAIController_eventGiveSupplyWorkCommand_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::NewProp_TargetMachine = { "TargetMachine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAIController_eventGiveSupplyWorkCommand_Parms, TargetMachine), Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::NewProp_TargetMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "GiveSupplyWorkCommand", nullptr, nullptr, sizeof(RobotAIController_eventGiveSupplyWorkCommand_Parms), Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_LeaveOffice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_LeaveOffice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_LeaveOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "LeaveOffice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_LeaveOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_LeaveOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_LeaveOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_LeaveOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_OnStateUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_OnStateUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_OnStateUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "OnStateUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_OnStateUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_OnStateUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_OnStateUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_OnStateUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_PermitToEnterOffice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_PermitToEnterOffice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_PermitToEnterOffice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "PermitToEnterOffice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_PermitToEnterOffice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_PermitToEnterOffice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_PermitToEnterOffice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_PermitToEnterOffice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_RequestMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_RequestMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//World Interaction Functions\n" },
		{ "ModuleRelativePath", "RobotAIController.h" },
		{ "ToolTip", "World Interaction Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_RequestMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "RequestMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_RequestMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_RequestMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_RequestMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_RequestMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_SetIdling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_SetIdling_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Command Functions\n" },
		{ "ModuleRelativePath", "RobotAIController.h" },
		{ "ToolTip", "Command Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_SetIdling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "SetIdling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_SetIdling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_SetIdling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_SetIdling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_SetIdling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_SetStateAutonomous_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_SetStateAutonomous_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_SetStateAutonomous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "SetStateAutonomous", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_SetStateAutonomous_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_SetStateAutonomous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_SetStateAutonomous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_SetStateAutonomous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_TerminateCollectCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_TerminateCollectCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_TerminateCollectCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "TerminateCollectCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_TerminateCollectCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_TerminateCollectCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_TerminateCollectCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_TerminateCollectCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_TerminateProductionWorkCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_TerminateProductionWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_TerminateProductionWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "TerminateProductionWorkCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_TerminateProductionWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_TerminateProductionWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_TerminateProductionWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_TerminateProductionWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotAIController_TerminateSupplyWorkCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotAIController_TerminateSupplyWorkCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotAIController_TerminateSupplyWorkCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotAIController, nullptr, "TerminateSupplyWorkCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotAIController_TerminateSupplyWorkCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotAIController_TerminateSupplyWorkCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotAIController_TerminateSupplyWorkCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotAIController_TerminateSupplyWorkCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARobotAIController_NoRegister()
	{
		return ARobotAIController::StaticClass();
	}
	struct Z_Construct_UClass_ARobotAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextMachineToCheckForWare_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextMachineToCheckForWare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Machines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Machines;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Machines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareGrabber_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WareGrabber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDispenser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialDispenser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkTargetMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorkTargetMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RobotState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RobotState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RobotState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Waypoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobotAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARobotAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARobotAIController_ClearMachineToCollectFrom, "ClearMachineToCollectFrom" }, // 847806200
		{ &Z_Construct_UFunction_ARobotAIController_FindMachineToCollectFrom, "FindMachineToCollectFrom" }, // 4222835615
		{ &Z_Construct_UFunction_ARobotAIController_GetCurrentState, "GetCurrentState" }, // 2182120741
		{ &Z_Construct_UFunction_ARobotAIController_GetDoorQueue, "GetDoorQueue" }, // 1203554576
		{ &Z_Construct_UFunction_ARobotAIController_GetMaterialDispenser, "GetMaterialDispenser" }, // 3499199166
		{ &Z_Construct_UFunction_ARobotAIController_GetWareGrabber, "GetWareGrabber" }, // 3487088835
		{ &Z_Construct_UFunction_ARobotAIController_GetWaypointCollection, "GetWaypointCollection" }, // 361618661
		{ &Z_Construct_UFunction_ARobotAIController_GetWorkProductionTargetWaypoint, "GetWorkProductionTargetWaypoint" }, // 2777445341
		{ &Z_Construct_UFunction_ARobotAIController_GetWorkTargetMachine, "GetWorkTargetMachine" }, // 568896865
		{ &Z_Construct_UFunction_ARobotAIController_GiveCallToOfficeCommand, "GiveCallToOfficeCommand" }, // 316994784
		{ &Z_Construct_UFunction_ARobotAIController_GiveCollectWorkCommand, "GiveCollectWorkCommand" }, // 3202087933
		{ &Z_Construct_UFunction_ARobotAIController_GiveProductionWorkCommand, "GiveProductionWorkCommand" }, // 3896990189
		{ &Z_Construct_UFunction_ARobotAIController_GiveSupplyWorkCommand, "GiveSupplyWorkCommand" }, // 2428747139
		{ &Z_Construct_UFunction_ARobotAIController_LeaveOffice, "LeaveOffice" }, // 3304198698
		{ &Z_Construct_UFunction_ARobotAIController_OnStateUpdated, "OnStateUpdated" }, // 1584216841
		{ &Z_Construct_UFunction_ARobotAIController_PermitToEnterOffice, "PermitToEnterOffice" }, // 1765008654
		{ &Z_Construct_UFunction_ARobotAIController_RequestMaterial, "RequestMaterial" }, // 1111783856
		{ &Z_Construct_UFunction_ARobotAIController_SetIdling, "SetIdling" }, // 1085298858
		{ &Z_Construct_UFunction_ARobotAIController_SetStateAutonomous, "SetStateAutonomous" }, // 2741459431
		{ &Z_Construct_UFunction_ARobotAIController_TerminateCollectCommand, "TerminateCollectCommand" }, // 2648079191
		{ &Z_Construct_UFunction_ARobotAIController_TerminateProductionWorkCommand, "TerminateProductionWorkCommand" }, // 750932676
		{ &Z_Construct_UFunction_ARobotAIController_TerminateSupplyWorkCommand, "TerminateSupplyWorkCommand" }, // 914934681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * C++ Side brain of the Robot, works in conjunction with the Behavior Tree and Blackboard in Blueprint to determine behavior\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RobotAIController.h" },
		{ "ModuleRelativePath", "RobotAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "C++ Side brain of the Robot, works in conjunction with the Behavior Tree and Blackboard in Blueprint to determine behavior" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotAIController_Statics::NewProp_DoorQueue_MetaData[] = {
		{ "Category", "RobotAIController" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_DoorQueue = { "DoorQueue", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotAIController, DoorQueue), Z_Construct_UClass_ADoorQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotAIController_Statics::NewProp_DoorQueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::NewProp_DoorQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotAIController_Statics::NewProp_NextMachineToCheckForWare_MetaData[] = {
		{ "Category", "RobotAIController" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_NextMachineToCheckForWare = { "NextMachineToCheckForWare", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotAIController, NextMachineToCheckForWare), METADATA_PARAMS(Z_Construct_UClass_ARobotAIController_Statics::NewProp_NextMachineToCheckForWare_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::NewProp_NextMachineToCheckForWare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotAIController_Statics::NewProp_Machines_MetaData[] = {
		{ "Category", "RobotAIController" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_Machines = { "Machines", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotAIController, Machines), METADATA_PARAMS(Z_Construct_UClass_ARobotAIController_Statics::NewProp_Machines_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::NewProp_Machines_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_Machines_Inner = { "Machines", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotAIController_Statics::NewProp_WareGrabber_MetaData[] = {
		{ "Category", "RobotAIController" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_WareGrabber = { "WareGrabber", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotAIController, WareGrabber), Z_Construct_UClass_AWareGrabber_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotAIController_Statics::NewProp_WareGrabber_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::NewProp_WareGrabber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotAIController_Statics::NewProp_MaterialDispenser_MetaData[] = {
		{ "Category", "RobotAIController" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_MaterialDispenser = { "MaterialDispenser", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotAIController, MaterialDispenser), Z_Construct_UClass_AMaterialDispenser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotAIController_Statics::NewProp_MaterialDispenser_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::NewProp_MaterialDispenser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotAIController_Statics::NewProp_WorkTargetMachine_MetaData[] = {
		{ "Category", "RobotAIController" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_WorkTargetMachine = { "WorkTargetMachine", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotAIController, WorkTargetMachine), Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotAIController_Statics::NewProp_WorkTargetMachine_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::NewProp_WorkTargetMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotAIController_Statics::NewProp_RobotState_MetaData[] = {
		{ "Category", "RobotAIController" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_RobotState = { "RobotState", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotAIController, RobotState), Z_Construct_UEnum_Weinhofer_LFB_ERobotState, METADATA_PARAMS(Z_Construct_UClass_ARobotAIController_Statics::NewProp_RobotState_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::NewProp_RobotState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_RobotState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotAIController_Statics::NewProp_Waypoints_MetaData[] = {
		{ "Category", "RobotAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RobotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotAIController_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotAIController, Waypoints), Z_Construct_UClass_UWaypointCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotAIController_Statics::NewProp_Waypoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::NewProp_Waypoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobotAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_DoorQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_NextMachineToCheckForWare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_Machines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_Machines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_WareGrabber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_MaterialDispenser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_WorkTargetMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_RobotState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_RobotState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotAIController_Statics::NewProp_Waypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobotAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARobotAIController_Statics::ClassParams = {
		&ARobotAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARobotAIController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARobotAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARobotAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARobotAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARobotAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARobotAIController, 4228362959);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ARobotAIController>()
	{
		return ARobotAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobotAIController(Z_Construct_UClass_ARobotAIController, &ARobotAIController::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ARobotAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
