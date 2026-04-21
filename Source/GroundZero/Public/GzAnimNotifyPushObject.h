#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyPushObject.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyPushObject : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyPushObject_Statics;
public:
    UGzAnimNotifyPushObject();

};

