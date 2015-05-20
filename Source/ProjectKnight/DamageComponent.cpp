// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectKnight.h"
#include "DamageComponent.h"




UDamageComponent::UDamageComponent(int32 health)
{
	this->health = health;
}

UDamageComponent::UDamageComponent()
{

}

void UDamageComponent::SetRegularDamageGiven(int32 damage)
{
	this->regularDamageGiven = damage;
}

int32 UDamageComponent::GetRegularDamageGiven() const
{
	return this->regularDamageGiven;
}

int32 UDamageComponent::GetPowerfulDamageGiven() const
{
	return this->powerfulDamageGiven;
}

void UDamageComponent::SetPowerfulDamageGiven(int32 val)
{
	this->powerfulDamageGiven = val;
}

int32 UDamageComponent::GetDamageSustained() const
{
	return this->damageSustained;
}

void UDamageComponent::SetDamageSustained(int32 val)
{
	this->damageSustained = val;
}

int32 UDamageComponent::GetHealth() const
{
	return this->health;
}

void UDamageComponent::SetHeatlh(int32 health)
{
	this->health = health;
}

void UDamageComponent::DamageActor()
{
	this->health -= damageSustained;
}
