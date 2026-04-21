#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GzMonsterGagVolume.generated.h"

UCLASS()
class GROUNDZERO_API AGzMonsterGagVolume : public AVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMonsterGagVolume_Statics;
public:
    AGzMonsterGagVolume(const FObjectInitializer& ObjectInitializer);

};

