#pragma once
#include "CoreMinimal.h"
#include "CharacterMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterMontage {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCharacterMontage_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* NpcMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* GunMontage;
    
    GROUNDZERO_API FCharacterMontage();
};

