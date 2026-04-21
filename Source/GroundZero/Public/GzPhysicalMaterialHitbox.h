#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "EEnemyHitbox.h"
#include "GzPhysicalMaterialHitbox.generated.h"

UCLASS(CollapseCategories)
class GROUNDZERO_API UGzPhysicalMaterialHitbox : public UPhysicalMaterial {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzPhysicalMaterialHitbox_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EEnemyHitbox> HitBox;
    
    UGzPhysicalMaterialHitbox();

};

