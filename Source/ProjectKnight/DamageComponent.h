// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "DamageComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PROJECTKNIGHT_API UDamageComponent : public UObject
{
	GENERATED_BODY()
public:

	UDamageComponent();
	UDamageComponent(float health);

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void SetRegularDamageGiven(int32 val);

	UFUNCTION(BlueprintCallable, Category = "Damage")
	int32 GetRegularDamageGiven() const;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	int32 GetPowerfulDamageGiven() const;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void SetPowerfulDamageGiven(int32 val);

	UFUNCTION(BlueprintCallable, Category = "Damage")
	int32 GetDamageSustained() const;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void SetDamageSustained(int32 val);

	UFUNCTION(BlueprintCallable, Category = "Damage", Exec)
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void SetHeatlh(float health);

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void DamageActor();

	
	UFUNCTION(BlueprintCallable, Category = "Damage")
	//************************************
	// Returns the current attack speed. They are in increments of .-5
	// Method:    GetAttackSpeed
	// FullName:  UDamageComponent::GetAttackSpeed
	// Access:    public 
	// Returns:   float
	// Qualifier: const
	//************************************
	float GetAttackSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void SetAttackSpeed(float val);
	
private:

	float health;
	int32 regularDamageGiven;
	int32 powerfulDamageGiven;
	int32 damageSustained;

	float attackSpeed;


	
};
