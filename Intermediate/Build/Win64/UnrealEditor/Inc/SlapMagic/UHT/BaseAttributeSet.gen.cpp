// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlapMagic/AttributeSets/BaseAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseAttributeSet();
SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlapMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseAttributeSet Function OnRep_Armor ***********************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics
{
	struct BaseAttributeSet_eventOnRep_Armor_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Armor_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Armor", Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::BaseAttributeSet_eventOnRep_Armor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::BaseAttributeSet_eventOnRep_Armor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Armor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Armor(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_Armor *************************************

// ********** Begin Class UBaseAttributeSet Function OnRep_Health **********************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics
{
	struct BaseAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Health_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Health", Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::BaseAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::BaseAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_Health ************************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MagicResistance *************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics
{
	struct BaseAttributeSet_eventOnRep_MagicResistance_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MagicResistance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MagicResistance", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::BaseAttributeSet_eventOnRep_MagicResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::BaseAttributeSet_eventOnRep_MagicResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MagicResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MagicResistance(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MagicResistance ***************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxArmor ********************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxArmor_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxArmor_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxArmor", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::BaseAttributeSet_eventOnRep_MaxArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::BaseAttributeSet_eventOnRep_MaxArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxArmor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxArmor(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxArmor **********************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxHealth *******************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxHealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxHealth", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::BaseAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::BaseAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxHealth *********************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxMagicResistance **********************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxMagicResistance_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxMagicResistance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxMagicResistance", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::BaseAttributeSet_eventOnRep_MaxMagicResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::BaseAttributeSet_eventOnRep_MaxMagicResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxMagicResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMagicResistance(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxMagicResistance ************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxRuneAir ******************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxRuneAir_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxRuneAir_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxRuneAir", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::BaseAttributeSet_eventOnRep_MaxRuneAir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::BaseAttributeSet_eventOnRep_MaxRuneAir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxRuneAir)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxRuneAir(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxRuneAir ********************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxRuneElectric *************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxRuneElectric_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxRuneElectric_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxRuneElectric", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::BaseAttributeSet_eventOnRep_MaxRuneElectric_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::BaseAttributeSet_eventOnRep_MaxRuneElectric_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxRuneElectric)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxRuneElectric(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxRuneElectric ***************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxRuneFire *****************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxRuneFire_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxRuneFire_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxRuneFire", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::BaseAttributeSet_eventOnRep_MaxRuneFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::BaseAttributeSet_eventOnRep_MaxRuneFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxRuneFire)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxRuneFire(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxRuneFire *******************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxRuneGrass ****************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxRuneGrass_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxRuneGrass_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxRuneGrass", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::BaseAttributeSet_eventOnRep_MaxRuneGrass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::BaseAttributeSet_eventOnRep_MaxRuneGrass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxRuneGrass)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxRuneGrass(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxRuneGrass ******************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxRunePoison ***************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxRunePoison_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxRunePoison_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxRunePoison", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::BaseAttributeSet_eventOnRep_MaxRunePoison_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::BaseAttributeSet_eventOnRep_MaxRunePoison_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxRunePoison)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxRunePoison(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxRunePoison *****************************

// ********** Begin Class UBaseAttributeSet Function OnRep_MaxRuneWater ****************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics
{
	struct BaseAttributeSet_eventOnRep_MaxRuneWater_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxRuneWater_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxRuneWater", Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::BaseAttributeSet_eventOnRep_MaxRuneWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::BaseAttributeSet_eventOnRep_MaxRuneWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxRuneWater)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxRuneWater(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_MaxRuneWater ******************************

// ********** Begin Class UBaseAttributeSet Function OnRep_RuneAir *********************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics
{
	struct BaseAttributeSet_eventOnRep_RuneAir_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_RuneAir_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_RuneAir", Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::BaseAttributeSet_eventOnRep_RuneAir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::BaseAttributeSet_eventOnRep_RuneAir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_RuneAir)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RuneAir(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_RuneAir ***********************************

// ********** Begin Class UBaseAttributeSet Function OnRep_RuneElectric ****************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics
{
	struct BaseAttributeSet_eventOnRep_RuneElectric_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_RuneElectric_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_RuneElectric", Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::BaseAttributeSet_eventOnRep_RuneElectric_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::BaseAttributeSet_eventOnRep_RuneElectric_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_RuneElectric)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RuneElectric(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_RuneElectric ******************************

// ********** Begin Class UBaseAttributeSet Function OnRep_RuneFire ********************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics
{
	struct BaseAttributeSet_eventOnRep_RuneFire_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_RuneFire_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_RuneFire", Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::BaseAttributeSet_eventOnRep_RuneFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::BaseAttributeSet_eventOnRep_RuneFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_RuneFire)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RuneFire(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_RuneFire **********************************

// ********** Begin Class UBaseAttributeSet Function OnRep_RuneGrass *******************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics
{
	struct BaseAttributeSet_eventOnRep_RuneGrass_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_RuneGrass_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_RuneGrass", Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::BaseAttributeSet_eventOnRep_RuneGrass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::BaseAttributeSet_eventOnRep_RuneGrass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_RuneGrass)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RuneGrass(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_RuneGrass *********************************

// ********** Begin Class UBaseAttributeSet Function OnRep_RunePoison ******************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics
{
	struct BaseAttributeSet_eventOnRep_RunePoison_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_RunePoison_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_RunePoison", Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::BaseAttributeSet_eventOnRep_RunePoison_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::BaseAttributeSet_eventOnRep_RunePoison_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_RunePoison)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RunePoison(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_RunePoison ********************************

// ********** Begin Class UBaseAttributeSet Function OnRep_RuneWater *******************************
struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics
{
	struct BaseAttributeSet_eventOnRep_RuneWater_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_RuneWater_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_RuneWater", Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::BaseAttributeSet_eventOnRep_RuneWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::BaseAttributeSet_eventOnRep_RuneWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_RuneWater)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RuneWater(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UBaseAttributeSet Function OnRep_RuneWater *********************************

// ********** Begin Class UBaseAttributeSet ********************************************************
void UBaseAttributeSet::StaticRegisterNativesUBaseAttributeSet()
{
	UClass* Class = UBaseAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Armor", &UBaseAttributeSet::execOnRep_Armor },
		{ "OnRep_Health", &UBaseAttributeSet::execOnRep_Health },
		{ "OnRep_MagicResistance", &UBaseAttributeSet::execOnRep_MagicResistance },
		{ "OnRep_MaxArmor", &UBaseAttributeSet::execOnRep_MaxArmor },
		{ "OnRep_MaxHealth", &UBaseAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxMagicResistance", &UBaseAttributeSet::execOnRep_MaxMagicResistance },
		{ "OnRep_MaxRuneAir", &UBaseAttributeSet::execOnRep_MaxRuneAir },
		{ "OnRep_MaxRuneElectric", &UBaseAttributeSet::execOnRep_MaxRuneElectric },
		{ "OnRep_MaxRuneFire", &UBaseAttributeSet::execOnRep_MaxRuneFire },
		{ "OnRep_MaxRuneGrass", &UBaseAttributeSet::execOnRep_MaxRuneGrass },
		{ "OnRep_MaxRunePoison", &UBaseAttributeSet::execOnRep_MaxRunePoison },
		{ "OnRep_MaxRuneWater", &UBaseAttributeSet::execOnRep_MaxRuneWater },
		{ "OnRep_RuneAir", &UBaseAttributeSet::execOnRep_RuneAir },
		{ "OnRep_RuneElectric", &UBaseAttributeSet::execOnRep_RuneElectric },
		{ "OnRep_RuneFire", &UBaseAttributeSet::execOnRep_RuneFire },
		{ "OnRep_RuneGrass", &UBaseAttributeSet::execOnRep_RuneGrass },
		{ "OnRep_RunePoison", &UBaseAttributeSet::execOnRep_RunePoison },
		{ "OnRep_RuneWater", &UBaseAttributeSet::execOnRep_RuneWater },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseAttributeSet;
UClass* UBaseAttributeSet::GetPrivateStaticClass()
{
	using TClass = UBaseAttributeSet;
	if (!Z_Registration_Info_UClass_UBaseAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseAttributeSet"),
			Z_Registration_Info_UClass_UBaseAttributeSet.InnerSingleton,
			StaticRegisterNativesUBaseAttributeSet,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBaseAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister()
{
	return UBaseAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AttributeSets/BaseAttributeSet.h" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArmor_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicResistance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagicResistance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuneFire_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRuneFire_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuneAir_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRuneAir_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuneWater_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRuneWater_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuneGrass_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRuneGrass_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuneElectric_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRuneElectric_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunePoison_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRunePoison_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeSets/BaseAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxArmor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMagicResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuneFire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRuneFire;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuneAir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRuneAir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuneWater;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRuneWater;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuneGrass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRuneGrass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuneElectric;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRuneElectric;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RunePoison;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRunePoison;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 4036306787
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health, "OnRep_Health" }, // 614885440
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MagicResistance, "OnRep_MagicResistance" }, // 2540918507
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxArmor, "OnRep_MaxArmor" }, // 3876103952
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3363910104
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMagicResistance, "OnRep_MaxMagicResistance" }, // 4032968056
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneAir, "OnRep_MaxRuneAir" }, // 1499596335
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneElectric, "OnRep_MaxRuneElectric" }, // 3507388205
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneFire, "OnRep_MaxRuneFire" }, // 2627547320
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneGrass, "OnRep_MaxRuneGrass" }, // 2661321485
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRunePoison, "OnRep_MaxRunePoison" }, // 4032243169
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxRuneWater, "OnRep_MaxRuneWater" }, // 544469205
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneAir, "OnRep_RuneAir" }, // 170623243
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneElectric, "OnRep_RuneElectric" }, // 760304645
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneFire, "OnRep_RuneFire" }, // 2602652096
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneGrass, "OnRep_RuneGrass" }, // 3511269058
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_RunePoison, "OnRep_RunePoison" }, // 4203588773
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_RuneWater, "OnRep_RuneWater" }, // 3511455237
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxArmor = { "MaxArmor", "OnRep_MaxArmor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArmor_MetaData), NewProp_MaxArmor_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MagicResistance = { "MagicResistance", "OnRep_MagicResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MagicResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicResistance_MetaData), NewProp_MagicResistance_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMagicResistance = { "MaxMagicResistance", "OnRep_MaxMagicResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxMagicResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMagicResistance_MetaData), NewProp_MaxMagicResistance_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneFire = { "RuneFire", "OnRep_RuneFire", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, RuneFire), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuneFire_MetaData), NewProp_RuneFire_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneFire = { "MaxRuneFire", "OnRep_MaxRuneFire", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxRuneFire), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRuneFire_MetaData), NewProp_MaxRuneFire_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneAir = { "RuneAir", "OnRep_RuneAir", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, RuneAir), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuneAir_MetaData), NewProp_RuneAir_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneAir = { "MaxRuneAir", "OnRep_MaxRuneAir", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxRuneAir), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRuneAir_MetaData), NewProp_MaxRuneAir_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneWater = { "RuneWater", "OnRep_RuneWater", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, RuneWater), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuneWater_MetaData), NewProp_RuneWater_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneWater = { "MaxRuneWater", "OnRep_MaxRuneWater", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxRuneWater), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRuneWater_MetaData), NewProp_MaxRuneWater_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneGrass = { "RuneGrass", "OnRep_RuneGrass", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, RuneGrass), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuneGrass_MetaData), NewProp_RuneGrass_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneGrass = { "MaxRuneGrass", "OnRep_MaxRuneGrass", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxRuneGrass), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRuneGrass_MetaData), NewProp_MaxRuneGrass_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneElectric = { "RuneElectric", "OnRep_RuneElectric", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, RuneElectric), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuneElectric_MetaData), NewProp_RuneElectric_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneElectric = { "MaxRuneElectric", "OnRep_MaxRuneElectric", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxRuneElectric), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRuneElectric_MetaData), NewProp_MaxRuneElectric_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RunePoison = { "RunePoison", "OnRep_RunePoison", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, RunePoison), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunePoison_MetaData), NewProp_RunePoison_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRunePoison = { "MaxRunePoison", "OnRep_MaxRunePoison", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxRunePoison), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRunePoison_MetaData), NewProp_MaxRunePoison_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MagicResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMagicResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneGrass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneGrass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RuneElectric,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRuneElectric,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_RunePoison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxRunePoison,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_SlapMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams = {
	&UBaseAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAttributeSet()
{
	if (!Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton, Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UBaseAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_Armor(TEXT("Armor"));
	static FName Name_MaxArmor(TEXT("MaxArmor"));
	static FName Name_MagicResistance(TEXT("MagicResistance"));
	static FName Name_MaxMagicResistance(TEXT("MaxMagicResistance"));
	static FName Name_RuneFire(TEXT("RuneFire"));
	static FName Name_MaxRuneFire(TEXT("MaxRuneFire"));
	static FName Name_RuneAir(TEXT("RuneAir"));
	static FName Name_MaxRuneAir(TEXT("MaxRuneAir"));
	static FName Name_RuneWater(TEXT("RuneWater"));
	static FName Name_MaxRuneWater(TEXT("MaxRuneWater"));
	static FName Name_RuneGrass(TEXT("RuneGrass"));
	static FName Name_MaxRuneGrass(TEXT("MaxRuneGrass"));
	static FName Name_RuneElectric(TEXT("RuneElectric"));
	static FName Name_MaxRuneElectric(TEXT("MaxRuneElectric"));
	static FName Name_RunePoison(TEXT("RunePoison"));
	static FName Name_MaxRunePoison(TEXT("MaxRunePoison"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
		&& Name_MaxArmor == ClassReps[(int32)ENetFields_Private::MaxArmor].Property->GetFName()
		&& Name_MagicResistance == ClassReps[(int32)ENetFields_Private::MagicResistance].Property->GetFName()
		&& Name_MaxMagicResistance == ClassReps[(int32)ENetFields_Private::MaxMagicResistance].Property->GetFName()
		&& Name_RuneFire == ClassReps[(int32)ENetFields_Private::RuneFire].Property->GetFName()
		&& Name_MaxRuneFire == ClassReps[(int32)ENetFields_Private::MaxRuneFire].Property->GetFName()
		&& Name_RuneAir == ClassReps[(int32)ENetFields_Private::RuneAir].Property->GetFName()
		&& Name_MaxRuneAir == ClassReps[(int32)ENetFields_Private::MaxRuneAir].Property->GetFName()
		&& Name_RuneWater == ClassReps[(int32)ENetFields_Private::RuneWater].Property->GetFName()
		&& Name_MaxRuneWater == ClassReps[(int32)ENetFields_Private::MaxRuneWater].Property->GetFName()
		&& Name_RuneGrass == ClassReps[(int32)ENetFields_Private::RuneGrass].Property->GetFName()
		&& Name_MaxRuneGrass == ClassReps[(int32)ENetFields_Private::MaxRuneGrass].Property->GetFName()
		&& Name_RuneElectric == ClassReps[(int32)ENetFields_Private::RuneElectric].Property->GetFName()
		&& Name_MaxRuneElectric == ClassReps[(int32)ENetFields_Private::MaxRuneElectric].Property->GetFName()
		&& Name_RunePoison == ClassReps[(int32)ENetFields_Private::RunePoison].Property->GetFName()
		&& Name_MaxRunePoison == ClassReps[(int32)ENetFields_Private::MaxRunePoison].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBaseAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAttributeSet);
UBaseAttributeSet::~UBaseAttributeSet() {}
// ********** End Class UBaseAttributeSet **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h__Script_SlapMagic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributeSet, UBaseAttributeSet::StaticClass, TEXT("UBaseAttributeSet"), &Z_Registration_Info_UClass_UBaseAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributeSet), 3798648309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h__Script_SlapMagic_2925661682(TEXT("/Script/SlapMagic"),
	Z_CompiledInDeferFile_FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h__Script_SlapMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Slap_Magic_Source_SlapMagic_AttributeSets_BaseAttributeSet_h__Script_SlapMagic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
