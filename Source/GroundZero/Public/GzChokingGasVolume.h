#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "Engine/TriggerVolume.h"
#include "GzChokingGasVolume.generated.h"

class AActor;

UCLASS()
class GROUNDZERO_API AGzChokingGasVolume : public ATriggerVolume, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzChokingGasVolume_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeInSecondsToChokePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool HandledByManager;
    
public:
    AGzChokingGasVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetDisabled(const bool Disabled);
    
    UFUNCTION()
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    

    // Fix for true pure virtual functions not being implemented
};

