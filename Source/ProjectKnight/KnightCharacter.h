// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "KnightCharacter.generated.h"


UCLASS(Blueprintable)
class PROJECTKNIGHT_API AKnightCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AKnightCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float money;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 chivalry;

	UFUNCTION(BlueprintCallable, Category="Money")
	FString MoneyString() const;

};
