// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class AFTERROIDS_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
	
	AMyGameMode(const FObjectInitializer& ObjectInitializer);

	virtual void StartPlay() override;
};
