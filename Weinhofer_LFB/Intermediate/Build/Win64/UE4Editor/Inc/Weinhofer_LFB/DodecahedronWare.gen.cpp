// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/DodecahedronWare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodecahedronWare() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADodecahedronWare_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ADodecahedronWare();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWare();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
// End Cross Module References
	void ADodecahedronWare::StaticRegisterNativesADodecahedronWare()
	{
	}
	UClass* Z_Construct_UClass_ADodecahedronWare_NoRegister()
	{
		return ADodecahedronWare::StaticClass();
	}
	struct Z_Construct_UClass_ADodecahedronWare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodecahedronWare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWare,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodecahedronWare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DodecahedronWare.h" },
		{ "ModuleRelativePath", "DodecahedronWare.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodecahedronWare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodecahedronWare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADodecahedronWare_Statics::ClassParams = {
		&ADodecahedronWare::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADodecahedronWare_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADodecahedronWare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADodecahedronWare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADodecahedronWare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADodecahedronWare, 3927218618);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ADodecahedronWare>()
	{
		return ADodecahedronWare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADodecahedronWare(Z_Construct_UClass_ADodecahedronWare, &ADodecahedronWare::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ADodecahedronWare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodecahedronWare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
