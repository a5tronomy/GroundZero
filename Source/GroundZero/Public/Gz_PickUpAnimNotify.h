#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Gz_PickUpAnimNotify.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGz_PickUpAnimNotify : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGz_PickUpAnimNotify_Statics;
public:
    UGz_PickUpAnimNotify();

};

