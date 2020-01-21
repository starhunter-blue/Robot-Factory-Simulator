// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/RobotDoorButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotDoorButton() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobotDoorButton_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobotDoorButton();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
// End Cross Module References
	void ARobotDoorButton::StaticRegisterNativesARobotDoorButton()
	{
	}
	UClass* Z_Construct_UClass_ARobotDoorButton_NoRegister()
	{
		return ARobotDoorButton::StaticClass();
	}
	struct Z_Construct_UClass_ARobotDoorButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobotDoorButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotDoorButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RobotDoorButton.h" },
		{ "ModuleRelativePath", "RobotDoorButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobotDoorButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotDoorButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARobotDoorButton_Statics::ClassParams = {
		&ARobotDoorButton::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARobotDoorButton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARobotDoorButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARobotDoorButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARobotDoorButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARobotDoorButton, 3770895133);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ARobotDoorButton>()
	{
		return ARobotDoorButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobotDoorButton(Z_Construct_UClass_ARobotDoorButton, &ARobotDoorButton::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ARobotDoorButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotDoorButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
