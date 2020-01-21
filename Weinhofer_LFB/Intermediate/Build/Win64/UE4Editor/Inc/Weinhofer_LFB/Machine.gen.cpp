// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Machine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMachine() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMachine_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMachine();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_CancelCollection();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobot_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_CollectWare();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWare_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetCurrentWare();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetMachineNr();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetNrOfMaterial();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetProducedWareType();
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_EWareType();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetProductionProgress();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetSupplied();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetWareClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_GetWorkstationWaypoint();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_HasMaterial();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_HasWareOpenForCollection();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_IsWareToCollect();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_NoMaterialAvailable();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_ProducesWare();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_SetCurrentWare();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_SetProgressBar();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_SetWareToCollect();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_SpawnWare();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMachine_UseOneMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AMachine_NoMaterialAvailable = FName(TEXT("NoMaterialAvailable"));
	void AMachine::NoMaterialAvailable()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMachine_NoMaterialAvailable),NULL);
	}
	static FName NAME_AMachine_SetProgressBar = FName(TEXT("SetProgressBar"));
	void AMachine::SetProgressBar()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMachine_SetProgressBar),NULL);
	}
	static FName NAME_AMachine_SpawnWare = FName(TEXT("SpawnWare"));
	void AMachine::SpawnWare()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMachine_SpawnWare),NULL);
	}
	void AMachine::StaticRegisterNativesAMachine()
	{
		UClass* Class = AMachine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelCollection", &AMachine::execCancelCollection },
			{ "CollectWare", &AMachine::execCollectWare },
			{ "GetCurrentWare", &AMachine::execGetCurrentWare },
			{ "GetMachineNr", &AMachine::execGetMachineNr },
			{ "GetMaterialDeliveryWaypoint", &AMachine::execGetMaterialDeliveryWaypoint },
			{ "GetNrOfMaterial", &AMachine::execGetNrOfMaterial },
			{ "GetProducedWareType", &AMachine::execGetProducedWareType },
			{ "GetProductionProgress", &AMachine::execGetProductionProgress },
			{ "GetSupplied", &AMachine::execGetSupplied },
			{ "GetWareClass", &AMachine::execGetWareClass },
			{ "GetWareCollectionWaypoint", &AMachine::execGetWareCollectionWaypoint },
			{ "GetWorkstationWaypoint", &AMachine::execGetWorkstationWaypoint },
			{ "HasMaterial", &AMachine::execHasMaterial },
			{ "HasWareOpenForCollection", &AMachine::execHasWareOpenForCollection },
			{ "IsWareToCollect", &AMachine::execIsWareToCollect },
			{ "ProducesWare", &AMachine::execProducesWare },
			{ "RegisterCollectionWorkerRobot", &AMachine::execRegisterCollectionWorkerRobot },
			{ "RegisterNewProductionWorkerRobot", &AMachine::execRegisterNewProductionWorkerRobot },
			{ "RegisterNewSupplyWorkerRobot", &AMachine::execRegisterNewSupplyWorkerRobot },
			{ "SetCurrentWare", &AMachine::execSetCurrentWare },
			{ "SetWareToCollect", &AMachine::execSetWareToCollect },
			{ "UseOneMaterial", &AMachine::execUseOneMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMachine_CancelCollection_Statics
	{
		struct Machine_eventCancelCollection_Parms
		{
			ARobot* ExCollector;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExCollector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_CancelCollection_Statics::NewProp_ExCollector = { "ExCollector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventCancelCollection_Parms, ExCollector), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_CancelCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_CancelCollection_Statics::NewProp_ExCollector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_CancelCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_CancelCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "CancelCollection", nullptr, nullptr, sizeof(Machine_eventCancelCollection_Parms), Z_Construct_UFunction_AMachine_CancelCollection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_CancelCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_CancelCollection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_CancelCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_CancelCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_CancelCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_CollectWare_Statics
	{
		struct Machine_eventCollectWare_Parms
		{
			ARobot* Collector;
			AWare* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_CollectWare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventCollectWare_Parms, ReturnValue), Z_Construct_UClass_AWare_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_CollectWare_Statics::NewProp_Collector = { "Collector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventCollectWare_Parms, Collector), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_CollectWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_CollectWare_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_CollectWare_Statics::NewProp_Collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_CollectWare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_CollectWare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "CollectWare", nullptr, nullptr, sizeof(Machine_eventCollectWare_Parms), Z_Construct_UFunction_AMachine_CollectWare_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_CollectWare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_CollectWare_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_CollectWare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_CollectWare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_CollectWare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetCurrentWare_Statics
	{
		struct Machine_eventGetCurrentWare_Parms
		{
			AWare* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventGetCurrentWare_Parms, ReturnValue), Z_Construct_UClass_AWare_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetCurrentWare", nullptr, nullptr, sizeof(Machine_eventGetCurrentWare_Parms), Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetCurrentWare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetCurrentWare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetMachineNr_Statics
	{
		struct Machine_eventGetMachineNr_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMachine_GetMachineNr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventGetMachineNr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_GetMachineNr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetMachineNr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetMachineNr_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Accessor Functions\n" },
		{ "ModuleRelativePath", "Machine.h" },
		{ "ToolTip", "Accessor Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetMachineNr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetMachineNr", nullptr, nullptr, sizeof(Machine_eventGetMachineNr_Parms), Z_Construct_UFunction_AMachine_GetMachineNr_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetMachineNr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetMachineNr_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetMachineNr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetMachineNr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetMachineNr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics
	{
		struct Machine_eventGetMaterialDeliveryWaypoint_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventGetMaterialDeliveryWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetMaterialDeliveryWaypoint", nullptr, nullptr, sizeof(Machine_eventGetMaterialDeliveryWaypoint_Parms), Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics
	{
		struct Machine_eventGetNrOfMaterial_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventGetNrOfMaterial_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetNrOfMaterial", nullptr, nullptr, sizeof(Machine_eventGetNrOfMaterial_Parms), Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetNrOfMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetNrOfMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetProducedWareType_Statics
	{
		struct Machine_eventGetProducedWareType_Parms
		{
			EWareType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventGetProducedWareType_Parms, ReturnValue), Z_Construct_UEnum_Weinhofer_LFB_EWareType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetProducedWareType", nullptr, nullptr, sizeof(Machine_eventGetProducedWareType_Parms), Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetProducedWareType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetProducedWareType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetProductionProgress_Statics
	{
		struct Machine_eventGetProductionProgress_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventGetProductionProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetProductionProgress", nullptr, nullptr, sizeof(Machine_eventGetProductionProgress_Parms), Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetProductionProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetProductionProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetSupplied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetSupplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetSupplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetSupplied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetSupplied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetSupplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetSupplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetSupplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetWareClass_Statics
	{
		struct Machine_eventGetWareClass_Parms
		{
			TSubclassOf<AWare>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMachine_GetWareClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventGetWareClass_Parms, ReturnValue), Z_Construct_UClass_AWare_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_GetWareClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetWareClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetWareClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetWareClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetWareClass", nullptr, nullptr, sizeof(Machine_eventGetWareClass_Parms), Z_Construct_UFunction_AMachine_GetWareClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetWareClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetWareClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetWareClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetWareClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetWareClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics
	{
		struct Machine_eventGetWareCollectionWaypoint_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventGetWareCollectionWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetWareCollectionWaypoint", nullptr, nullptr, sizeof(Machine_eventGetWareCollectionWaypoint_Parms), Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics
	{
		struct Machine_eventGetWorkstationWaypoint_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventGetWorkstationWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "GetWorkstationWaypoint", nullptr, nullptr, sizeof(Machine_eventGetWorkstationWaypoint_Parms), Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_GetWorkstationWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_GetWorkstationWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_HasMaterial_Statics
	{
		struct Machine_eventHasMaterial_Parms
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
	void Z_Construct_UFunction_AMachine_HasMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Machine_eventHasMaterial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMachine_HasMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Machine_eventHasMaterial_Parms), &Z_Construct_UFunction_AMachine_HasMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_HasMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_HasMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_HasMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_HasMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "HasMaterial", nullptr, nullptr, sizeof(Machine_eventHasMaterial_Parms), Z_Construct_UFunction_AMachine_HasMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_HasMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_HasMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_HasMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_HasMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_HasMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics
	{
		struct Machine_eventHasWareOpenForCollection_Parms
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
	void Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Machine_eventHasWareOpenForCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Machine_eventHasWareOpenForCollection_Parms), &Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Collection\n" },
		{ "ModuleRelativePath", "Machine.h" },
		{ "ToolTip", "Collection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "HasWareOpenForCollection", nullptr, nullptr, sizeof(Machine_eventHasWareOpenForCollection_Parms), Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_HasWareOpenForCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_HasWareOpenForCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_IsWareToCollect_Statics
	{
		struct Machine_eventIsWareToCollect_Parms
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
	void Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Machine_eventIsWareToCollect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Machine_eventIsWareToCollect_Parms), &Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "IsWareToCollect", nullptr, nullptr, sizeof(Machine_eventIsWareToCollect_Parms), Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_IsWareToCollect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_IsWareToCollect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_NoMaterialAvailable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_NoMaterialAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Machine" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_NoMaterialAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "NoMaterialAvailable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_NoMaterialAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_NoMaterialAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_NoMaterialAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_NoMaterialAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_ProducesWare_Statics
	{
		struct Machine_eventProducesWare_Parms
		{
			EWareType WareType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WareType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WareType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMachine_ProducesWare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Machine_eventProducesWare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMachine_ProducesWare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Machine_eventProducesWare_Parms), &Z_Construct_UFunction_AMachine_ProducesWare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMachine_ProducesWare_Statics::NewProp_WareType = { "WareType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventProducesWare_Parms, WareType), Z_Construct_UEnum_Weinhofer_LFB_EWareType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMachine_ProducesWare_Statics::NewProp_WareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_ProducesWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_ProducesWare_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_ProducesWare_Statics::NewProp_WareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_ProducesWare_Statics::NewProp_WareType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_ProducesWare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_ProducesWare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "ProducesWare", nullptr, nullptr, sizeof(Machine_eventProducesWare_Parms), Z_Construct_UFunction_AMachine_ProducesWare_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_ProducesWare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_ProducesWare_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_ProducesWare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_ProducesWare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_ProducesWare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics
	{
		struct Machine_eventRegisterCollectionWorkerRobot_Parms
		{
			ARobot* NewCollectionWorkerRobot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCollectionWorkerRobot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::NewProp_NewCollectionWorkerRobot = { "NewCollectionWorkerRobot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventRegisterCollectionWorkerRobot_Parms, NewCollectionWorkerRobot), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::NewProp_NewCollectionWorkerRobot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "RegisterCollectionWorkerRobot", nullptr, nullptr, sizeof(Machine_eventRegisterCollectionWorkerRobot_Parms), Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics
	{
		struct Machine_eventRegisterNewProductionWorkerRobot_Parms
		{
			ARobot* NewProductionWorkerRobot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewProductionWorkerRobot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::NewProp_NewProductionWorkerRobot = { "NewProductionWorkerRobot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventRegisterNewProductionWorkerRobot_Parms, NewProductionWorkerRobot), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::NewProp_NewProductionWorkerRobot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Robot Interaction/Work Functions\n" },
		{ "ModuleRelativePath", "Machine.h" },
		{ "ToolTip", "Robot Interaction/Work Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "RegisterNewProductionWorkerRobot", nullptr, nullptr, sizeof(Machine_eventRegisterNewProductionWorkerRobot_Parms), Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics
	{
		struct Machine_eventRegisterNewSupplyWorkerRobot_Parms
		{
			ARobot* NewSupplyWorkerRobot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSupplyWorkerRobot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::NewProp_NewSupplyWorkerRobot = { "NewSupplyWorkerRobot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventRegisterNewSupplyWorkerRobot_Parms, NewSupplyWorkerRobot), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::NewProp_NewSupplyWorkerRobot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "RegisterNewSupplyWorkerRobot", nullptr, nullptr, sizeof(Machine_eventRegisterNewSupplyWorkerRobot_Parms), Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_SetCurrentWare_Statics
	{
		struct Machine_eventSetCurrentWare_Parms
		{
			AWare* NewWare;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWare;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::NewProp_NewWare = { "NewWare", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Machine_eventSetCurrentWare_Parms, NewWare), Z_Construct_UClass_AWare_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::NewProp_NewWare,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Accessors\n" },
		{ "ModuleRelativePath", "Machine.h" },
		{ "ToolTip", "Accessors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "SetCurrentWare", nullptr, nullptr, sizeof(Machine_eventSetCurrentWare_Parms), Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_SetCurrentWare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_SetCurrentWare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_SetProgressBar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_SetProgressBar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Machine" },
		{ "Comment", "//Progress Visualization\n" },
		{ "ModuleRelativePath", "Machine.h" },
		{ "ToolTip", "Progress Visualization" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_SetProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "SetProgressBar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_SetProgressBar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_SetProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_SetProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_SetProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_SetWareToCollect_Statics
	{
		struct Machine_eventSetWareToCollect_Parms
		{
			bool WareState;
		};
		static void NewProp_WareState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WareState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::NewProp_WareState_SetBit(void* Obj)
	{
		((Machine_eventSetWareToCollect_Parms*)Obj)->WareState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::NewProp_WareState = { "WareState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Machine_eventSetWareToCollect_Parms), &Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::NewProp_WareState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::NewProp_WareState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "SetWareToCollect", nullptr, nullptr, sizeof(Machine_eventSetWareToCollect_Parms), Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_SetWareToCollect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_SetWareToCollect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_SpawnWare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_SpawnWare_Statics::Function_MetaDataParams[] = {
		{ "Category", "Machine" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_SpawnWare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "SpawnWare", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_SpawnWare_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_SpawnWare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_SpawnWare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_SpawnWare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMachine_UseOneMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachine_UseOneMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_UseOneMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "UseOneMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachine_UseOneMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMachine_UseOneMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachine_UseOneMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMachine_UseOneMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMachine_NoRegister()
	{
		return AMachine::StaticClass();
	}
	struct Z_Construct_UClass_AMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WareClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareCollector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WareCollector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupplyWorkerRobot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SupplyWorkerRobot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWare_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NrOfStoredMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NrOfStoredMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareToCollect_MetaData[];
#endif
		static void NewProp_WareToCollect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WareToCollect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductionProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProductionProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductionWorkerRobot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProductionWorkerRobot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareCollectionWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WareCollectionWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDeliveryWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialDeliveryWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkstationWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorkstationWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProducedWareType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProducedWareType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProducedWareType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineNr_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineNr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineBodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MachineBodyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMachine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMachine_CancelCollection, "CancelCollection" }, // 81335984
		{ &Z_Construct_UFunction_AMachine_CollectWare, "CollectWare" }, // 4213068265
		{ &Z_Construct_UFunction_AMachine_GetCurrentWare, "GetCurrentWare" }, // 387792720
		{ &Z_Construct_UFunction_AMachine_GetMachineNr, "GetMachineNr" }, // 2524563406
		{ &Z_Construct_UFunction_AMachine_GetMaterialDeliveryWaypoint, "GetMaterialDeliveryWaypoint" }, // 4213129995
		{ &Z_Construct_UFunction_AMachine_GetNrOfMaterial, "GetNrOfMaterial" }, // 2639327586
		{ &Z_Construct_UFunction_AMachine_GetProducedWareType, "GetProducedWareType" }, // 2003383457
		{ &Z_Construct_UFunction_AMachine_GetProductionProgress, "GetProductionProgress" }, // 2399077540
		{ &Z_Construct_UFunction_AMachine_GetSupplied, "GetSupplied" }, // 3310315187
		{ &Z_Construct_UFunction_AMachine_GetWareClass, "GetWareClass" }, // 146760066
		{ &Z_Construct_UFunction_AMachine_GetWareCollectionWaypoint, "GetWareCollectionWaypoint" }, // 1593154701
		{ &Z_Construct_UFunction_AMachine_GetWorkstationWaypoint, "GetWorkstationWaypoint" }, // 3285649873
		{ &Z_Construct_UFunction_AMachine_HasMaterial, "HasMaterial" }, // 4211019106
		{ &Z_Construct_UFunction_AMachine_HasWareOpenForCollection, "HasWareOpenForCollection" }, // 1861798766
		{ &Z_Construct_UFunction_AMachine_IsWareToCollect, "IsWareToCollect" }, // 3882285125
		{ &Z_Construct_UFunction_AMachine_NoMaterialAvailable, "NoMaterialAvailable" }, // 4110393551
		{ &Z_Construct_UFunction_AMachine_ProducesWare, "ProducesWare" }, // 171707517
		{ &Z_Construct_UFunction_AMachine_RegisterCollectionWorkerRobot, "RegisterCollectionWorkerRobot" }, // 1095911620
		{ &Z_Construct_UFunction_AMachine_RegisterNewProductionWorkerRobot, "RegisterNewProductionWorkerRobot" }, // 4203734043
		{ &Z_Construct_UFunction_AMachine_RegisterNewSupplyWorkerRobot, "RegisterNewSupplyWorkerRobot" }, // 3675118365
		{ &Z_Construct_UFunction_AMachine_SetCurrentWare, "SetCurrentWare" }, // 1332068328
		{ &Z_Construct_UFunction_AMachine_SetProgressBar, "SetProgressBar" }, // 2096330888
		{ &Z_Construct_UFunction_AMachine_SetWareToCollect, "SetWareToCollect" }, // 2618236297
		{ &Z_Construct_UFunction_AMachine_SpawnWare, "SpawnWare" }, // 2374622437
		{ &Z_Construct_UFunction_AMachine_UseOneMaterial, "UseOneMaterial" }, // 197752268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Machine.h" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_WareClass_MetaData[] = {
		{ "Category", "Machine" },
		{ "Comment", "//Config\n" },
		{ "ModuleRelativePath", "Machine.h" },
		{ "ToolTip", "Config" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_WareClass = { "WareClass", nullptr, (EPropertyFlags)0x0044000000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, WareClass), Z_Construct_UClass_AWare_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_WareClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_WareClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_WareCollector_MetaData[] = {
		{ "Category", "Machine" },
		{ "Comment", "//Ware Collection\n" },
		{ "ModuleRelativePath", "Machine.h" },
		{ "ToolTip", "Ware Collection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_WareCollector = { "WareCollector", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, WareCollector), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_WareCollector_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_WareCollector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_SupplyWorkerRobot_MetaData[] = {
		{ "Category", "Machine" },
		{ "Comment", "//Material Supply\n" },
		{ "ModuleRelativePath", "Machine.h" },
		{ "ToolTip", "Material Supply" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_SupplyWorkerRobot = { "SupplyWorkerRobot", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, SupplyWorkerRobot), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_SupplyWorkerRobot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_SupplyWorkerRobot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_CurrentWare_MetaData[] = {
		{ "Category", "Machine" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_CurrentWare = { "CurrentWare", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, CurrentWare), Z_Construct_UClass_AWare_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_CurrentWare_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_CurrentWare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_NrOfStoredMaterial_MetaData[] = {
		{ "Category", "Machine" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_NrOfStoredMaterial = { "NrOfStoredMaterial", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, NrOfStoredMaterial), METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_NrOfStoredMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_NrOfStoredMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_WareToCollect_MetaData[] = {
		{ "Category", "Machine" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	void Z_Construct_UClass_AMachine_Statics::NewProp_WareToCollect_SetBit(void* Obj)
	{
		((AMachine*)Obj)->WareToCollect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_WareToCollect = { "WareToCollect", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMachine), &Z_Construct_UClass_AMachine_Statics::NewProp_WareToCollect_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_WareToCollect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_WareToCollect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_ProductionProgress_MetaData[] = {
		{ "Category", "Machine" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_ProductionProgress = { "ProductionProgress", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, ProductionProgress), METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_ProductionProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_ProductionProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_ProductionWorkerRobot_MetaData[] = {
		{ "Category", "Machine" },
		{ "Comment", "//RobotTasks\n//Production\n" },
		{ "ModuleRelativePath", "Machine.h" },
		{ "ToolTip", "RobotTasks\nProduction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_ProductionWorkerRobot = { "ProductionWorkerRobot", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, ProductionWorkerRobot), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_ProductionWorkerRobot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_ProductionWorkerRobot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_WareCollectionWaypoint_MetaData[] = {
		{ "Category", "Machine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_WareCollectionWaypoint = { "WareCollectionWaypoint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, WareCollectionWaypoint), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_WareCollectionWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_WareCollectionWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_MaterialDeliveryWaypoint_MetaData[] = {
		{ "Category", "Machine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_MaterialDeliveryWaypoint = { "MaterialDeliveryWaypoint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, MaterialDeliveryWaypoint), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_MaterialDeliveryWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_MaterialDeliveryWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_WorkstationWaypoint_MetaData[] = {
		{ "Category", "Machine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_WorkstationWaypoint = { "WorkstationWaypoint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, WorkstationWaypoint), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_WorkstationWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_WorkstationWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_ProducedWareType_MetaData[] = {
		{ "Category", "Machine" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_ProducedWareType = { "ProducedWareType", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, ProducedWareType), Z_Construct_UEnum_Weinhofer_LFB_EWareType, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_ProducedWareType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_ProducedWareType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_ProducedWareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_MachineNr_MetaData[] = {
		{ "Category", "Machine" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_MachineNr = { "MachineNr", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, MachineNr), METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_MachineNr_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_MachineNr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachine_Statics::NewProp_MachineBodyMesh_MetaData[] = {
		{ "Category", "Machine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_MachineBodyMesh = { "MachineBodyMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachine, MachineBodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::NewProp_MachineBodyMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::NewProp_MachineBodyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_WareClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_WareCollector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_SupplyWorkerRobot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_CurrentWare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_NrOfStoredMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_WareToCollect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_ProductionProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_ProductionWorkerRobot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_WareCollectionWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_MaterialDeliveryWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_WorkstationWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_ProducedWareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_ProducedWareType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_MachineNr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_MachineBodyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMachine_Statics::ClassParams = {
		&AMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMachine_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMachine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMachine, 1029476346);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AMachine>()
	{
		return AMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMachine(Z_Construct_UClass_AMachine, &AMachine::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
