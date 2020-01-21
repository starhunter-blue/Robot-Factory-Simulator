// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/CubeWare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeWare() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ACubeWare_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ACubeWare();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWare();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
// End Cross Module References
	void ACubeWare::StaticRegisterNativesACubeWare()
	{
	}
	UClass* Z_Construct_UClass_ACubeWare_NoRegister()
	{
		return ACubeWare::StaticClass();
	}
	struct Z_Construct_UClass_ACubeWare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeWare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWare,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeWare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CubeWare.h" },
		{ "ModuleRelativePath", "CubeWare.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeWare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeWare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeWare_Statics::ClassParams = {
		&ACubeWare::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACubeWare_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACubeWare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeWare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeWare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeWare, 3549695635);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ACubeWare>()
	{
		return ACubeWare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeWare(Z_Construct_UClass_ACubeWare, &ACubeWare::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ACubeWare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeWare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
