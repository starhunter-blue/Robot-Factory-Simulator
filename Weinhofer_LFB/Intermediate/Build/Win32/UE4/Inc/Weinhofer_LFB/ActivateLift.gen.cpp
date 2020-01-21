// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/ActivateLift.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateLift() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UActivateLift_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UActivateLift();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UActivateLift::StaticRegisterNativesUActivateLift()
	{
	}
	UClass* Z_Construct_UClass_UActivateLift_NoRegister()
	{
		return UActivateLift::StaticClass();
	}
	struct Z_Construct_UClass_UActivateLift_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RobotKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RobotKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivateLift_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateLift_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActivateLift.h" },
		{ "ModuleRelativePath", "ActivateLift.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateLift_Statics::NewProp_RobotKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "ActivateLift.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivateLift_Statics::NewProp_RobotKey = { "RobotKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivateLift, RobotKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UActivateLift_Statics::NewProp_RobotKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActivateLift_Statics::NewProp_RobotKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivateLift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivateLift_Statics::NewProp_RobotKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivateLift_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivateLift>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivateLift_Statics::ClassParams = {
		&UActivateLift::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActivateLift_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UActivateLift_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActivateLift_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActivateLift_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivateLift()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivateLift_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivateLift, 1394622545);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UActivateLift>()
	{
		return UActivateLift::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivateLift(Z_Construct_UClass_UActivateLift, &UActivateLift::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UActivateLift"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivateLift);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
