// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TgPawnData.generated.h"

/**
 * 
 */
UCLASS()
class TGGAME_API UTgPawnData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UTgPawnData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};
