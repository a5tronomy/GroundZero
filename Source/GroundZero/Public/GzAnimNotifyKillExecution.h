#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyKillExecution.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyKillExecution : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyKillExecution_Statics;
public:
    UGzAnimNotifyKillExecution();

};

