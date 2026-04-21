#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyPlayerMelee.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyPlayerMelee : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyPlayerMelee_Statics;
public:
    UGzAnimNotifyPlayerMelee();

};

