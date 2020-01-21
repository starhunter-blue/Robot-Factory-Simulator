// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/VRPawnFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPawnFactory() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AVRPawnFactory_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AVRPawnFactory();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AVRPawnBase();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
// End Cross Module References
	void AVRPawnFactory::StaticRegisterNativesAVRPawnFactory()
	{
	}
	UClass* Z_Construct_UClass_AVRPawnFactory_NoRegister()
	{
		return AVRPawnFactory::StaticClass();
	}
	struct Z_Construct_UClass_AVRPawnFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPawnFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRPawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawnFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRPawnFactory.h" },
		{ "ModuleRelativePath", "VRPawnFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPawnFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPawnFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRPawnFactory_Statics::ClassParams = {
		&AVRPawnFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVRPawnFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRPawnFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPawnFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRPawnFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPawnFactory, 2678689108);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AVRPawnFactory>()
	{
		return AVRPawnFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPawnFactory(Z_Construct_UClass_AVRPawnFactory, &AVRPawnFactory::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AVRPawnFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPawnFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
