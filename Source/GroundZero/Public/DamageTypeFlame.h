#pragma once
#include "CoreMinimal.h"
#include "GzDamageType.h"
#include "DamageTypeFlame.generated.h"

UCLASS()
class GROUNDZERO_API UDamageTypeFlame : public UGzDamageType {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UDamageTypeFlame_Statics;
public:
    UDamageTypeFlame();

};

