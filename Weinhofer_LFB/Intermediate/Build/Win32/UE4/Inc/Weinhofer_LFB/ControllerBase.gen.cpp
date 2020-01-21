// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/ControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerBase() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AControllerBase_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
// End Cross Module References
	void AControllerBase::StaticRegisterNativesAControllerBase()
	{
	}
	UClass* Z_Construct_UClass_AControllerBase_NoRegister()
	{
		return AControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ControllerBase.h" },
		{ "ModuleRelativePath", "ControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerBase_Statics::NewProp_Pointer_MetaData[] = {
		{ "Category", "ControllerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControllerBase_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AControllerBase, Pointer), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControllerBase_Statics::NewProp_Pointer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControllerBase_Statics::NewProp_Pointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerBase_Statics::NewProp_MotionController_MetaData[] = {
		{ "Category", "ControllerBase" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControllerBase.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControllerBase_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AControllerBase, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControllerBase_Statics::NewProp_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControllerBase_Statics::NewProp_MotionController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerBase_Statics::NewProp_Pointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerBase_Statics::NewProp_MotionController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControllerBase_Statics::ClassParams = {
		&AControllerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AControllerBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AControllerBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AControllerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControllerBase, 4150486108);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AControllerBase>()
	{
		return AControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControllerBase(Z_Construct_UClass_AControllerBase, &AControllerBase::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
