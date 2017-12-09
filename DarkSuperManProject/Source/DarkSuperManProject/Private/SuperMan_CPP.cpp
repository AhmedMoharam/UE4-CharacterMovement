// Fill out your copyright notice in the Description page of Project Settings.

#include "SuperMan_CPP.h"


// Sets default values
ASuperMan_CPP::ASuperMan_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASuperMan_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuperMan_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASuperMan_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

