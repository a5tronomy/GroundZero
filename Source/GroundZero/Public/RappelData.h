#pragma once
#include "CoreMinimal.h"
#include "RappelData.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FRappelData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FRappelData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceToDescendBeforeDisconnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* StartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* DescendMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* EndMontage;
    
    GROUNDZERO_API FRappelData();
};

