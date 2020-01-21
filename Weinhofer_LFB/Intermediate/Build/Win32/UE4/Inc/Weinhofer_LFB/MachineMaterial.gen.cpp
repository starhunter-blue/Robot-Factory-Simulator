// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/MachineMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMachineMaterial() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMachineMaterial_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMachineMaterial();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMachineMaterial::StaticRegisterNativesAMachineMaterial()
	{
	}
	UClass* Z_Construct_UClass_AMachineMaterial_NoRegister()
	{
		return AMachineMaterial::StaticClass();
	}
	struct Z_Construct_UClass_AMachineMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMachineMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachineMaterial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MachineMaterial.h" },
		{ "ModuleRelativePath", "MachineMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachineMaterial_Statics::NewProp_MaterialMesh_MetaData[] = {
		{ "Category", "MachineMaterial" },
		{ "Comment", "//Setup\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MachineMaterial.h" },
		{ "ToolTip", "Setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachineMaterial_Statics::NewProp_MaterialMesh = { "MaterialMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachineMaterial, MaterialMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachineMaterial_Statics::NewProp_MaterialMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMachineMaterial_Statics::NewProp_MaterialMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMachineMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachineMaterial_Statics::NewProp_MaterialMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMachineMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMachineMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMachineMaterial_Statics::ClassParams = {
		&AMachineMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMachineMaterial_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMachineMaterial_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMachineMaterial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMachineMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMachineMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMachineMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMachineMaterial, 2530134404);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AMachineMaterial>()
	{
		return AMachineMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMachineMaterial(Z_Construct_UClass_AMachineMaterial, &AMachineMaterial::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AMachineMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMachineMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
