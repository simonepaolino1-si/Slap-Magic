// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseAttributeSet.generated.h"



/**
 * 
 */
UCLASS()
class SLAPMAGIC_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UBaseAttributeSet();

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxHealth);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Armor)
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, Armor);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxArmor)
	FGameplayAttributeData MaxArmor;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxArmor);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MagicResistance)
	FGameplayAttributeData MagicResistance;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MagicResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxMagicResistance)
	FGameplayAttributeData MaxMagicResistance;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxMagicResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_RuneFire)
	FGameplayAttributeData RuneFire;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, RuneFire);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxRuneFire)
	FGameplayAttributeData MaxRuneFire;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxRuneFire);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_RuneAir)
	FGameplayAttributeData RuneAir;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, RuneAir);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxRuneAir)
	FGameplayAttributeData MaxRuneAir;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxRuneAir);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_RuneWater)
	FGameplayAttributeData RuneWater;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, RuneWater);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxRuneWater)
	FGameplayAttributeData MaxRuneWater;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxRuneWater);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_RuneGrass)
	FGameplayAttributeData RuneGrass;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, RuneGrass);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxRuneGrass)
	FGameplayAttributeData MaxRuneGrass;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxRuneGrass);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_RuneElectric)
	FGameplayAttributeData RuneElectric;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, RuneElectric);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxRuneElectric)
	FGameplayAttributeData MaxRuneElectric;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxRuneElectric);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_RunePoison)
	FGameplayAttributeData RunePoison;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, RunePoison);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxRunePoison)
	FGameplayAttributeData MaxRunePoison;
	ATTRIBUTE_ACCESSORS_BASIC(UBaseAttributeSet, MaxRunePoison);

public:

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Health, OldValue);
	}

	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxHealth, OldValue);
	}

	UFUNCTION()
	void OnRep_Armor(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Armor, OldValue);
	}

	UFUNCTION()
	void OnRep_MaxArmor(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxArmor, OldValue);
	}

	UFUNCTION()
	void OnRep_MagicResistance(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MagicResistance, OldValue);
	}

	UFUNCTION()
	void OnRep_MaxMagicResistance(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxMagicResistance, OldValue);
	}

	UFUNCTION()
	void OnRep_RuneFire(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, RuneFire, OldValue);
	}

	UFUNCTION()
	void OnRep_MaxRuneFire(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxRuneFire, OldValue);
	}

	UFUNCTION()
	void OnRep_RuneAir(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, RuneAir, OldValue);
	}

	UFUNCTION()
	void OnRep_MaxRuneAir(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxRuneAir, OldValue);
	}

	UFUNCTION()
	void OnRep_RuneWater(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, RuneWater, OldValue);
	}

	UFUNCTION()
	void OnRep_MaxRuneWater(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxRuneWater, OldValue);
	}

	UFUNCTION()
	void OnRep_RuneGrass(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, RuneGrass, OldValue);
	}

	UFUNCTION()
	void OnRep_MaxRuneGrass(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxRuneGrass, OldValue);
	}

	UFUNCTION()
	void OnRep_RuneElectric(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, RuneElectric, OldValue);
	}

	UFUNCTION()
	void OnRep_MaxRuneElectric(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxRuneElectric, OldValue);
	}

	UFUNCTION()
	void OnRep_RunePoison(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, RunePoison, OldValue);
	}

	UFUNCTION()
	void OnRep_MaxRunePoison(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxRunePoison, OldValue);
	}	

};
