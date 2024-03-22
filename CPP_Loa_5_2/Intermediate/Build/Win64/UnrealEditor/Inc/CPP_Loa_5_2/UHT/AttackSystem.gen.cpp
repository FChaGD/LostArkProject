// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Loa_5_2/AttackSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackSystem() {}
// Cross Module References
	CPP_LOA_5_2_API UClass* Z_Construct_UClass_AAttackSystem();
	CPP_LOA_5_2_API UClass* Z_Construct_UClass_AAttackSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPP_Loa_5_2();
// End Cross Module References
	void AAttackSystem::StaticRegisterNativesAAttackSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAttackSystem);
	UClass* Z_Construct_UClass_AAttackSystem_NoRegister()
	{
		return AAttackSystem::StaticClass();
	}
	struct Z_Construct_UClass_AAttackSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttackSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Loa_5_2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttackSystem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AttackSystem.h" },
		{ "ModuleRelativePath", "AttackSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttackSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttackSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttackSystem_Statics::ClassParams = {
		&AAttackSystem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAttackSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAttackSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAttackSystem()
	{
		if (!Z_Registration_Info_UClass_AAttackSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttackSystem.OuterSingleton, Z_Construct_UClass_AAttackSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAttackSystem.OuterSingleton;
	}
	template<> CPP_LOA_5_2_API UClass* StaticClass<AAttackSystem>()
	{
		return AAttackSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttackSystem);
	AAttackSystem::~AAttackSystem() {}
	struct Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_AttackSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_AttackSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAttackSystem, AAttackSystem::StaticClass, TEXT("AAttackSystem"), &Z_Registration_Info_UClass_AAttackSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttackSystem), 3597832978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_AttackSystem_h_3565312744(TEXT("/Script/CPP_Loa_5_2"),
		Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_AttackSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_AttackSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
