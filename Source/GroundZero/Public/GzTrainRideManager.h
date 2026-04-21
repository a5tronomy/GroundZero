#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrainRideVista.h"
#include "GzTrainRideManager.generated.h"

class AGzTrainRideStaticMeshActor;
class UAudioComponent;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzTrainRideManager : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTrainRideManager_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* SpriteRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAudioComponent* TrainSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAudioComponent* TunnelSound;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FTrainRideVista> VistaDataAssets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TunnelFadeInDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PropLifeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MoveDirection;
    
private:
    UPROPERTY()
    TArray<AGzTrainRideStaticMeshActor*> TerrainActors;
    
public:
    AGzTrainRideManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetVistaEnabled(const int32 Index, const bool Enabled, const bool SpawnTerrainAhead);
    
private:
    UFUNCTION()
    void OnTerrainDestroyed(AActor* DestroyedActor);
    
};

