// Fill out your copyright notice in the Description page of Project Settings.


#include "shooter.h"

// Sets default values
Ashooter::Ashooter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Ashooter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ashooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Ashooter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

