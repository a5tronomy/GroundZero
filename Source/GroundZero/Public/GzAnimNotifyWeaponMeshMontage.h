#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GzAnimNotifyWeaponMeshMontage.generated.h"

class UAnimMontage;

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyWeaponMeshMontage : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyWeaponMeshMontage_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Montage;
    
    UGzAnimNotifyWeaponMeshMontage();

};

