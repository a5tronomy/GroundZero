#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnSqueezeEndedDelegate.h"
#include "OnSqueezeStartedDelegate.h"
#include "GzSqueezeWallManager.generated.h"

class AGzCharacter;
class UAnimMontage;
class UBoxComponent;
class UCapsuleComponent;
class UGzInteractComponent;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzSqueezeWallManager : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSqueezeWallManager_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FOnSqueezeStarted OnSqueezeStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnSqueezeEnded OnSqueezeEnded;
    
protected:
    UPROPERTY(Instanced)
    UCapsuleComponent* EntranceCapsuleComponent;
    
    UPROPERTY()
    AGzCharacter* ActivePlayer;
    
private:
    UPROPERTY()
    bool PreviousNoTargetValue;
    
    UPROPERTY()
    bool SequenceStarted;
    
    UPROPERTY()
    bool EndingSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPipeClimb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SqueezeStartMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SqueezeEndMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SqueezeEndBackwardsMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SqueezeRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGzInteractComponent* FirstInteract;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGzInteractComponent* SecondInteract;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* FirstCapsule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* SecondCapsule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FirstExitTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SecondExitTrigger;
    
public:
    AGzSqueezeWallManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void StopSqueezeWall(const bool Backwards);
    
    UFUNCTION(BlueprintCallable)
    void StartSqueezeWall(AGzCharacter* Player);
    
protected:
    UFUNCTION()
    void PostSequenceCleanUp();
    
    UFUNCTION(BlueprintPure)
    UCapsuleComponent* FindNearestCapsule(const AGzCharacter* Character) const;
    
    UFUNCTION()
    void BeginSequence();
    
};

