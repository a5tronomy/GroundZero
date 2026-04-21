#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyBlackOpsMelee.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyBlackOpsMelee : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyBlackOpsMelee_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceForwardDistance;
    
    UGzAnimNotifyBlackOpsMelee();

};

