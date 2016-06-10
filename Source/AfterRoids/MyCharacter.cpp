// Fill out your copyright notice in the Description page of Project Settings.

#include "AfterRoids.h"
#include "MyCharacter.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("We are using MyCharacter!"));
	}
}

// Called every frame
void AMyCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	InputComponent->BindAxis("MoveX", this, &AMyCharacter::MoveX);
	InputComponent->BindAxis("MoveY", this, &AMyCharacter::MoveY);
	InputComponent->BindAxis("LookX", this, &AMyCharacter::AddControllerYawInput);
	InputComponent->BindAxis("LookY", this, &AMyCharacter::AddControllerPitchInput);
}

void AMyCharacter::MoveX(float value)
{
	if ((Controller != NULL) && (value != 0.0f))
	{
		FRotator Rotation = Controller->GetControlRotation();
		if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling())
		{
			Rotation.Pitch = 0.0f;
		}
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, value);
	}
}

void AMyCharacter::MoveY(float value)
{
	if ((Controller != NULL) && (value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		AddMovementInput(Direction, value);
	}
}

//TODO
void AMyCharacter::LookX(float value)
{

}

void AMyCharacter::LookY(float value)
{

}