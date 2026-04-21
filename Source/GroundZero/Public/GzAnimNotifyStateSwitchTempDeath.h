#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GzAnimNotifyStateSwitchTempDeath.generated.h"

class UAnimMontage;

UCLASS(CollapseCategories, EditInlineNew)
class GROUNDZERO_API UGzAnimNotifyStateSwitchTempDeath : public UAnimNotifyState {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyStateSwitchTempDeath_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Montage;
    
public:
    UGzAnimNotifyStateSwitchTempDeath();

};

