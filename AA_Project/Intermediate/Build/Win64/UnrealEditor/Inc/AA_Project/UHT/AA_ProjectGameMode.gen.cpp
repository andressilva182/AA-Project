// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AA_Project/AA_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAA_ProjectGameMode() {}
// Cross Module References
	AA_PROJECT_API UClass* Z_Construct_UClass_AAA_ProjectGameMode();
	AA_PROJECT_API UClass* Z_Construct_UClass_AAA_ProjectGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AA_Project();
// End Cross Module References
	void AAA_ProjectGameMode::StaticRegisterNativesAAA_ProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAA_ProjectGameMode);
	UClass* Z_Construct_UClass_AAA_ProjectGameMode_NoRegister()
	{
		return AAA_ProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAA_ProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAA_ProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AA_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAA_ProjectGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAA_ProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AA_ProjectGameMode.h" },
		{ "ModuleRelativePath", "AA_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAA_ProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAA_ProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAA_ProjectGameMode_Statics::ClassParams = {
		&AAA_ProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAA_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAA_ProjectGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAA_ProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AAA_ProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAA_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AAA_ProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAA_ProjectGameMode.OuterSingleton;
	}
	template<> AA_PROJECT_API UClass* StaticClass<AAA_ProjectGameMode>()
	{
		return AAA_ProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAA_ProjectGameMode);
	AAA_ProjectGameMode::~AAA_ProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_Respositories_AA_AA_Project_AA_Project_Source_AA_Project_AA_ProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_Respositories_AA_AA_Project_AA_Project_Source_AA_Project_AA_ProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAA_ProjectGameMode, AAA_ProjectGameMode::StaticClass, TEXT("AAA_ProjectGameMode"), &Z_Registration_Info_UClass_AAA_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAA_ProjectGameMode), 1470953229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_Respositories_AA_AA_Project_AA_Project_Source_AA_Project_AA_ProjectGameMode_h_946589848(TEXT("/Script/AA_Project"),
		Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_Respositories_AA_AA_Project_AA_Project_Source_AA_Project_AA_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_Respositories_AA_AA_Project_AA_Project_Source_AA_Project_AA_ProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
