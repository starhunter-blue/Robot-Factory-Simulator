// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Ware.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWare() {}
// Cross Module References
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_EWareType();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWare_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWare();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWare_GetWareType();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EWareType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Weinhofer_LFB_EWareType, Z_Construct_UPackage__Script_Weinhofer_LFB(), TEXT("EWareType"));
		}
		return Singleton;
	}
	template<> WEINHOFER_LFB_API UEnum* StaticEnum<EWareType>()
	{
		return EWareType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWareType(EWareType_StaticEnum, TEXT("/Script/Weinhofer_LFB"), TEXT("EWareType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Weinhofer_LFB_EWareType_Hash() { return 2784285218U; }
	UEnum* Z_Construct_UEnum_Weinhofer_LFB_EWareType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Weinhofer_LFB();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWareType"), 0, Get_Z_Construct_UEnum_Weinhofer_LFB_EWareType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWareType::WTE_UNSET", (int64)EWareType::WTE_UNSET },
				{ "EWareType::WTE_Pyramid", (int64)EWareType::WTE_Pyramid },
				{ "EWareType::WTE_Cube", (int64)EWareType::WTE_Cube },
				{ "EWareType::WTE_Dodecahedron", (int64)EWareType::WTE_Dodecahedron },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* The types of wares expressed as enums for easier handling in blueprint\n*/" },
				{ "ModuleRelativePath", "Ware.h" },
				{ "ToolTip", "* The types of wares expressed as enums for easier handling in blueprint" },
				{ "WTE_Cube.DisplayName", "Cube" },
				{ "WTE_Cube.Name", "EWareType::WTE_Cube" },
				{ "WTE_Dodecahedron.DisplayName", "Dodecahedron" },
				{ "WTE_Dodecahedron.Name", "EWareType::WTE_Dodecahedron" },
				{ "WTE_Pyramid.DisplayName", "Pyramid" },
				{ "WTE_Pyramid.Name", "EWareType::WTE_Pyramid" },
				{ "WTE_UNSET.DisplayName", "UNSET" },
				{ "WTE_UNSET.Name", "EWareType::WTE_UNSET" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
				nullptr,
				"EWareType",
				"EWareType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AWare::StaticRegisterNativesAWare()
	{
		UClass* Class = AWare::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWareType", &AWare::execGetWareType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWare_GetWareType_Statics
	{
		struct Ware_eventGetWareType_Parms
		{
			EWareType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWare_GetWareType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ware_eventGetWareType_Parms, ReturnValue), Z_Construct_UEnum_Weinhofer_LFB_EWareType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWare_GetWareType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWare_GetWareType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWare_GetWareType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWare_GetWareType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWare_GetWareType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ware.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWare_GetWareType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWare, nullptr, "GetWareType", nullptr, nullptr, sizeof(Ware_eventGetWareType_Parms), Z_Construct_UFunction_AWare_GetWareType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWare_GetWareType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWare_GetWareType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWare_GetWareType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWare_GetWareType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWare_GetWareType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWare_NoRegister()
	{
		return AWare::StaticClass();
	}
	struct Z_Construct_UClass_AWare_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WareMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WareType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WareType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWare_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWare_GetWareType, "GetWareType" }, // 3445643092
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWare_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ware.h" },
		{ "ModuleRelativePath", "Ware.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWare_Statics::NewProp_WareMesh_MetaData[] = {
		{ "Category", "Ware" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ware.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWare_Statics::NewProp_WareMesh = { "WareMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWare, WareMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWare_Statics::NewProp_WareMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWare_Statics::NewProp_WareMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWare_Statics::NewProp_WareType_MetaData[] = {
		{ "Category", "Ware" },
		{ "ModuleRelativePath", "Ware.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWare_Statics::NewProp_WareType = { "WareType", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWare, WareType), Z_Construct_UEnum_Weinhofer_LFB_EWareType, METADATA_PARAMS(Z_Construct_UClass_AWare_Statics::NewProp_WareType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWare_Statics::NewProp_WareType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWare_Statics::NewProp_WareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWare_Statics::NewProp_WareMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWare_Statics::NewProp_WareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWare_Statics::NewProp_WareType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWare_Statics::ClassParams = {
		&AWare::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWare_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWare_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWare_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWare, 761010503);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AWare>()
	{
		return AWare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWare(Z_Construct_UClass_AWare, &AWare::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AWare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
