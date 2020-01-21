// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/MaterialDispenser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialDispenser() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMaterialDispenser_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMaterialDispenser();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobot_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AMaterialDispenser_GetWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AMachineMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMaterialDispenser::StaticRegisterNativesAMaterialDispenser()
	{
		UClass* Class = AMaterialDispenser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DispenseMaterial", &AMaterialDispenser::execDispenseMaterial },
			{ "GetWaypoint", &AMaterialDispenser::execGetWaypoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics
	{
		struct MaterialDispenser_eventDispenseMaterial_Parms
		{
			ARobot* TargetRobot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetRobot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::NewProp_TargetRobot = { "TargetRobot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialDispenser_eventDispenseMaterial_Parms, TargetRobot), Z_Construct_UClass_ARobot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::NewProp_TargetRobot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Robot Communication\n" },
		{ "ModuleRelativePath", "MaterialDispenser.h" },
		{ "ToolTip", "Robot Communication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaterialDispenser, nullptr, "DispenseMaterial", nullptr, nullptr, sizeof(MaterialDispenser_eventDispenseMaterial_Parms), Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics
	{
		struct MaterialDispenser_eventGetWaypoint_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialDispenser_eventGetWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MaterialDispenser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaterialDispenser, nullptr, "GetWaypoint", nullptr, nullptr, sizeof(MaterialDispenser_eventGetWaypoint_Parms), Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaterialDispenser_GetWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaterialDispenser_GetWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMaterialDispenser_NoRegister()
	{
		return AMaterialDispenser::StaticClass();
	}
	struct Z_Construct_UClass_AMaterialDispenser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MaterialClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPickupWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialPickupWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DispenserBodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DispenserBodyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaterialDispenser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaterialDispenser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaterialDispenser_DispenseMaterial, "DispenseMaterial" }, // 3143627548
		{ &Z_Construct_UFunction_AMaterialDispenser_GetWaypoint, "GetWaypoint" }, // 3552150671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialDispenser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialDispenser.h" },
		{ "ModuleRelativePath", "MaterialDispenser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialClass_MetaData[] = {
		{ "Category", "MaterialDispenser" },
		{ "Comment", "//Config\n" },
		{ "ModuleRelativePath", "MaterialDispenser.h" },
		{ "ToolTip", "Config" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialClass = { "MaterialClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaterialDispenser, MaterialClass), Z_Construct_UClass_AMachineMaterial_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialPickupWaypoint_MetaData[] = {
		{ "Category", "MaterialDispenser" },
		{ "Comment", "//Setup\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MaterialDispenser.h" },
		{ "ToolTip", "Setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialPickupWaypoint = { "MaterialPickupWaypoint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaterialDispenser, MaterialPickupWaypoint), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialPickupWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialPickupWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "MaterialDispenser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MaterialDispenser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaterialDispenser, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_PlatformMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_PlatformMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_DispenserBodyMesh_MetaData[] = {
		{ "Category", "MaterialDispenser" },
		{ "Comment", "//Setup\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MaterialDispenser.h" },
		{ "ToolTip", "Setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_DispenserBodyMesh = { "DispenserBodyMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaterialDispenser, DispenserBodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_DispenserBodyMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_DispenserBodyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaterialDispenser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_MaterialPickupWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_PlatformMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialDispenser_Statics::NewProp_DispenserBodyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaterialDispenser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaterialDispenser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaterialDispenser_Statics::ClassParams = {
		&AMaterialDispenser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMaterialDispenser_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMaterialDispenser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMaterialDispenser_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMaterialDispenser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaterialDispenser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaterialDispenser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaterialDispenser, 2409292843);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AMaterialDispenser>()
	{
		return AMaterialDispenser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaterialDispenser(Z_Construct_UClass_AMaterialDispenser, &AMaterialDispenser::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AMaterialDispenser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaterialDispenser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
