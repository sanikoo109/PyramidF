// Fill out your copyright notice in the Description page of Project Settings.


#include "PyraCharacter.h"

// Sets default values
APyraCharacter::APyraCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APyraCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APyraCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APyraCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

