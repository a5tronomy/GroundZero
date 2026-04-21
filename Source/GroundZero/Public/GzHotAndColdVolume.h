#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Volume.h"
#include "EHotAndColdVolumeState.h"
#include "OnHotColdStateChangedDelegate.h"
#include "GzHotAndColdVolume.generated.h"

class AActor;
class AGzInterDoor;
class ANiagaraActor;
class APostProcessVolume;
class UMusicDataAsset;

UCLASS()
class GROUNDZERO_API AGzHotAndColdVolume : public AVolume, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzHotAndColdVolume_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FOnHotColdStateChanged OnHotColdStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMusicDataAsset* RoomMusic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    APostProcessVolume* HotPostProcess;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    APostProcessVolume* ColdPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> ActorsToDisplayWhenCold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> ActorsToDisplayWhenHot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> ActorsToDisplayWhenNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ANiagaraActor*> ParticlesToDisplayWhenCold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ANiagaraActor*> ParticlesToDisplayWhenHot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ANiagaraActor*> ParticlesToDisplayWhenNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AGzInterDoor*> DoorsToDisableWhenCold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TEnumAsByte<EHotAndColdVolumeState> CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TooHotEvenWhenNormal;
    
public:
    AGzHotAndColdVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetState(TEnumAsByte<EHotAndColdVolumeState> State, bool SettingInitialState);
    
protected:
    UFUNCTION()
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void NewOnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void NewOnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    

    // Fix for true pure virtual functions not being implemented
};

