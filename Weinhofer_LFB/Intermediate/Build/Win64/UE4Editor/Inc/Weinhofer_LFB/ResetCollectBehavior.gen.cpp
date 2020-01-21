// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/ResetCollectBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResetCollectBehavior() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UResetCollectBehavior_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UResetCollectBehavior();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UResetCollectBehavior::StaticRegisterNativesUResetCollectBehavior()
	{
	}
	UClass* Z_Construct_UClass_UResetCollectBehavior_NoRegister()
	{
		return UResetCollectBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UResetCollectBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarriedWareKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CarriedWareKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResetCollectBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetCollectBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ResetCollectBehavior.h" },
		{ "ModuleRelativePath", "ResetCollectBehavior.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_CarriedWareKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "ResetCollectBehavior.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_CarriedWareKey = { "CarriedWareKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResetCollectBehavior, CarriedWareKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_CarriedWareKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_CarriedWareKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetWaypoint_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "ResetCollectBehavior.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetWaypoint = { "TargetWaypoint", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResetCollectBehavior, TargetWaypoint), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetMachine_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "ResetCollectBehavior.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetMachine = { "TargetMachine", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResetCollectBehavior, TargetMachine), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetMachine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetMachine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResetCollectBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_CarriedWareKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResetCollectBehavior_Statics::NewProp_TargetMachine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResetCollectBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResetCollectBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResetCollectBehavior_Statics::ClassParams = {
		&UResetCollectBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UResetCollectBehavior_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UResetCollectBehavior_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResetCollectBehavior_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UResetCollectBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResetCollectBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResetCollectBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResetCollectBehavior, 2889835450);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UResetCollectBehavior>()
	{
		return UResetCollectBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResetCollectBehavior(Z_Construct_UClass_UResetCollectBehavior, &UResetCollectBehavior::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UResetCollectBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResetCollectBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
