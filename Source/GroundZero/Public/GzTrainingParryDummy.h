#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnDummyAttackBlockedDelegate.h"
#include "OnDummyAttackParriedDelegate.h"
#include "OnDummyCounterAttackedDelegate.h"
#include "GzTrainingParryDummy.generated.h"

class UAnimMontage;
class UBoxComponent;
class UCapsuleComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USoundBase;

UCLASS()
class GROUNDZERO_API AGzTrainingParryDummy : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTrainingParryDummy_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FOnDummyAttackBlocked OnDummyAttackBlocked;
    
    UPROPERTY(BlueprintAssignable)
    FOnDummyAttackParried OnDummyAttackParried;
    
    UPROPERTY(BlueprintAssignable)
    FOnDummyCounterAttacked OnDummyCounterAttacked;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* DummyRoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCapsuleComponent* CapsuleCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* DummyMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* AttackBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceCounterAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackParryWindow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* PlayerHitSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PlayerHitMontage;
    
public:
    AGzTrainingParryDummy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnAttackedByPlayer();
    
    UFUNCTION(BlueprintCallable)
    void AttackPlayer();
    
};

