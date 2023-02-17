// Fill out your copyright notice in the Description page of Project Settings.


#include "MomaGameInstance.h"
#include "CsvActor.h"
//	UE_LOG(LogTemp, Error, TEXT("DataSuccess"));
UMomaGameInstance::UMomaGameInstance()
{
    FString CsvDataPath = TEXT("DataTable'/Game/Blueprint/FortuneCard.FortuneCard'");
    static ConstructorHelpers::FObjectFinder<UDataTable> DT_FortuneCard(*CsvDataPath);
    if (DT_FortuneCard.Succeeded())
	{

		CsvDataTable = DT_FortuneCard.Object;
	
		
	}
	
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DataFail"));
	}
}

// ㅁFName UMomaGameInstance::GetCsvName()
// {

	
// ㅁ	TArray<FName> names = CsvDataTable->GetRowNames();
	
//ㅁ 	FName CsvName = names[1];
	
// ㅁ	FString csf = names[1].ToString();

	
// ㅁ	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,
// ㅁ	FString::Printf(TEXT("OnUpdateHp CurrentHp : %s"),*csf));
	
	
// ㅁ	return CsvName;
// }

FCsvData* UMomaGameInstance::GetRowData(int32 RowName)
{
	return CsvDataTable->FindRow<FCsvData>(*FString::FromInt(RowName),TEXT(""));
}
