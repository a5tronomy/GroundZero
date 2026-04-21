#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "OnEnemySpawnerSpawnedEnemyDelegate.h"
#include "Templates/SubclassOf.h"
#include "GzEnemySpawner.generated.h"

class AGzEnemyAI;

UCLASS()
class GROUNDZERO_API AGzEnemySpawner : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzEnemySpawner_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FOnEnemySpawnerSpawnedEnemy OnEnemySpawnerSpawnedEnemy;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AGzEnemyAI> ClassToSpawn;
    
    UPROPERTY(EditAnywhere)
    bool ManuallySpawned;
    
    UPROPERTY(SaveGame)
    bool HasSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InfiniteSpawns;
    
public:
    AGzEnemySpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AGzEnemyAI* SpawnEnemy();
    

    // Fix for true pure virtual functions not being implemented
};

