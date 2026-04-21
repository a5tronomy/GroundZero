#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyOpenDoor.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyOpenDoor : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyOpenDoor_Statics;
public:
    UGzAnimNotifyOpenDoor();

};

