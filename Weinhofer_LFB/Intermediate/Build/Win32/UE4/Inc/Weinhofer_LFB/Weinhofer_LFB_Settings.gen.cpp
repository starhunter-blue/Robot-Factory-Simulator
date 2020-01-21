// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Weinhofer_LFB_Settings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeinhofer_LFB_Settings() {}
// Cross Module References
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_EInfluenceStrategy();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UWeinhofer_LFB_Settings_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UWeinhofer_LFB_Settings();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit();
// End Cross Module References
	static UEnum* EInfluenceStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Weinhofer_LFB_EInfluenceStrategy, Z_Construct_UPackage__Script_Weinhofer_LFB(), TEXT("EInfluenceStrategy"));
		}
		return Singleton;
	}
	template<> WEINHOFER_LFB_API UEnum* StaticEnum<EInfluenceStrategy>()
	{
		return EInfluenceStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInfluenceStrategy(EInfluenceStrategy_StaticEnum, TEXT("/Script/Weinhofer_LFB"), TEXT("EInfluenceStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Weinhofer_LFB_EInfluenceStrategy_Hash() { return 2098937227U; }
	UEnum* Z_Construct_UEnum_Weinhofer_LFB_EInfluenceStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Weinhofer_LFB();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInfluenceStrategy"), 0, Get_Z_Construct_UEnum_Weinhofer_LFB_EInfluenceStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInfluenceStrategy::Emotion", (int64)EInfluenceStrategy::Emotion },
				{ "EInfluenceStrategy::Obstruction", (int64)EInfluenceStrategy::Obstruction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Emotion.Name", "EInfluenceStrategy::Emotion" },
				{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
				{ "Obstruction.Name", "EInfluenceStrategy::Obstruction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
				nullptr,
				"EInfluenceStrategy",
				"EInfluenceStrategy",
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
	void UWeinhofer_LFB_Settings::StaticRegisterNativesUWeinhofer_LFB_Settings()
	{
		UClass* Class = UWeinhofer_LFB_Settings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInfluenceStrategy", &UWeinhofer_LFB_Settings::execGetInfluenceStrategy },
			{ "GetNrOfRequiredHexagons", &UWeinhofer_LFB_Settings::execGetNrOfRequiredHexagons },
			{ "GetNrOfRequiredSquares", &UWeinhofer_LFB_Settings::execGetNrOfRequiredSquares },
			{ "GetNrOfRequiredTriangles", &UWeinhofer_LFB_Settings::execGetNrOfRequiredTriangles },
			{ "GetTimeLimit", &UWeinhofer_LFB_Settings::execGetTimeLimit },
			{ "GetWeinhofer_LFB_Settings", &UWeinhofer_LFB_Settings::execGetWeinhofer_LFB_Settings },
			{ "SetInfluenceStrategy", &UWeinhofer_LFB_Settings::execSetInfluenceStrategy },
			{ "SetNrOfRequiredHexagons", &UWeinhofer_LFB_Settings::execSetNrOfRequiredHexagons },
			{ "SetNrOfRequiredSquares", &UWeinhofer_LFB_Settings::execSetNrOfRequiredSquares },
			{ "SetNrOfRequiredTriangles", &UWeinhofer_LFB_Settings::execSetNrOfRequiredTriangles },
			{ "SetTimeLimit", &UWeinhofer_LFB_Settings::execSetTimeLimit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics
	{
		struct Weinhofer_LFB_Settings_eventGetInfluenceStrategy_Parms
		{
			EInfluenceStrategy ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventGetInfluenceStrategy_Parms, ReturnValue), Z_Construct_UEnum_Weinhofer_LFB_EInfluenceStrategy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "GetInfluenceStrategy", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventGetInfluenceStrategy_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics
	{
		struct Weinhofer_LFB_Settings_eventGetNrOfRequiredHexagons_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventGetNrOfRequiredHexagons_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "GetNrOfRequiredHexagons", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventGetNrOfRequiredHexagons_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics
	{
		struct Weinhofer_LFB_Settings_eventGetNrOfRequiredSquares_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventGetNrOfRequiredSquares_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "GetNrOfRequiredSquares", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventGetNrOfRequiredSquares_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics
	{
		struct Weinhofer_LFB_Settings_eventGetNrOfRequiredTriangles_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventGetNrOfRequiredTriangles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "GetNrOfRequiredTriangles", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventGetNrOfRequiredTriangles_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics
	{
		struct Weinhofer_LFB_Settings_eventGetTimeLimit_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventGetTimeLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "GetTimeLimit", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventGetTimeLimit_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics
	{
		struct Weinhofer_LFB_Settings_eventGetWeinhofer_LFB_Settings_Parms
		{
			UWeinhofer_LFB_Settings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventGetWeinhofer_LFB_Settings_Parms, ReturnValue), Z_Construct_UClass_UWeinhofer_LFB_Settings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "GetWeinhofer_LFB_Settings", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventGetWeinhofer_LFB_Settings_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics
	{
		struct Weinhofer_LFB_Settings_eventSetInfluenceStrategy_Parms
		{
			EInfluenceStrategy NewStrategy;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewStrategy_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::NewProp_NewStrategy = { "NewStrategy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventSetInfluenceStrategy_Parms, NewStrategy), Z_Construct_UEnum_Weinhofer_LFB_EInfluenceStrategy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::NewProp_NewStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::NewProp_NewStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::NewProp_NewStrategy_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "SetInfluenceStrategy", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventSetInfluenceStrategy_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics
	{
		struct Weinhofer_LFB_Settings_eventSetNrOfRequiredHexagons_Parms
		{
			int32 NewNr;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::NewProp_NewNr = { "NewNr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventSetNrOfRequiredHexagons_Parms, NewNr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::NewProp_NewNr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "SetNrOfRequiredHexagons", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventSetNrOfRequiredHexagons_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics
	{
		struct Weinhofer_LFB_Settings_eventSetNrOfRequiredSquares_Parms
		{
			int32 NewNr;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::NewProp_NewNr = { "NewNr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventSetNrOfRequiredSquares_Parms, NewNr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::NewProp_NewNr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "SetNrOfRequiredSquares", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventSetNrOfRequiredSquares_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics
	{
		struct Weinhofer_LFB_Settings_eventSetNrOfRequiredTriangles_Parms
		{
			int32 NewNr;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::NewProp_NewNr = { "NewNr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventSetNrOfRequiredTriangles_Parms, NewNr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::NewProp_NewNr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "SetNrOfRequiredTriangles", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventSetNrOfRequiredTriangles_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics
	{
		struct Weinhofer_LFB_Settings_eventSetTimeLimit_Parms
		{
			int32 NewTimeLimit;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewTimeLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::NewProp_NewTimeLimit = { "NewTimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weinhofer_LFB_Settings_eventSetTimeLimit_Parms, NewTimeLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::NewProp_NewTimeLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeinhofer_LFB_Settings, nullptr, "SetTimeLimit", nullptr, nullptr, sizeof(Weinhofer_LFB_Settings_eventSetTimeLimit_Parms), Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeinhofer_LFB_Settings_NoRegister()
	{
		return UWeinhofer_LFB_Settings::StaticClass();
	}
	struct Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfluenceStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InfluenceStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InfluenceStrategy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NrOfRequiredHexagons_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NrOfRequiredHexagons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NrOfRequiredSquares_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NrOfRequiredSquares;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NrOfRequiredTriangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NrOfRequiredTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetInfluenceStrategy, "GetInfluenceStrategy" }, // 2778278473
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredHexagons, "GetNrOfRequiredHexagons" }, // 3184941851
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredSquares, "GetNrOfRequiredSquares" }, // 3054356159
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetNrOfRequiredTriangles, "GetNrOfRequiredTriangles" }, // 1378641428
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetTimeLimit, "GetTimeLimit" }, // 287702409
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_GetWeinhofer_LFB_Settings, "GetWeinhofer_LFB_Settings" }, // 1219532315
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetInfluenceStrategy, "SetInfluenceStrategy" }, // 3438981148
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredHexagons, "SetNrOfRequiredHexagons" }, // 248883025
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredSquares, "SetNrOfRequiredSquares" }, // 508769754
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetNrOfRequiredTriangles, "SetNrOfRequiredTriangles" }, // 2327962256
		{ &Z_Construct_UFunction_UWeinhofer_LFB_Settings_SetTimeLimit, "SetTimeLimit" }, // 132393521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weinhofer_LFB_Settings.h" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_InfluenceStrategy_MetaData[] = {
		{ "Comment", "//Influence Strategy currently used by the robots\n" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
		{ "ToolTip", "Influence Strategy currently used by the robots" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_InfluenceStrategy = { "InfluenceStrategy", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeinhofer_LFB_Settings, InfluenceStrategy), Z_Construct_UEnum_Weinhofer_LFB_EInfluenceStrategy, METADATA_PARAMS(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_InfluenceStrategy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_InfluenceStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_InfluenceStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredHexagons_MetaData[] = {
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredHexagons = { "NrOfRequiredHexagons", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeinhofer_LFB_Settings, NrOfRequiredHexagons), METADATA_PARAMS(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredHexagons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredHexagons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredSquares_MetaData[] = {
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredSquares = { "NrOfRequiredSquares", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeinhofer_LFB_Settings, NrOfRequiredSquares), METADATA_PARAMS(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredSquares_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredSquares_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredTriangles_MetaData[] = {
		{ "Comment", "//Triangles, Squares, Hexagons player is required to produce for \"successful\" round\n" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
		{ "ToolTip", "Triangles, Squares, Hexagons player is required to produce for \"successful\" round" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredTriangles = { "NrOfRequiredTriangles", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeinhofer_LFB_Settings, NrOfRequiredTriangles), METADATA_PARAMS(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredTriangles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_TimeLimit_MetaData[] = {
		{ "Comment", "//Time one round will take\n" },
		{ "ModuleRelativePath", "Weinhofer_LFB_Settings.h" },
		{ "ToolTip", "Time one round will take" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeinhofer_LFB_Settings, TimeLimit), METADATA_PARAMS(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_TimeLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_TimeLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_InfluenceStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_InfluenceStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredHexagons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredSquares,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_NrOfRequiredTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::NewProp_TimeLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeinhofer_LFB_Settings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::ClassParams = {
		&UWeinhofer_LFB_Settings::StaticClass,
		"GameUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::PropPointers),
		0,
		0x409000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeinhofer_LFB_Settings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeinhofer_LFB_Settings, 4238031265);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UWeinhofer_LFB_Settings>()
	{
		return UWeinhofer_LFB_Settings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeinhofer_LFB_Settings(Z_Construct_UClass_UWeinhofer_LFB_Settings, &UWeinhofer_LFB_Settings::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UWeinhofer_LFB_Settings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeinhofer_LFB_Settings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
