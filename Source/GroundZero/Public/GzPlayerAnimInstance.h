#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GzAnimInstance.h"
#include "WeaponAnimationData.h"
#include "GzPlayerAnimInstance.generated.h"

class AGzCharacter;
class USkeletalMeshComponent;

UCLASS(NonTransient)
class GROUNDZERO_API UGzPlayerAnimInstance : public UGzAnimInstance {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzPlayerAnimInstance_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool IsMindControlling;
    
    UPROPERTY(BlueprintReadOnly)
    bool OutOfBreath;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsRappelling;
    
    UPROPERTY(BlueprintReadOnly)
    float PlayerLocomotionSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PlayerDirectionalVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayerRunning;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayerAiming;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayerRidingZipline;
    
    UPROPERTY(BlueprintReadWrite)
    bool PlayerRidingBoat;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayerSliding;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayerReloading;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayerSqueezing;
    
    UPROPERTY(BlueprintReadOnly)
    float PlayerSqueezeSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    bool PlayerPushingRotatingObject;
    
    UPROPERTY(BlueprintReadWrite)
    bool PlayerPushingShortObject;
    
    UPROPERTY(BlueprintReadWrite)
    bool PlayerPushingObject;
    
    UPROPERTY(BlueprintReadWrite)
    bool PlayerPulling;
    
    UPROPERTY(BlueprintReadWrite)
    bool PlayerSwimming;
    
    UPROPERTY(BlueprintReadOnly)
    float PlayerPushingSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float PlayerYawDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D PlayerAimingAngles;
    
    UPROPERTY(BlueprintReadWrite)
    bool PlayerBlocking;
    
    UPROPERTY(BlueprintReadWrite)
    float BlockStartTime;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PlayerDirectionalVelocityNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* MasterMeshFollower;
    
    UPROPERTY(BlueprintReadOnly)
    float AnimationSwitchIdleBlockingTime;
    
public:
    UGzPlayerAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void SetRappelling(const bool Rappelling, const float Delay);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMasterMeshFollower(USkeletalMeshComponent* Parent);
    
protected:
    UFUNCTION()
    void InternalSetRappelling(const bool Rappelling);
    
    UFUNCTION(BlueprintPure)
    float GetSideSpeed(bool Normalized) const;
    
    UFUNCTION(BlueprintPure)
    FWeaponAnimationData GetSequenceForWeaponAnimationType() const;
    
    UFUNCTION(BlueprintPure)
    AGzCharacter* GetPlayerOwner() const;
    
    UFUNCTION(BlueprintPure)
    float GetForwardSpeed(bool Normalized) const;
    
};

