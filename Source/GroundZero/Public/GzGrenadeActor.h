#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/TimerHandle.h"
#include "EGrenadeType.h"
#include "GzGrenadeActor.generated.h"

class UCapsuleComponent;
class UProjectileMovementComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS()
class GROUNDZERO_API AGzGrenadeActor : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzGrenadeActor_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InDeepWater;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* ExplosionRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USphereComponent* DeathSphere;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DontHurtPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DontKillPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerDamageCap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NoDeathSphere;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USphereComponent* DamageSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadialDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerDamageIfHitWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PlayerLaunchVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FuzeTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EGrenadeType> GrenadeType;
    
    UPROPERTY()
    FTimerHandle ExplodeHandle;
    
public:
    AGzGrenadeActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnExploded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredWater(const bool IsDeep);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Explode();
    
};

