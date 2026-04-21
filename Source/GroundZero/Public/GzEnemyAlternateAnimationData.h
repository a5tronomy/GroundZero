#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GzEnemyAlternateAnimationData.generated.h"

class UAnimBlueprint;
class UGzEnemyDataAsset;

UCLASS(BlueprintType)
class GROUNDZERO_API UGzEnemyAlternateAnimationData : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzEnemyAlternateAnimationData_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimBlueprint* AlternateAnimationInstance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGzEnemyDataAsset* AlternateEnemyDataAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGzEnemyDataAsset* AlternateEnemyCrawlDataAsset;
    
    UGzEnemyAlternateAnimationData();

};

