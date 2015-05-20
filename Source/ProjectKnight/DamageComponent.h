// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "DamageComponent.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTKNIGHT_API UDamageComponent : public UObject
{
	GENERATED_BODY()

	UDamageComponent();
	UDamageComponent(int32 health);

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

	UFUNCTION(BlueprintCallable, Category = "Damage")
	int32 GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void SetHeatlh(int32 health);

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void DamageActor();
	
private:

	int32 health;
	int32 regularDamageGiven;
	int32 powerfulDamageGiven;
	int32 damageSustained;
	
	
};
