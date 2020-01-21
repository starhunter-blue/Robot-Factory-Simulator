// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Weinhofer_LFBGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeinhofer_LFBGameModeBase() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWeinhofer_LFBGameModeBase_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWeinhofer_LFBGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
// End Cross Module References
	void AWeinhofer_LFBGameModeBase::StaticRegisterNativesAWeinhofer_LFBGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AWeinhofer_LFBGameModeBase_NoRegister()
	{
		return AWeinhofer_LFBGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeinhofer_LFBGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeinhofer_LFBGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeinhofer_LFBGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Weinhofer_LFBGameModeBase.h" },
		{ "ModuleRelativePath", "Weinhofer_LFBGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeinhofer_LFBGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeinhofer_LFBGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeinhofer_LFBGameModeBase_Statics::ClassParams = {
		&AWeinhofer_LFBGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AWeinhofer_LFBGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeinhofer_LFBGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeinhofer_LFBGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeinhofer_LFBGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeinhofer_LFBGameModeBase, 2864604187);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AWeinhofer_LFBGameModeBase>()
	{
		return AWeinhofer_LFBGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeinhofer_LFBGameModeBase(Z_Construct_UClass_AWeinhofer_LFBGameModeBase, &AWeinhofer_LFBGameModeBase::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AWeinhofer_LFBGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeinhofer_LFBGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
