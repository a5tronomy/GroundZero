#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyEnemyFootstep.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyEnemyFootstep : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyEnemyFootstep_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseRunningSound;
    
    UGzAnimNotifyEnemyFootstep();

};

