// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Loa_5_2/CPP_Loa_5_2Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Loa_5_2Character() {}
// Cross Module References
	CPP_LOA_5_2_API UClass* Z_Construct_UClass_ACPP_Loa_5_2Character();
	CPP_LOA_5_2_API UClass* Z_Construct_UClass_ACPP_Loa_5_2Character_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP_Loa_5_2();
// End Cross Module References
	void ACPP_Loa_5_2Character::StaticRegisterNativesACPP_Loa_5_2Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Loa_5_2Character);
	UClass* Z_Construct_UClass_ACPP_Loa_5_2Character_NoRegister()
	{
		return ACPP_Loa_5_2Character::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Loa_5_2Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Loa_5_2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_Loa_5_2Character.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CPP_Loa_5_2Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Loa_5_2Character.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Loa_5_2Character, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Loa_5_2Character.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Loa_5_2Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_CameraBoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Loa_5_2Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::ClassParams = {
		&ACPP_Loa_5_2Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Loa_5_2Character()
	{
		if (!Z_Registration_Info_UClass_ACPP_Loa_5_2Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Loa_5_2Character.OuterSingleton, Z_Construct_UClass_ACPP_Loa_5_2Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Loa_5_2Character.OuterSingleton;
	}
	template<> CPP_LOA_5_2_API UClass* StaticClass<ACPP_Loa_5_2Character>()
	{
		return ACPP_Loa_5_2Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Loa_5_2Character);
	ACPP_Loa_5_2Character::~ACPP_Loa_5_2Character() {}
	struct Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Loa_5_2Character, ACPP_Loa_5_2Character::StaticClass, TEXT("ACPP_Loa_5_2Character"), &Z_Registration_Info_UClass_ACPP_Loa_5_2Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Loa_5_2Character), 1457226283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2Character_h_113855046(TEXT("/Script/CPP_Loa_5_2"),
		Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
