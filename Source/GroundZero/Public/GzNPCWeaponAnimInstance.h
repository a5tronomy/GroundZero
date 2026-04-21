#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GzNPCWeaponAnimInstance.generated.h"

UCLASS(NonTransient)
class GROUNDZERO_API UGzNPCWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzNPCWeaponAnimInstance_Statics;
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Magazine;
    
    UGzNPCWeaponAnimInstance();

};

