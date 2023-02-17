// Fill out your copyright notice in the Description page of Project Settings.


#include "CsvActor.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/GameplayStatics.h"



void ACsvActor::RowName()
{
	UMomaGameInstance* gameInstance = Cast<UMomaGameInstance>(GetGameInstance());
	CsvData = gameInstance->GetRowData(RowData);

	NewData = CsvData->Grade;


	
}



void ACsvActor::SetRowName(int32 NewRowName)
{
	RowData = NewRowName;
	RowName();
}


// Sets default values
ACsvActor::ACsvActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACsvActor::BeginPlay()
{
	Super::BeginPlay();

	UMomaGameInstance* gameInstance = Cast<UMomaGameInstance>(GetGameInstance());
	int32 RandomInt = FMath::RandRange(1, 14);
	FCsvData* data = gameInstance->GetRowData(RandomInt);
	
	
	NewData = data->Card;

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%s"),*NewData));
		
	NewData = data->Effect;

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%s"),*NewData));
	
}

// Called every frame
void ACsvActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

