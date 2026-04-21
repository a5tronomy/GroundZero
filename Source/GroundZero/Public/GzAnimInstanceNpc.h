#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GzAnimInstance.h"
#include "GzAnimInstanceNpc.generated.h"

UCLASS(NonTransient)
class GROUNDZERO_API UGzAnimInstanceNpc : public UGzAnimInstance {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimInstanceNpc_Statics;
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FVector FocusLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsRunning;
    
public:
    UGzAnimInstanceNpc();

    UFUNCTION(BlueprintCallable)
    void SetRunning(const bool Running);
    
};

