// Fill out your copyright notice in the Description page of Project Settings.


#include "moveBlock.h"

// Sets default values
AmoveBlock::AmoveBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// メッシュの作成
	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);

	// アセットの設定
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	// 作成に成功したか判定
	if (CubeVisualAsset.Succeeded())
	{
		// パラメータ設定
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	// メンバ変数をクリア
	m_fSinMove = 0.0f;		// サインカーブ移動量
	m_fFloatSpeed = 2.0f;	// 縦移動量
}

// Called when the game starts or when spawned
void AmoveBlock::BeginPlay()
{
	Super::BeginPlay();
	
	// メンバ変数を初期化
	m_fSinMove = 0.0f;		// サインカーブ移動量
	m_fFloatSpeed = 2.0f;	// 縦移動量
}

// Called every frame
void AmoveBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 変数を宣言
	FVector location = GetActorLocation();	// アクター位置

	// サインカーブ向きを加算
	m_fSinMove += 0.1f;

	// 位置を縦移動
	location.Z -= sin(m_fSinMove) * m_fFloatSpeed;

	// アクターの位置を反映
	SetActorLocation(location);
}

