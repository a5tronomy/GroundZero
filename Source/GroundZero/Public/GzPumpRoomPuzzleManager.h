#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzPumpRoomPuzzleManager.generated.h"

UCLASS()
class GROUNDZERO_API AGzPumpRoomPuzzleManager : public AActor, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzPumpRoomPuzzleManager_Statics;
public:
protected:
    UPROPERTY(SaveGame)
    bool GeneratedNumbers;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<int32> Numbers;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 DesiredTotal;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool PuzzleComplete;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool StageTwoPuzzle;
    
public:
    AGzPumpRoomPuzzleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    int32 GetCurrentTotal() const;
    
    UFUNCTION()
    void GenerateNumbers();
    
    UFUNCTION(BlueprintCallable)
    void FlipNumber(int32 Index);
    

    // Fix for true pure virtual functions not being implemented
};

