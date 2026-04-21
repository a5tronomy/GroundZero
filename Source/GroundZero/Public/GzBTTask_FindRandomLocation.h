#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "GzBTTask_FindRandomLocation.generated.h"

UCLASS(BlueprintType)
class GROUNDZERO_API UGzBTTask_FindRandomLocation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzBTTask_FindRandomLocation_Statics;
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
public:
    UGzBTTask_FindRandomLocation();

};

