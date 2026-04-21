#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChapterStatData.h"
#include "PlayerStatsManagerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UPlayerStatsManagerComponent : public UActorComponent {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UPlayerStatsManagerComponent_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 ActiveChapterIndex;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FChapterStatData> ChapterStats;
    
    UPlayerStatsManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void IncrementGenomePointsEarned(const int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void GoToNextChapter();
    
    UFUNCTION(BlueprintPure)
    FChapterStatData GetOverallStats();
    
};

