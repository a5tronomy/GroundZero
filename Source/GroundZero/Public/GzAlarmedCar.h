#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "Engine/TimerHandle.h"
#include "GzAlarmedCar.generated.h"

class UMaterialInterface;
class USceneComponent;
class USoundBase;
class UStaticMeshComponent;

UCLASS()
class GROUNDZERO_API AGzAlarmedCar : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzAlarmedCar_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* MeshRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* CarMesh;
    
protected:
    UPROPERTY(EditAnywhere)
    bool AlarmCanBeTriggeredMultipleTimes;
    
    UPROPERTY(EditAnywhere)
    TArray<USoundBase*> AlarmSounds;
    
    UPROPERTY(EditAnywhere)
    float AlarmLengthInSeconds;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> IndicesOfAlarmMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* MaterialAlarmOn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* MaterialAlarmOff;
    
    UPROPERTY()
    FTimerHandle AlarmHandle;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool AlarmHasBeenTriggered;
    
public:
    AGzAlarmedCar(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void StopAlarm();
    
    UFUNCTION(BlueprintCallable)
    void StartCarAlarm();
    
    UFUNCTION()
    void FlashAlarm();
    

    // Fix for true pure virtual functions not being implemented
};

