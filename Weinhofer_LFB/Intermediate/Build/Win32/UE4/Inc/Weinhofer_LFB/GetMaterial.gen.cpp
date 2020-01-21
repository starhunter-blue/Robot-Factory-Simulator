// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/GetMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetMaterial() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UGetMaterial_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UGetMaterial();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UGetMaterial::StaticRegisterNativesUGetMaterial()
	{
	}
	UClass* Z_Construct_UClass_UGetMaterial_NoRegister()
	{
		return UGetMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UGetMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDispenserKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialDispenserKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RobotKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RobotKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMaterial_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GetMaterial.h" },
		{ "ModuleRelativePath", "GetMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMaterial_Statics::NewProp_MaterialDispenserKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "GetMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGetMaterial_Statics::NewProp_MaterialDispenserKey = { "MaterialDispenserKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetMaterial, MaterialDispenserKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGetMaterial_Statics::NewProp_MaterialDispenserKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGetMaterial_Statics::NewProp_MaterialDispenserKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMaterial_Statics::NewProp_RobotKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "GetMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGetMaterial_Statics::NewProp_RobotKey = { "RobotKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetMaterial, RobotKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGetMaterial_Statics::NewProp_RobotKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGetMaterial_Statics::NewProp_RobotKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetMaterial_Statics::NewProp_MaterialDispenserKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetMaterial_Statics::NewProp_RobotKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetMaterial_Statics::ClassParams = {
		&UGetMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGetMaterial_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGetMaterial_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetMaterial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGetMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetMaterial, 2507661513);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UGetMaterial>()
	{
		return UGetMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetMaterial(Z_Construct_UClass_UGetMaterial, &UGetMaterial::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UGetMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
