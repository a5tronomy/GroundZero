#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyChangeSwordStance.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyChangeSwordStance : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyChangeSwordStance_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 IndexToSwitchTo;
    
public:
    UGzAnimNotifyChangeSwordStance();

};

