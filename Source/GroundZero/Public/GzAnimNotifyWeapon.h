#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWeaponNotifyType.h"
#include "GzAnimNotifyWeapon.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzAnimNotifyWeapon : public UAnimNotify {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAnimNotifyWeapon_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EWeaponNotifyType> NotifyType;
    
    UGzAnimNotifyWeapon();

};

