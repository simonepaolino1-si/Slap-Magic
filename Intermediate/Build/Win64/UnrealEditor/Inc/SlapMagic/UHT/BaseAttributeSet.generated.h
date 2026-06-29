// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeSets/BaseAttributeSet.h"

#ifdef SLAPMAGIC_BaseAttributeSet_generated_h
#error "BaseAttributeSet.generated.h already included, missing '#pragma once' in BaseAttributeSet.h"
#endif
#define SLAPMAGIC_BaseAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAttributeData;

// ********** Begin Class UBaseAttributeSet ********************************************************
#define FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxRunePoison); \
	DECLARE_FUNCTION(execOnRep_RunePoison); \
	DECLARE_FUNCTION(execOnRep_MaxRuneElectric); \
	DECLARE_FUNCTION(execOnRep_RuneElectric); \
	DECLARE_FUNCTION(execOnRep_MaxRuneGrass); \
	DECLARE_FUNCTION(execOnRep_RuneGrass); \
	DECLARE_FUNCTION(execOnRep_MaxRuneWater); \
	DECLARE_FUNCTION(execOnRep_RuneWater); \
	DECLARE_FUNCTION(execOnRep_MaxRuneAir); \
	DECLARE_FUNCTION(execOnRep_RuneAir); \
	DECLARE_FUNCTION(execOnRep_MaxRuneFire); \
	DECLARE_FUNCTION(execOnRep_RuneFire); \
	DECLARE_FUNCTION(execOnRep_MaxMagicResistance); \
	DECLARE_FUNCTION(execOnRep_MagicResistance); \
	DECLARE_FUNCTION(execOnRep_MaxArmor); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();

#define FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAttributeSet(); \
	friend struct Z_Construct_UClass_UBaseAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlapMagic"), Z_Construct_UClass_UBaseAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UBaseAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Armor, \
		MaxArmor, \
		MagicResistance, \
		MaxMagicResistance, \
		RuneFire, \
		MaxRuneFire, \
		RuneAir, \
		MaxRuneAir, \
		RuneWater, \
		MaxRuneWater, \
		RuneGrass, \
		MaxRuneGrass, \
		RuneElectric, \
		MaxRuneElectric, \
		RunePoison, \
		MaxRunePoison, \
		NETFIELD_REP_END=MaxRunePoison	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UBaseAttributeSet) \
public:


#define FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseAttributeSet(UBaseAttributeSet&&) = delete; \
	UBaseAttributeSet(const UBaseAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseAttributeSet) \
	NO_API virtual ~UBaseAttributeSet();


#define FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h_15_PROLOG
#define FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
	FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseAttributeSet;

// ********** End Class UBaseAttributeSet **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
