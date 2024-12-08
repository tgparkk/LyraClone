// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TgExperienceDefinition.generated.h"

class UTgPawnData;

/**
 * 
 */
UCLASS()
class TGGAME_API UTgExperienceDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UTgExperienceDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * member variables
	 */
	UPROPERTY(EditDefaultsOnly, Category = Gameplay)
	TObjectPtr<UTgPawnData> DefaultPawnData;

	/**
	 * �ش� property�� �ܼ��� ��ŷ �� �������� ���ܵд�
	 * - ���� ��忡 ���� GameFeature plugin�� �ε��ϴµ� �̿� ���� ������� �����ϸ� �ȴ�
	 * - ���� ShooterCore ���� Plugin �۾��� ���, �����ϰ� �� �����̴�
	 */
	UPROPERTY(EditDefaultsOnly, Category = Gameplay)
	TArray<FString> GameFeaturesToEnable;
};
