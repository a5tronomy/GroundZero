#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "UfoEndingLevelSpawnData.h"
#include "GzUfoEndingLevelPopulator.generated.h"

UCLASS()
class GROUNDZERO_API AGzUfoEndingLevelPopulator : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzUfoEndingLevelPopulator_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CSVFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, TSubclassOf<AActor>> SpawnMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FUfoEndingLevelSpawnData> SpawnedData;
    
    AGzUfoEndingLevelPopulator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LoadAndProcessCSV();
    
};

