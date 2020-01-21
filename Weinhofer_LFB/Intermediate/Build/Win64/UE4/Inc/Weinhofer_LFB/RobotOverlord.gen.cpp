// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/RobotOverlord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotOverlord() {}
// Cross Module References
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_EBehaviorType();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UScriptStruct* Z_Construct_UScriptStruct_FRobotAndAgenda();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobotOverlord_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobotOverlord();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotOverlord_CheckIfRobotRequestsAreFulfilled();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotOverlord_GiveNextOrder();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToBlocking();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToEmotion();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotOverlord_Start();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UStoryboard_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobot_NoRegister();
// End Cross Module References
	static UEnum* EBehaviorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Weinhofer_LFB_EBehaviorType, Z_Construct_UPackage__Script_Weinhofer_LFB(), TEXT("EBehaviorType"));
		}
		return Singleton;
	}
	template<> WEINHOFER_LFB_API UEnum* StaticEnum<EBehaviorType>()
	{
		return EBehaviorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBehaviorType(EBehaviorType_StaticEnum, TEXT("/Script/Weinhofer_LFB"), TEXT("EBehaviorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Weinhofer_LFB_EBehaviorType_Hash() { return 2653497785U; }
	UEnum* Z_Construct_UEnum_Weinhofer_LFB_EBehaviorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Weinhofer_LFB();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBehaviorType"), 0, Get_Z_Construct_UEnum_Weinhofer_LFB_EBehaviorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBehaviorType::BTE_Unset", (int64)EBehaviorType::BTE_Unset },
				{ "EBehaviorType::BTE_Emotion", (int64)EBehaviorType::BTE_Emotion },
				{ "EBehaviorType::BTE_Blocking", (int64)EBehaviorType::BTE_Blocking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BTE_Blocking.DisplayName", "Blocking" },
				{ "BTE_Blocking.Name", "EBehaviorType::BTE_Blocking" },
				{ "BTE_Emotion.DisplayName", "Emotion" },
				{ "BTE_Emotion.Name", "EBehaviorType::BTE_Emotion" },
				{ "BTE_Unset.DisplayName", "Unset" },
				{ "BTE_Unset.Name", "EBehaviorType::BTE_Unset" },
				{ "Comment", "/*\n* Determines autonomous behavior set by the Overlord\n*/" },
				{ "ModuleRelativePath", "RobotOverlord.h" },
				{ "ToolTip", "* Determines autonomous behavior set by the Overlord" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
				nullptr,
				"EBehaviorType",
				"EBehaviorType",
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
class UScriptStruct* FRobotAndAgenda::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEINHOFER_LFB_API uint32 Get_Z_Construct_UScriptStruct_FRobotAndAgenda_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRobotAndAgenda, Z_Construct_UPackage__Script_Weinhofer_LFB(), TEXT("RobotAndAgenda"), sizeof(FRobotAndAgenda), Get_Z_Construct_UScriptStruct_FRobotAndAgenda_Hash());
	}
	return Singleton;
}
template<> WEINHOFER_LFB_API UScriptStruct* StaticStruct<FRobotAndAgenda>()
{
	return FRobotAndAgenda::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRobotAndAgenda(FRobotAndAgenda::StaticStruct, TEXT("/Script/Weinhofer_LFB"), TEXT("RobotAndAgenda"), false, nullptr, nullptr);
static struct FScriptStruct_Weinhofer_LFB_StaticRegisterNativesFRobotAndAgenda
{
	FScriptStruct_Weinhofer_LFB_StaticRegisterNativesFRobotAndAgenda()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RobotAndAgenda")),new UScriptStruct::TCppStructOps<FRobotAndAgenda>);
	}
} ScriptStruct_Weinhofer_LFB_StaticRegisterNativesFRobotAndAgenda;
	struct Z_Construct_UScriptStruct_FRobotAndAgenda_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRobotAndAgenda_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRobotAndAgenda_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRobotAndAgenda>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRobotAndAgenda_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
		nullptr,
		&NewStructOps,
		"RobotAndAgenda",
		sizeof(FRobotAndAgenda),
		alignof(FRobotAndAgenda),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRobotAndAgenda_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRobotAndAgenda_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRobotAndAgenda()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRobotAndAgenda_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Weinhofer_LFB();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RobotAndAgenda"), sizeof(FRobotAndAgenda), Get_Z_Construct_UScriptStruct_FRobotAndAgenda_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRobotAndAgenda_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRobotAndAgenda_Hash() { return 1933442291U; }
	static FName NAME_ARobotOverlord_Start = FName(TEXT("Start"));
	void ARobotOverlord::Start()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobotOverlord_Start),NULL);
	}
	void ARobotOverlord::StaticRegisterNativesARobotOverlord()
	{
		UClass* Class = ARobotOverlord::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIfRobotRequestsAreFulfilled", &ARobotOverlord::execCheckIfRobotRequestsAreFulfilled },
			{ "GetIntervallVariation", &ARobotOverlord::execGetIntervallVariation },
			{ "GetTimeIntervall", &ARobotOverlord::execGetTimeIntervall },
			{ "GiveNextOrder", &ARobotOverlord::execGiveNextOrder },
			{ "SetBehaviorTypeToBlocking", &ARobotOverlord::execSetBehaviorTypeToBlocking },
			{ "SetBehaviorTypeToEmotion", &ARobotOverlord::execSetBehaviorTypeToEmotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARobotOverlord_CheckIfRobotRequestsAreFulfilled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotOverlord_CheckIfRobotRequestsAreFulfilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotOverlord_CheckIfRobotRequestsAreFulfilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotOverlord, nullptr, "CheckIfRobotRequestsAreFulfilled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotOverlord_CheckIfRobotRequestsAreFulfilled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotOverlord_CheckIfRobotRequestsAreFulfilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotOverlord_CheckIfRobotRequestsAreFulfilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotOverlord_CheckIfRobotRequestsAreFulfilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics
	{
		struct RobotOverlord_eventGetIntervallVariation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotOverlord_eventGetIntervallVariation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotOverlord, nullptr, "GetIntervallVariation", nullptr, nullptr, sizeof(RobotOverlord_eventGetIntervallVariation_Parms), Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics
	{
		struct RobotOverlord_eventGetTimeIntervall_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotOverlord_eventGetTimeIntervall_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotOverlord, nullptr, "GetTimeIntervall", nullptr, nullptr, sizeof(RobotOverlord_eventGetTimeIntervall_Parms), Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotOverlord_GiveNextOrder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotOverlord_GiveNextOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotOverlord_GiveNextOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotOverlord, nullptr, "GiveNextOrder", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotOverlord_GiveNextOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotOverlord_GiveNextOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotOverlord_GiveNextOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotOverlord_GiveNextOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToBlocking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToBlocking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotOverlord.h" },
		{ "ShortToolTip", "Will only work of BehaviorType is unset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotOverlord, nullptr, "SetBehaviorTypeToBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToBlocking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToEmotion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToEmotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotOverlord.h" },
		{ "ShortToolTip", "Will only work of BehaviorType is unset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToEmotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotOverlord, nullptr, "SetBehaviorTypeToEmotion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToEmotion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToEmotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToEmotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToEmotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotOverlord_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotOverlord_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotOverlord_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotOverlord, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotOverlord_Start_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotOverlord_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotOverlord_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotOverlord_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARobotOverlord_NoRegister()
	{
		return ARobotOverlord::StaticClass();
	}
	struct Z_Construct_UClass_ARobotOverlord_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Storyboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Storyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntervallVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntervallVariation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeIntervall_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeIntervall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Robots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Robots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Robots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobotOverlord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARobotOverlord_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARobotOverlord_CheckIfRobotRequestsAreFulfilled, "CheckIfRobotRequestsAreFulfilled" }, // 2259613511
		{ &Z_Construct_UFunction_ARobotOverlord_GetIntervallVariation, "GetIntervallVariation" }, // 1105629981
		{ &Z_Construct_UFunction_ARobotOverlord_GetTimeIntervall, "GetTimeIntervall" }, // 1362381803
		{ &Z_Construct_UFunction_ARobotOverlord_GiveNextOrder, "GiveNextOrder" }, // 1878425958
		{ &Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToBlocking, "SetBehaviorTypeToBlocking" }, // 4219658405
		{ &Z_Construct_UFunction_ARobotOverlord_SetBehaviorTypeToEmotion, "SetBehaviorTypeToEmotion" }, // 2524627229
		{ &Z_Construct_UFunction_ARobotOverlord_Start, "Start" }, // 672183246
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotOverlord_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RobotOverlord.h" },
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Storyboard_MetaData[] = {
		{ "Category", "RobotOverlord" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Storyboard = { "Storyboard", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotOverlord, Storyboard), Z_Construct_UClass_UStoryboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Storyboard_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Storyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotOverlord_Statics::NewProp_IntervallVariation_MetaData[] = {
		{ "Category", "RobotOverlord" },
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARobotOverlord_Statics::NewProp_IntervallVariation = { "IntervallVariation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotOverlord, IntervallVariation), METADATA_PARAMS(Z_Construct_UClass_ARobotOverlord_Statics::NewProp_IntervallVariation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotOverlord_Statics::NewProp_IntervallVariation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotOverlord_Statics::NewProp_TimeIntervall_MetaData[] = {
		{ "Category", "RobotOverlord" },
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARobotOverlord_Statics::NewProp_TimeIntervall = { "TimeIntervall", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotOverlord, TimeIntervall), METADATA_PARAMS(Z_Construct_UClass_ARobotOverlord_Statics::NewProp_TimeIntervall_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotOverlord_Statics::NewProp_TimeIntervall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Robots_MetaData[] = {
		{ "Category", "RobotOverlord" },
		{ "ModuleRelativePath", "RobotOverlord.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Robots = { "Robots", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotOverlord, Robots), METADATA_PARAMS(Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Robots_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Robots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Robots_Inner = { "Robots", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobotOverlord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Storyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotOverlord_Statics::NewProp_IntervallVariation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotOverlord_Statics::NewProp_TimeIntervall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Robots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotOverlord_Statics::NewProp_Robots_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobotOverlord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotOverlord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARobotOverlord_Statics::ClassParams = {
		&ARobotOverlord::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARobotOverlord_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ARobotOverlord_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARobotOverlord_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARobotOverlord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARobotOverlord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARobotOverlord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARobotOverlord, 2712130590);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ARobotOverlord>()
	{
		return ARobotOverlord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobotOverlord(Z_Construct_UClass_ARobotOverlord, &ARobotOverlord::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ARobotOverlord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotOverlord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
