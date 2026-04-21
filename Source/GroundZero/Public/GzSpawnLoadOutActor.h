#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPlayerType.h"
#include "SpawnLoadOutItem.h"
#include "GzSpawnLoadOutActor.generated.h"

UCLASS()
class GROUNDZERO_API AGzSpawnLoadOutActor : public AActor {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzSpawnLoadOutActor_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ManualGiveOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CharacterToSwitchToSinglePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnLoadOutItem> LoadOutItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnLoadOutItem> ApocalypseCrisisLoadOutItemsSeoYeon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnLoadOutItem> ApocalypseCrisisLoadOutItemsEvan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnLoadOutItem> ApocalypseCrisisLoadOutItemsIsabel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnLoadOutItem> ApocalypseCrisisLoadOutItemsBlackOps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnLoadOutItem> ApocalypseCrisisLoadOutItemsKoreanSoldier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnLoadOutItem> ApocalypseCrisisLoadOutItemsMisterGhost;
    
    AGzSpawnLoadOutActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FSpawnLoadOutItem> GetLoadOutForCharacter(TEnumAsByte<EPlayerType> PlayerType);
    
};

