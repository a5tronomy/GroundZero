#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifySwitchTempDeath.generated.h"

class UAnimMontage;

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifySwitchTempDeath : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifySwitchTempDeath_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float duration;
    
public:
    UGzAnimNotifySwitchTempDeath();

};

