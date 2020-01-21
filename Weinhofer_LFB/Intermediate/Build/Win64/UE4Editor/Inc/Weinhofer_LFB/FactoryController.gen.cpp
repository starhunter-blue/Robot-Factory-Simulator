// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/FactoryController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryController() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AFactoryController_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AFactoryController();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AControllerBase();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
// End Cross Module References
	void AFactoryController::StaticRegisterNativesAFactoryController()
	{
	}
	UClass* Z_Construct_UClass_AFactoryController_NoRegister()
	{
		return AFactoryController::StaticClass();
	}
	struct Z_Construct_UClass_AFactoryController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFactoryController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFactoryController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FactoryController.h" },
		{ "ModuleRelativePath", "FactoryController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFactoryController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFactoryController_Statics::ClassParams = {
		&AFactoryController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFactoryController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFactoryController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFactoryController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFactoryController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFactoryController, 1086800461);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AFactoryController>()
	{
		return AFactoryController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFactoryController(Z_Construct_UClass_AFactoryController, &AFactoryController::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AFactoryController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
