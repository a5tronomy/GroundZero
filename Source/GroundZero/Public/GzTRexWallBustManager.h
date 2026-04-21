#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzTRexWallBustManager.generated.h"

class AGzBlockingVolume;
class AGzEnemyAI;
class UAnimMontage;
class UBoxComponent;
class USceneComponent;

UCLASS()
class GROUNDZERO_API AGzTRexWallBustManager : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTRexWallBustManager_Statics;
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    USceneComponent* WallBustRoot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UBoxComponent* RoomDefiner;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    USceneComponent* TRexAligner;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool HasBustedThroughWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGzEnemyAI* TRex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* BustAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float CooldownBetweenEncounters;
    
    UPROPERTY(BlueprintReadOnly)
    float CooldownTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool NoCollisionUntilBustedThrough;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    bool CurrentlyActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGzBlockingVolume* PlayerBlockingVolume;
    
public:
    AGzTRexWallBustManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBustedThroughWall();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerInsideRoom() const;
    
    UFUNCTION(BlueprintCallable)
    void BustThroughWall();
    

    // Fix for true pure virtual functions not being implemented
};

