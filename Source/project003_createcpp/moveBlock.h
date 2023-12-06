// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "moveBlock.generated.h"

UCLASS()
class PROJECT003_CREATECPP_API AmoveBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AmoveBlock();

	// StaticMesh�R���|�[�l���g��錾
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *VisualMesh;	// �r�W���A�����b�V��

	// �����o�ϐ�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingProperty")
	float m_fFloatSpeed;	// �c�ړ���

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// �����o�ϐ�
	float m_fSinMove;	// �T�C���J�[�u�ړ���
};
