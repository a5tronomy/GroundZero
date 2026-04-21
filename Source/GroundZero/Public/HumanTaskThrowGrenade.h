#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "HumanTaskThrowGrenade.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHumanTaskThrowGrenade {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FHumanTaskThrowGrenade_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> GrenadeToThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocationToThrowTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThrowingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZOffset;
    
    GROUNDZERO_API FHumanTaskThrowGrenade();
};

