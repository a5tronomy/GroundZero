#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GzAnimNotifyStateAttackBoneTrace.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GROUNDZERO_API UGzAnimNotifyStateAttackBoneTrace : public UAnimNotifyState {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyStateAttackBoneTrace_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StartBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EndBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Rate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsGrab;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UsingSockets;
    
public:
    UGzAnimNotifyStateAttackBoneTrace();

};

