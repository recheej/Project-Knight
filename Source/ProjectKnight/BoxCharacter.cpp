// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectKnight.h"
#include "BoxCharacter.h"


// Sets default values
ABoxCharacter::ABoxCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoxCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoxCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ABoxCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

