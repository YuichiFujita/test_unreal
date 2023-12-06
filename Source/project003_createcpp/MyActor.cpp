// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// 
void AMyActor::OnConstruction(const FTransform& transform)
{
	// �n���[���[���h��\��
	GEngine->AddOnScreenDebugMessage
	(
		(uint64)-1,							// �\���L�[
		2.0f,								// �\������
		FLinearColor::Blue.ToFColor(true),	// �t�H���g�F
		TEXT("HELLO WORLD")					// �f�o�b�O����
	);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	// �n���[���[���h��\��
	GEngine->AddOnScreenDebugMessage
	(
		(uint64)-1,							// �\���L�[
		2.0f,								// �\������
		FLinearColor::Red.ToFColor(true),	// �t�H���g�F
		TEXT("HELLO WORLD")					// �f�o�b�O����
	);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}