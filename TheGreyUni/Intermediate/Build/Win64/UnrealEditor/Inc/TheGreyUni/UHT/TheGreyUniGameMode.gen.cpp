// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGreyUni/TheGreyUniGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheGreyUniGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEGREYUNI_API UClass* Z_Construct_UClass_ATheGreyUniGameMode();
THEGREYUNI_API UClass* Z_Construct_UClass_ATheGreyUniGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGreyUni();
// End Cross Module References

// Begin Class ATheGreyUniGameMode
void ATheGreyUniGameMode::StaticRegisterNativesATheGreyUniGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheGreyUniGameMode);
UClass* Z_Construct_UClass_ATheGreyUniGameMode_NoRegister()
{
	return ATheGreyUniGameMode::StaticClass();
}
struct Z_Construct_UClass_ATheGreyUniGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheGreyUniGameMode.h" },
		{ "ModuleRelativePath", "TheGreyUniGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGreyUniGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATheGreyUniGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGreyUni,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGreyUniGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheGreyUniGameMode_Statics::ClassParams = {
	&ATheGreyUniGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGreyUniGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheGreyUniGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheGreyUniGameMode()
{
	if (!Z_Registration_Info_UClass_ATheGreyUniGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheGreyUniGameMode.OuterSingleton, Z_Construct_UClass_ATheGreyUniGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheGreyUniGameMode.OuterSingleton;
}
template<> THEGREYUNI_API UClass* StaticClass<ATheGreyUniGameMode>()
{
	return ATheGreyUniGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheGreyUniGameMode);
ATheGreyUniGameMode::~ATheGreyUniGameMode() {}
// End Class ATheGreyUniGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheGreyUniGameMode, ATheGreyUniGameMode::StaticClass, TEXT("ATheGreyUniGameMode"), &Z_Registration_Info_UClass_ATheGreyUniGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGreyUniGameMode), 2441056540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniGameMode_h_2589812589(TEXT("/Script/TheGreyUni"),
	Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
