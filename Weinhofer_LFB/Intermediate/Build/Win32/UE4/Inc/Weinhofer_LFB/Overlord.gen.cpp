// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Overlord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlord() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UOverlord_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UOverlord();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UOverlord_GetIntervallVariation();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UOverlord_GetTimeIntervall();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UOverlord_Start();
// End Cross Module References
	static FName NAME_UOverlord_Start = FName(TEXT("Start"));
	void UOverlord::Start()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOverlord_Start),NULL);
	}
	void UOverlord::StaticRegisterNativesUOverlord()
	{
		UClass* Class = UOverlord::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIntervallVariation", &UOverlord::execGetIntervallVariation },
			{ "GetTimeIntervall", &UOverlord::execGetTimeIntervall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics
	{
		struct Overlord_eventGetIntervallVariation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Overlord_eventGetIntervallVariation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Overlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlord, nullptr, "GetIntervallVariation", nullptr, nullptr, sizeof(Overlord_eventGetIntervallVariation_Parms), Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlord_GetIntervallVariation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlord_GetIntervallVariation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics
	{
		struct Overlord_eventGetTimeIntervall_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Overlord_eventGetTimeIntervall_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Overlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlord, nullptr, "GetTimeIntervall", nullptr, nullptr, sizeof(Overlord_eventGetTimeIntervall_Parms), Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlord_GetTimeIntervall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlord_GetTimeIntervall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlord_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlord_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Overlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlord_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlord, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlord_Start_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOverlord_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlord_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlord_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOverlord_NoRegister()
	{
		return UOverlord::StaticClass();
	}
	struct Z_Construct_UClass_UOverlord_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntervallVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntervallVariation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeIntervall_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeIntervall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOverlord_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverlord_GetIntervallVariation, "GetIntervallVariation" }, // 3999450280
		{ &Z_Construct_UFunction_UOverlord_GetTimeIntervall, "GetTimeIntervall" }, // 1008726847
		{ &Z_Construct_UFunction_UOverlord_Start, "Start" }, // 264202280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlord_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Overlord.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Overlord.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlord_Statics::NewProp_IntervallVariation_MetaData[] = {
		{ "Category", "Overlord" },
		{ "ModuleRelativePath", "Overlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOverlord_Statics::NewProp_IntervallVariation = { "IntervallVariation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOverlord, IntervallVariation), METADATA_PARAMS(Z_Construct_UClass_UOverlord_Statics::NewProp_IntervallVariation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOverlord_Statics::NewProp_IntervallVariation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlord_Statics::NewProp_TimeIntervall_MetaData[] = {
		{ "Category", "Overlord" },
		{ "ModuleRelativePath", "Overlord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOverlord_Statics::NewProp_TimeIntervall = { "TimeIntervall", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOverlord, TimeIntervall), METADATA_PARAMS(Z_Construct_UClass_UOverlord_Statics::NewProp_TimeIntervall_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOverlord_Statics::NewProp_TimeIntervall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlord_Statics::NewProp_IntervallVariation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlord_Statics::NewProp_TimeIntervall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOverlord_Statics::ClassParams = {
		&UOverlord::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOverlord_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOverlord_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOverlord_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOverlord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverlord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOverlord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOverlord, 1400996258);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UOverlord>()
	{
		return UOverlord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOverlord(Z_Construct_UClass_UOverlord, &UOverlord::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UOverlord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
