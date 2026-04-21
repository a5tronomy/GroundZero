#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "Engine/TriggerVolume.h"
#include "OnGzTriggerDelegate.h"
#include "GzTriggerVolume.generated.h"

class AActor;
class AGzCharacter;

UCLASS()
class GROUNDZERO_API AGzTriggerVolume : public ATriggerVolume, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTriggerVolume_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FOnGzTrigger OnGzTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InteractPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool CanInteractHoldingUseKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool CanInteractUsingHoldPulseCheck;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TriggerOnce;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    bool Destroyed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    bool TriggerUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool TriggerEnabled;
    
    UPROPERTY(EditAnywhere)
    FColor CustomBrushColour;
    
public:
    AGzTriggerVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTriggerEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerUse(AGzCharacter* Character);
    
protected:
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    

    // Fix for true pure virtual functions not being implemented
};

