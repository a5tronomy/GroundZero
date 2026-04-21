#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GhostTrainWorldTriggerEvent.h"
#include "GzGhostTrainCart.generated.h"

class UAudioComponent;
class USceneComponent;
class USoundBase;
class USplineComponent;
class UStaticMeshComponent;

UCLASS()
class GROUNDZERO_API AGzGhostTrainCart : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzGhostTrainCart_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* TrainRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USplineComponent* TrackSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* TrainMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAudioComponent* CartAudio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator CartRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseConstantVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FGhostTrainWorldTriggerEvent> WorldTriggers;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* StartSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* StopSound;
    
    UPROPERTY(EditAnywhere)
    float TrainRideInSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float AlphaAlongTrack;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool TrainActive;
    
public:
    AGzGhostTrainCart(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartTrain();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTrainAlongTrack(const float Alpha) const;
    

    // Fix for true pure virtual functions not being implemented
};

