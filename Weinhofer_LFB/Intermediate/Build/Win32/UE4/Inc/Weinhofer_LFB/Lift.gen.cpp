// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Lift.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLift() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ALift_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ALift();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_Activate();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_Deactivate();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_DeregisterWithLift();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_DismissOccupant();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_Fold();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_GetLiftWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_HasOccupant();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_IsFolded();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_RegisterWithLift();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobot_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_SetIsFolded();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_SetIsUnfolded();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ALift_Unfold();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ALift_Fold = FName(TEXT("Fold"));
	void ALift::Fold()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALift_Fold),NULL);
	}
	static FName NAME_ALift_Unfold = FName(TEXT("Unfold"));
	void ALift::Unfold()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALift_Unfold),NULL);
	}
	void ALift::StaticRegisterNativesALift()
	{
		UClass* Class = ALift::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &ALift::execActivate },
			{ "Deactivate", &ALift::execDeactivate },
			{ "DeregisterWithLift", &ALift::execDeregisterWithLift },
			{ "DismissOccupant", &ALift::execDismissOccupant },
			{ "GetLiftWaypoint", &ALift::execGetLiftWaypoint },
			{ "HasOccupant", &ALift::execHasOccupant },
			{ "IsFolded", &ALift::execIsFolded },
			{ "RegisterWithLift", &ALift::execRegisterWithLift },
			{ "SetIsFolded", &ALift::execSetIsFolded },
			{ "SetIsUnfolded", &ALift::execSetIsUnfolded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALift_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_Activate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_Deactivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_Deactivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "Deactivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_Deactivate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_Deactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_Deactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_DeregisterWithLift_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_DeregisterWithLift_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_DeregisterWithLift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "DeregisterWithLift", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_DeregisterWithLift_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_DeregisterWithLift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_DeregisterWithLift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_DeregisterWithLift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_DismissOccupant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_DismissOccupant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_DismissOccupant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "DismissOccupant", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_DismissOccupant_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_DismissOccupant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_DismissOccupant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_DismissOccupant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_Fold_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_Fold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_Fold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "Fold", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_Fold_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_Fold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_Fold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_Fold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics
	{
		struct Lift_eventGetLiftWaypoint_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Lift_eventGetLiftWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "GetLiftWaypoint", nullptr, nullptr, sizeof(Lift_eventGetLiftWaypoint_Parms), Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_GetLiftWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_GetLiftWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_HasOccupant_Statics
	{
		struct Lift_eventHasOccupant_Parms
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
	void Z_Construct_UFunction_ALift_HasOccupant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Lift_eventHasOccupant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALift_HasOccupant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Lift_eventHasOccupant_Parms), &Z_Construct_UFunction_ALift_HasOccupant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALift_HasOccupant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALift_HasOccupant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_HasOccupant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_HasOccupant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "HasOccupant", nullptr, nullptr, sizeof(Lift_eventHasOccupant_Parms), Z_Construct_UFunction_ALift_HasOccupant_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALift_HasOccupant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_HasOccupant_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_HasOccupant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_HasOccupant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_HasOccupant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_IsFolded_Statics
	{
		struct Lift_eventIsFolded_Parms
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
	void Z_Construct_UFunction_ALift_IsFolded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Lift_eventIsFolded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALift_IsFolded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Lift_eventIsFolded_Parms), &Z_Construct_UFunction_ALift_IsFolded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALift_IsFolded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALift_IsFolded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_IsFolded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_IsFolded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "IsFolded", nullptr, nullptr, sizeof(Lift_eventIsFolded_Parms), Z_Construct_UFunction_ALift_IsFolded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALift_IsFolded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_IsFolded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_IsFolded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_IsFolded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_IsFolded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_RegisterWithLift_Statics
	{
		struct Lift_eventRegisterWithLift_Parms
		{
			ARobot* NewRobot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewRobot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALift_RegisterWithLift_Statics::NewProp_NewRobot = { "NewRobot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Lift_eventRegisterWithLift_Parms, NewRobot), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALift_RegisterWithLift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALift_RegisterWithLift_Statics::NewProp_NewRobot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_RegisterWithLift_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_RegisterWithLift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "RegisterWithLift", nullptr, nullptr, sizeof(Lift_eventRegisterWithLift_Parms), Z_Construct_UFunction_ALift_RegisterWithLift_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALift_RegisterWithLift_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_RegisterWithLift_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_RegisterWithLift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_RegisterWithLift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_RegisterWithLift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_SetIsFolded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_SetIsFolded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_SetIsFolded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "SetIsFolded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_SetIsFolded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_SetIsFolded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_SetIsFolded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_SetIsFolded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_SetIsUnfolded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_SetIsUnfolded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_SetIsUnfolded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "SetIsUnfolded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_SetIsUnfolded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_SetIsUnfolded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_SetIsUnfolded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_SetIsUnfolded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALift_Unfold_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALift_Unfold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALift_Unfold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALift, nullptr, "Unfold", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALift_Unfold_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALift_Unfold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALift_Unfold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALift_Unfold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALift_NoRegister()
	{
		return ALift::StaticClass();
	}
	struct Z_Construct_UClass_ALift_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Robot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Robot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiftWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LiftWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiftMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LiftMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALift_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALift_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALift_Activate, "Activate" }, // 2097226050
		{ &Z_Construct_UFunction_ALift_Deactivate, "Deactivate" }, // 524719755
		{ &Z_Construct_UFunction_ALift_DeregisterWithLift, "DeregisterWithLift" }, // 1592197947
		{ &Z_Construct_UFunction_ALift_DismissOccupant, "DismissOccupant" }, // 2723145496
		{ &Z_Construct_UFunction_ALift_Fold, "Fold" }, // 2481169042
		{ &Z_Construct_UFunction_ALift_GetLiftWaypoint, "GetLiftWaypoint" }, // 572054890
		{ &Z_Construct_UFunction_ALift_HasOccupant, "HasOccupant" }, // 3525236292
		{ &Z_Construct_UFunction_ALift_IsFolded, "IsFolded" }, // 2913587129
		{ &Z_Construct_UFunction_ALift_RegisterWithLift, "RegisterWithLift" }, // 2994789543
		{ &Z_Construct_UFunction_ALift_SetIsFolded, "SetIsFolded" }, // 1109358997
		{ &Z_Construct_UFunction_ALift_SetIsUnfolded, "SetIsUnfolded" }, // 16502318
		{ &Z_Construct_UFunction_ALift_Unfold, "Unfold" }, // 420949489
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALift_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lift.h" },
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALift_Statics::NewProp_Robot_MetaData[] = {
		{ "Category", "Lift" },
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALift_Statics::NewProp_Robot = { "Robot", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALift, Robot), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALift_Statics::NewProp_Robot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALift_Statics::NewProp_Robot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALift_Statics::NewProp_LiftWaypoint_MetaData[] = {
		{ "Category", "Lift" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALift_Statics::NewProp_LiftWaypoint = { "LiftWaypoint", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALift, LiftWaypoint), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALift_Statics::NewProp_LiftWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALift_Statics::NewProp_LiftWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALift_Statics::NewProp_LiftMesh_MetaData[] = {
		{ "Category", "Lift" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lift.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALift_Statics::NewProp_LiftMesh = { "LiftMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALift, LiftMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALift_Statics::NewProp_LiftMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALift_Statics::NewProp_LiftMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALift_Statics::NewProp_Robot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALift_Statics::NewProp_LiftWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALift_Statics::NewProp_LiftMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALift_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALift>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALift_Statics::ClassParams = {
		&ALift::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALift_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ALift_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALift_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALift_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALift()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALift_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALift, 2171826560);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ALift>()
	{
		return ALift::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALift(Z_Construct_UClass_ALift, &ALift::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ALift"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALift);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
