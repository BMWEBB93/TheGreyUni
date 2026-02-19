// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheGreyUniPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATheGreyUniCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef THEGREYUNI_TheGreyUniPickUpComponent_generated_h
#error "TheGreyUniPickUpComponent.generated.h already included, missing '#pragma once' in TheGreyUniPickUpComponent.h"
#endif
#define THEGREYUNI_TheGreyUniPickUpComponent_generated_h

#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h_12_DELEGATE \
THEGREYUNI_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ATheGreyUniCharacter* PickUpCharacter);


#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTheGreyUniPickUpComponent(); \
	friend struct Z_Construct_UClass_UTheGreyUniPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UTheGreyUniPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGreyUni"), NO_API) \
	DECLARE_SERIALIZER(UTheGreyUniPickUpComponent)


#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTheGreyUniPickUpComponent(UTheGreyUniPickUpComponent&&); \
	UTheGreyUniPickUpComponent(const UTheGreyUniPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTheGreyUniPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTheGreyUniPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTheGreyUniPickUpComponent) \
	NO_API virtual ~UTheGreyUniPickUpComponent();


#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h_14_PROLOG
#define FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGREYUNI_API UClass* StaticClass<class UTheGreyUniPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_TheGreyUniPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
