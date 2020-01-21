// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Storyboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryboard() {}
// Cross Module References
	WEINHOFER_LFB_API UEnum* Z_Construct_UEnum_Weinhofer_LFB_EAgendaHas();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UScriptStruct* Z_Construct_UScriptStruct_FRequest();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UStoryboard_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UStoryboard();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EAgendaHas_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Weinhofer_LFB_EAgendaHas, Z_Construct_UPackage__Script_Weinhofer_LFB(), TEXT("EAgendaHas"));
		}
		return Singleton;
	}
	template<> WEINHOFER_LFB_API UEnum* StaticEnum<EAgendaHas>()
	{
		return EAgendaHas_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAgendaHas(EAgendaHas_StaticEnum, TEXT("/Script/Weinhofer_LFB"), TEXT("EAgendaHas"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Weinhofer_LFB_EAgendaHas_Hash() { return 1879413265U; }
	UEnum* Z_Construct_UEnum_Weinhofer_LFB_EAgendaHas()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Weinhofer_LFB();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAgendaHas"), 0, Get_Z_Construct_UEnum_Weinhofer_LFB_EAgendaHas_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAgendaHas::AHE_Thought", (int64)EAgendaHas::AHE_Thought },
				{ "EAgendaHas::AHE_Request", (int64)EAgendaHas::AHE_Request },
				{ "EAgendaHas::AHE_Both", (int64)EAgendaHas::AHE_Both },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AHE_Both.DisplayName", "Both" },
				{ "AHE_Both.Name", "EAgendaHas::AHE_Both" },
				{ "AHE_Request.DisplayName", "Request" },
				{ "AHE_Request.Name", "EAgendaHas::AHE_Request" },
				{ "AHE_Thought.DisplayName", "Thought" },
				{ "AHE_Thought.Name", "EAgendaHas::AHE_Thought" },
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* Used to determine if a RobotAgenda should have a Thought, a Request or Both\n*/" },
				{ "ModuleRelativePath", "Storyboard.h" },
				{ "ToolTip", "* Used to determine if a RobotAgenda should have a Thought, a Request or Both" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
				nullptr,
				"EAgendaHas",
				"EAgendaHas",
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
class UScriptStruct* FRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEINHOFER_LFB_API uint32 Get_Z_Construct_UScriptStruct_FRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequest, Z_Construct_UPackage__Script_Weinhofer_LFB(), TEXT("Request"), sizeof(FRequest), Get_Z_Construct_UScriptStruct_FRequest_Hash());
	}
	return Singleton;
}
template<> WEINHOFER_LFB_API UScriptStruct* StaticStruct<FRequest>()
{
	return FRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRequest(FRequest::StaticStruct, TEXT("/Script/Weinhofer_LFB"), TEXT("Request"), false, nullptr, nullptr);
static struct FScriptStruct_Weinhofer_LFB_StaticRegisterNativesFRequest
{
	FScriptStruct_Weinhofer_LFB_StaticRegisterNativesFRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Request")),new UScriptStruct::TCppStructOps<FRequest>);
	}
} ScriptStruct_Weinhofer_LFB_StaticRegisterNativesFRequest;
	struct Z_Construct_UScriptStruct_FRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Storyboard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
		nullptr,
		&NewStructOps,
		"Request",
		sizeof(FRequest),
		alignof(FRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Weinhofer_LFB();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Request"), sizeof(FRequest), Get_Z_Construct_UScriptStruct_FRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRequest_Hash() { return 1311678800U; }
	void UStoryboard::StaticRegisterNativesUStoryboard()
	{
	}
	UClass* Z_Construct_UClass_UStoryboard_NoRegister()
	{
		return UStoryboard::StaticClass();
	}
	struct Z_Construct_UClass_UStoryboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoryboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Storyboard.h" },
		{ "ModuleRelativePath", "Storyboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoryboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoryboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoryboard_Statics::ClassParams = {
		&UStoryboard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStoryboard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStoryboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoryboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoryboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoryboard, 4220775696);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UStoryboard>()
	{
		return UStoryboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoryboard(Z_Construct_UClass_UStoryboard, &UStoryboard::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UStoryboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoryboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
