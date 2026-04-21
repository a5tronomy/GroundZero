#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyEnemyTrip.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyEnemyTrip : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyEnemyTrip_Statics;
public:
    UGzAnimNotifyEnemyTrip();

};

