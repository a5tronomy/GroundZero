#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyEnemyAttack.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyEnemyAttack : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyEnemyAttack_Statics;
public:
    UGzAnimNotifyEnemyAttack();

};

