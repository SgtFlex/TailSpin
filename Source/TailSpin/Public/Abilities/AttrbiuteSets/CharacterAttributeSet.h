// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "CharacterAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TAILSPIN_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData HealthMax;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData HealthRegenDelay;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData HealthRegenAmount;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MoveSpeed;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData WeaponDamage;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData WeaponAttackSpeed;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData WeaponAmmoMax;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData WeaponReloadSpeed;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData SpinRate;
	
};
