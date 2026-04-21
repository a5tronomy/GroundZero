#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "GzGasLeakVolume.generated.h"

class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzGasLeakVolume : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzGasLeakVolume_Statics;
public:
    UPROPERTY()
    bool HasExploded;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool VolumeEnabled;
    
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeExplosion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* GasRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
public:
    AGzGasLeakVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVolumeEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVolumeStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnFiredWeaponInVolume();
    
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ExplodeGasLeak();
    

    // Fix for true pure virtual functions not being implemented
};

