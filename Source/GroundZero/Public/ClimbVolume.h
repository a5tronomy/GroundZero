#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ClimbVolume.generated.h"

UCLASS()
class GROUNDZERO_API AClimbVolume : public AVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AClimbVolume_Statics;
public:
    AClimbVolume(const FObjectInitializer& ObjectInitializer);

};

