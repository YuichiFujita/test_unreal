// Fill out your copyright notice in the Description page of Project Settings.


#include "moveBlock.h"

// Sets default values
AmoveBlock::AmoveBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ���b�V���̍쐬
	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);

	// �A�Z�b�g�̐ݒ�
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	// �쐬�ɐ�������������
	if (CubeVisualAsset.Succeeded())
	{
		// �p�����[�^�ݒ�
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	// �����o�ϐ����N���A
	m_fSinMove = 0.0f;		// �T�C���J�[�u�ړ���
	m_fFloatSpeed = 2.0f;	// �c�ړ���
}

// Called when the game starts or when spawned
void AmoveBlock::BeginPlay()
{
	Super::BeginPlay();
	
	// �����o�ϐ���������
	m_fSinMove = 0.0f;		// �T�C���J�[�u�ړ���
	m_fFloatSpeed = 2.0f;	// �c�ړ���
}

// Called every frame
void AmoveBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// �ϐ���錾
	FVector location = GetActorLocation();	// �A�N�^�[�ʒu

	// �T�C���J�[�u���������Z
	m_fSinMove += 0.1f;

	// �ʒu���c�ړ�
	location.Z -= sin(m_fSinMove) * m_fFloatSpeed;

	// �A�N�^�[�̈ʒu�𔽉f
	SetActorLocation(location);
}

