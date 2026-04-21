#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyFootstep.generated.h"

class UDataTable;

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyFootstep : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyFootstep_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* DataTableOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DownwardTraceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsSprinting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeOverride;
    
    UGzAnimNotifyFootstep();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OverrideDataTable(UDataTable* NewTable) const;
    
};

