// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectKnight.h"
#include "KnightCharacter.h"


// Sets default values
AKnightCharacter::AKnightCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->health = 1.0;
	this->money = 0.00;
}

// Called when the game starts or when spawned
void AKnightCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKnightCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AKnightCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

FString AKnightCharacter::MoneyString() const
{
	return FString::FromInt(this->money);
}

void AKnightCharacter::Respawn()
{
	this->Reset();
}

