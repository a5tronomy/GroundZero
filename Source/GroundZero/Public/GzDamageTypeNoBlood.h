#pragma once
#include "CoreMinimal.h"
#include "GzDamageType.h"
#include "GzDamageTypeNoBlood.generated.h"

UCLASS()
class GROUNDZERO_API UGzDamageTypeNoBlood : public UGzDamageType {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzDamageTypeNoBlood_Statics;
public:
    UGzDamageTypeNoBlood();

};

