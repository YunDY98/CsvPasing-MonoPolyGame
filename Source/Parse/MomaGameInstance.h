// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MomaGameInstance.generated.h"

/**
 * 
 */
struct FCsvData;
class UDataTable;


UCLASS()
class PARSE_API UMomaGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UMomaGameInstance();
	FName GetCsvName();
	
	FCsvData* GetRowData(int32 RowName);
	
	UPROPERTY()
	UDataTable* CsvDataTable;



	
	
	
	

};
