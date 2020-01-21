// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/RobotAgenda.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotAgenda() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_URobotAgenda_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_URobotAgenda();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine();
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_EWareType();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_URobotAgenda_GetDesiredState();
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_ERobotState();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_URobotAgenda_GetRequest();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_URobotAgenda_GetThought();
// End Cross Module References
	void URobotAgenda::StaticRegisterNativesURobotAgenda()
	{
		UClass* Class = URobotAgenda::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDesiredKindOfMachine", &URobotAgenda::execGetDesiredKindOfMachine },
			{ "GetDesiredState", &URobotAgenda::execGetDesiredState },
			{ "GetRequest", &URobotAgenda::execGetRequest },
			{ "GetThought", &URobotAgenda::execGetThought },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics
	{
		struct RobotAgenda_eventGetDesiredKindOfMachine_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAgenda_eventGetDesiredKindOfMachine_Parms, ReturnValue), Z_Construct_UEnum_Weinhofer_LFB_EWareType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAgenda.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URobotAgenda, nullptr, "GetDesiredKindOfMachine", nullptr, nullptr, sizeof(RobotAgenda_eventGetDesiredKindOfMachine_Parms), Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics
	{
		struct RobotAgenda_eventGetDesiredState_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAgenda_eventGetDesiredState_Parms, ReturnValue), Z_Construct_UEnum_Weinhofer_LFB_ERobotState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAgenda.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URobotAgenda, nullptr, "GetDesiredState", nullptr, nullptr, sizeof(RobotAgenda_eventGetDesiredState_Parms), Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URobotAgenda_GetDesiredState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URobotAgenda_GetDesiredState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URobotAgenda_GetRequest_Statics
	{
		struct RobotAgenda_eventGetRequest_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAgenda_eventGetRequest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAgenda.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URobotAgenda, nullptr, "GetRequest", nullptr, nullptr, sizeof(RobotAgenda_eventGetRequest_Parms), Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URobotAgenda_GetRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URobotAgenda_GetRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URobotAgenda_GetThought_Statics
	{
		struct RobotAgenda_eventGetThought_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URobotAgenda_GetThought_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RobotAgenda_eventGetThought_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URobotAgenda_GetThought_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URobotAgenda_GetThought_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URobotAgenda_GetThought_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotAgenda.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URobotAgenda_GetThought_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URobotAgenda, nullptr, "GetThought", nullptr, nullptr, sizeof(RobotAgenda_eventGetThought_Parms), Z_Construct_UFunction_URobotAgenda_GetThought_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URobotAgenda_GetThought_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URobotAgenda_GetThought_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URobotAgenda_GetThought_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URobotAgenda_GetThought()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URobotAgenda_GetThought_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URobotAgenda_NoRegister()
	{
		return URobotAgenda::StaticClass();
	}
	struct Z_Construct_UClass_URobotAgenda_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URobotAgenda_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URobotAgenda_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URobotAgenda_GetDesiredKindOfMachine, "GetDesiredKindOfMachine" }, // 1624571639
		{ &Z_Construct_UFunction_URobotAgenda_GetDesiredState, "GetDesiredState" }, // 3356536617
		{ &Z_Construct_UFunction_URobotAgenda_GetRequest, "GetRequest" }, // 761290943
		{ &Z_Construct_UFunction_URobotAgenda_GetThought, "GetThought" }, // 2065865699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URobotAgenda_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RobotAgenda.h" },
		{ "ModuleRelativePath", "RobotAgenda.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URobotAgenda_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URobotAgenda>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URobotAgenda_Statics::ClassParams = {
		&URobotAgenda::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URobotAgenda_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URobotAgenda_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URobotAgenda()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URobotAgenda_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URobotAgenda, 3010604195);
	template<> WEINHOFER_LFB_API UClass* StaticClass<URobotAgenda>()
	{
		return URobotAgenda::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URobotAgenda(Z_Construct_UClass_URobotAgenda, &URobotAgenda::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("URobotAgenda"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URobotAgenda);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
