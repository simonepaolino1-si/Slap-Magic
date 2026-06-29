// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/BaseGameplayAbility.h"

#ifdef SLAPMAGIC_BaseGameplayAbility_generated_h
#error "BaseGameplayAbility.generated.h already included, missing '#pragma once' in BaseGameplayAbility.h"
#endif
#define SLAPMAGIC_BaseGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseGameplayAbility *****************************************************
SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister();

#define FID_Slap_Magic_Source_SlapMagic_GameplayAbilities_BaseGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGameplayAbility(); \
	friend struct Z_Construct_UClass_UBaseGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlapMagic"), Z_Construct_UClass_UBaseGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UBaseGameplayAbility)


#define FID_Slap_Magic_Source_SlapMagic_GameplayAbilities_BaseGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseGameplayAbility(UBaseGameplayAbility&&) = delete; \
	UBaseGameplayAbility(const UBaseGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameplayAbility) \
	NO_API virtual ~UBaseGameplayAbility();


#define FID_Slap_Magic_Source_SlapMagic_GameplayAbilities_BaseGameplayAbility_h_12_PROLOG
#define FID_Slap_Magic_Source_SlapMagic_GameplayAbilities_BaseGameplayAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slap_Magic_Source_SlapMagic_GameplayAbilities_BaseGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_Slap_Magic_Source_SlapMagic_GameplayAbilities_BaseGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseGameplayAbility;

// ********** End Class UBaseGameplayAbility *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Slap_Magic_Source_SlapMagic_GameplayAbilities_BaseGameplayAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
