#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "ESafeMovingDirection.h"
#include "GzInteractInterface.h"
#include "OnGotSafeCorrectDelegate.h"
#include "OnGotSafeIncorrectDelegate.h"
#include "SafeCombinationInfo.h"
#include "GzSafeActor.generated.h"

UCLASS()
class GROUNDZERO_API AGzSafeActor : public AActor, public IEMSActorSaveInterface, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSafeActor_Statics;
public:
private:
    UPROPERTY()
    ESafeMovingDirection MovingDirection;
    
    UPROPERTY()
    int32 CurrentNumber;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, meta=(AllowPrivateAccess=true))
    bool SolvedPuzzle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSafeCombinationInfo> Solution;
    
    UPROPERTY(BlueprintAssignable)
    FOnGotSafeCorrect OnGotSafeCorrect;
    
    UPROPERTY(BlueprintAssignable)
    FOnGotSafeIncorrect OnGotSafeIncorrect;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<FSafeCombinationInfo> CurrentInput;
    
public:
    AGzSafeActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TurnRight();
    
    UFUNCTION(BlueprintCallable)
    void TurnLeft();
    
    UFUNCTION(BlueprintCallable)
    void ResetSafeInput();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginUsingSafe();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetRightAnswer();
    

    // Fix for true pure virtual functions not being implemented
};

