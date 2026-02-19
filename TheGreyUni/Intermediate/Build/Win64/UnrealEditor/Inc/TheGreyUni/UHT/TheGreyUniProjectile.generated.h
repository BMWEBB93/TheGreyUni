// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheGreyUniProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef THEGREYUNI_TheGreyUniProjectile_generated_h
#error "TheGreyUniProjectile.generated.h already included, missing '#pragma once' in TheGreyUniProjectile.h"
#endif
#define THEGREYUNI_TheGreyUniProjectile_generated_h

#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheGreyUniProjectile(); \
	friend struct Z_Construct_UClass_ATheGreyUniProjectile_Statics; \
public: \
	DECLARE_CLASS(ATheGreyUniProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGreyUni"), NO_API) \
	DECLARE_SERIALIZER(ATheGreyUniProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATheGreyUniProjectile(ATheGreyUniProjectile&&); \
	ATheGreyUniProjectile(const ATheGreyUniProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheGreyUniProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheGreyUniProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheGreyUniProjectile) \
	NO_API virtual ~ATheGreyUniProjectile();


#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniProjectile_h_12_PROLOG
#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGREYUNI_API UClass* StaticClass<class ATheGreyUniProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
