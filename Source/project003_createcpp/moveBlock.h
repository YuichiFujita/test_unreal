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

	// StaticMeshコンポーネントを宣言
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *VisualMesh;	// ビジュアルメッシュ

	// メンバ変数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingProperty")
	float m_fFloatSpeed;	// 縦移動量

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// メンバ変数
	float m_fSinMove;	// サインカーブ移動量
};
