#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyCounterAttackTimer.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyCounterAttackTimer : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyCounterAttackTimer_Statics;
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float ParryTime;
    
public:
    UGzAnimNotifyCounterAttackTimer();

};

