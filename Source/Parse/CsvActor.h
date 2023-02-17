// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "MomaGameInstance.h"
#include "CsvActor.generated.h"

USTRUCT(BlueprintType)
struct FCsvData : public FTableRowBase
{
    GENERATED_BODY()
    
public:
    FCsvData() : Grade(""),Card(""),Effect(""),Percentage(1) {}
    
    UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Data")
    FString Grade;
    
    UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Data")
    FString Card;
    
    UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Data")
    FString Effect;
    
    UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Data")
    int32 Percentage;
    
    
    
};




UCLASS()
class PARSE_API ACsvActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACsvActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
    UFUNCTION()
	void RowName();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
   


    void SetRowName(int32 NewRowName);

	FCsvData* CsvData;
    
   
    int32 RowData;

    //rUPROPERTY(BlueprintReadOnly)
    FString NewData;
    

};
