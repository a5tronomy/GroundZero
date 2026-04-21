#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "GzMachineGunTurret.generated.h"

class AGzCharacter;
class AGzHotAndColdVolume;
class UAIPerceptionComponent;
class UAISenseConfig_Sight;
class UAudioComponent;
class UBoxComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class GROUNDZERO_API AGzMachineGunTurret : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMachineGunTurret_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAIPerceptionComponent* AIPerceptionComponent;
    
    UPROPERTY()
    UAISenseConfig_Sight* SightConfig;
    
    UPROPERTY()
    FRotator CurrentGunRotation;
    
    UPROPERTY()
    FRotator DesiredGunRotation;
    
    UPROPERTY()
    bool BeepBlockTime;
    
    UPROPERTY()
    float LoseSightOfPlayerTime;
    
    UPROPERTY()
    AGzCharacter* ActivePlayer;
    
    UPROPERTY()
    float NextShootDamageTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsShooting;
    
    UPROPERTY()
    bool ReverseLookDirection;
    
    UPROPERTY()
    float NextReverseLookTime;
    
    UPROPERTY()
    float ShootBlockTime;
    
    UPROPERTY()
    bool TurretTurning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAudioComponent* TurretTurningAudio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* EyePosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* TurretAimingForwardReference;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* TurretRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* CollisionBox;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* GunFrameMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* GunMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* MuzzleFlashSpawnLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AGzHotAndColdVolume* HotAndColdVolume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenEachIdleTurnWhenHot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenEachIdleTurn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IdleGunTurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GunTurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GunShootSpread;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxGunRotationInAngles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBeforeStartShooting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> PhysicalBulletClass;
    
public:
    AGzMachineGunTurret(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    bool TurretIsHot() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurretIdleStartTurning();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTurretIdleFinishedTurning();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopShooting();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartShooting();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpottedPlayer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShoot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLostTrackOfPlayer();
    
};

