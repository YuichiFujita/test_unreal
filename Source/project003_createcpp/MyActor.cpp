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
	// ハローワールドを表示
	GEngine->AddOnScreenDebugMessage
	(
		(uint64)-1,							// 表示キー
		2.0f,								// 表示時間
		FLinearColor::Blue.ToFColor(true),	// フォント色
		TEXT("HELLO WORLD")					// デバッグ文字
	);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	// ハローワールドを表示
	GEngine->AddOnScreenDebugMessage
	(
		(uint64)-1,							// 表示キー
		2.0f,								// 表示時間
		FLinearColor::Red.ToFColor(true),	// フォント色
		TEXT("HELLO WORLD")					// デバッグ文字
	);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
