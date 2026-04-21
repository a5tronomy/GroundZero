#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSCompSaveInterface.h"
#include "Components/ActorComponent.h"
#include "EActiveCheats.h"
#include "GzGameModeCheatManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzGameModeCheatManager : public UActorComponent, public IEMSCompSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzGameModeCheatManager_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float CrankedModeTimer;
    
    UPROPERTY(SaveGame)
    FVector PreviousCrankedPlayerLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CrankedTimerMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CrankedDistanceToMoveBeforeReset;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool CrankedModePaused;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    float CrankedModePausedTimer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool HasUsedCheatsBefore;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FString> ActiveCheats;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<int32> ActiveCheatsIndex;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 ActiveFilter;
    
    UGzGameModeCheatManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleCheatActive(const FString& Cheat);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterActive(const int32 Index, const bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetCheatActive(const FString& Cheat, const bool Active);
    
    UFUNCTION(BlueprintCallable)
    void ResetCrankedTimer();
    
	UFUNCTION(BlueprintImplementableEvent)
	void OnCheatActivated(const EActiveCheats Cheat, bool Active);
    
	UFUNCTION(BlueprintCallable)
	bool IsCheatActiveIndex(const TEnumAsByte<EActiveCheats> Cheat) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCheatActive(const FString& Cheat) const;
	
    

    // Fix for true pure virtual functions not being implemented
};

