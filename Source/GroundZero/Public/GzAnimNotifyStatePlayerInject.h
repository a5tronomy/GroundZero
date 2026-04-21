#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyStatePlayerInject.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyStatePlayerInject : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyStatePlayerInject_Statics;
public:
    UGzAnimNotifyStatePlayerInject();

};

