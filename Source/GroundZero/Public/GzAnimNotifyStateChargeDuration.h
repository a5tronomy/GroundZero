#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GzAnimNotifyStateChargeDuration.generated.h"

class UAnimMontage;

UCLASS(CollapseCategories, EditInlineNew)
class GROUNDZERO_API UGzAnimNotifyStateChargeDuration : public UAnimNotifyState {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyStateChargeDuration_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ChargeMontage;
    
    UGzAnimNotifyStateChargeDuration();

};

