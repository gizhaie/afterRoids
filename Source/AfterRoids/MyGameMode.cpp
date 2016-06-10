// Fill out your copyright notice in the Description page of Project Settings.

#include "AfterRoids.h"
#include "MyGameMode.h"
#include "MyCharacter.h"



AMyGameMode::AMyGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultPawnClass = AMyCharacter::StaticClass();
}

void AMyGameMode::StartPlay()
{
	Super::StartPlay();

	StartMatch();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
	}
}
