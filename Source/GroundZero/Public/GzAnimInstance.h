#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GzAnimInstance.generated.h"

UCLASS(NonTransient)
class GROUNDZERO_API UGzAnimInstance : public UAnimInstance {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimInstance_Statics;
public:
    UGzAnimInstance();

};

