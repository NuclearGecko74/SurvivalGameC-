// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SurvivalCharacter.generated.h"

UCLASS()
class SURVIVALGAME_API ASurvivalCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASurvivalCharacter();

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* CameraComp;
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* HelmetMesh;
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* ChestMesh;
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* LegsMesh;
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* FeetMesh;
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* VestMesh;
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* HandsMesh;
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* BackpackMesh;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
