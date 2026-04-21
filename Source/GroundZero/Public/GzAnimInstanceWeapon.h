#pragma once
#include "CoreMinimal.h"
#include "GzAnimInstance.h"
#include "GzAnimInstanceWeapon.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class GROUNDZERO_API UGzAnimInstanceWeapon : public UGzAnimInstance {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimInstanceWeapon_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    float BarrelSpinSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    bool WeaponEmpty;
    
    UPROPERTY(BlueprintReadOnly)
    bool WeaponAiming;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkeletalMeshComponent* MasterMeshComponent;
    
    UGzAnimInstanceWeapon();

    UFUNCTION(BlueprintImplementableEvent)
    void OnAttackTraceStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttackTraceHit();
    
};

