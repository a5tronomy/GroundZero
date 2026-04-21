#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GzAchievementManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzAchievementManager : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAchievementManager_Statics;
public:
    UPROPERTY()
    float NextAchievementHeartbeat;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasGotWorseThanGoodQualityGenomeSample;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool TookDamageAsEvan;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 NumberOfCriticalShots;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasTakenAnyDamage;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool SmashedApocalypseCrisisTimer;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 TimesSaved;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasOpenedASafe;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasVisitedAShop;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasHealed;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 ItemsPickedUp;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasFiredGunOrFlamethrowerOrRocketLauncher;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasPutItemInSafe;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool HasKilledEnemyOutsideOfForcedEncounters;
    
    UGzAchievementManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool SetEndingSeen(int32 EndingIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool SetCoinCollected(int32 CoinIndex) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeartbeat();
    
    UFUNCTION(BlueprintCallable)
    void GetEndingsStatValueAsEndings(int32 BitMask, UPARAM(Ref) TArray<bool>& EndingsSeen);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEndingsAsEndingsStatValue(UPARAM(Ref) TArray<bool>& EndingsSeen);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCoinsAsAchievementStatValue(UPARAM(Ref) TArray<bool>& Coins);
    
    UFUNCTION(BlueprintCallable)
    void GetCoinAchievementStatValueAsCoins(int32 BitMask, UPARAM(Ref) TArray<bool>& OutCoins);
    
};

