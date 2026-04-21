#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GzShootDamageVolume.generated.h"

UCLASS()
class GROUNDZERO_API AGzShootDamageVolume : public AVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzShootDamageVolume_Statics;
public:
    AGzShootDamageVolume(const FObjectInitializer& ObjectInitializer);

};

