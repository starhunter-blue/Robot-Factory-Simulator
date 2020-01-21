// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/MainMenuController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuController() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMainMenuController_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMainMenuController();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AControllerBase();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
// End Cross Module References
	void AMainMenuController::StaticRegisterNativesAMainMenuController()
	{
	}
	UClass* Z_Construct_UClass_AMainMenuController_NoRegister()
	{
		return AMainMenuController::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainMenuController.h" },
		{ "ModuleRelativePath", "MainMenuController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuController_Statics::ClassParams = {
		&AMainMenuController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMainMenuController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuController, 1173746292);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AMainMenuController>()
	{
		return AMainMenuController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuController(Z_Construct_UClass_AMainMenuController, &AMainMenuController::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AMainMenuController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
