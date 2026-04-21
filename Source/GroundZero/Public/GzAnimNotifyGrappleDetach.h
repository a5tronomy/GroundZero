#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyGrappleDetach.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyGrappleDetach : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyGrappleDetach_Statics;
public:
    UGzAnimNotifyGrappleDetach();

};

