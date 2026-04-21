#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GzAnimNotifyStatePlayerMelee.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GROUNDZERO_API UGzAnimNotifyStatePlayerMelee : public UAnimNotifyState {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyStatePlayerMelee_Statics;
public:
    UGzAnimNotifyStatePlayerMelee();

};

