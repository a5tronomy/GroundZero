#pragma once
#include "CoreMinimal.h"
#include "GzColouredVolume.h"
#include "GzBlockingVolume.generated.h"

UCLASS()
class GROUNDZERO_API AGzBlockingVolume : public AGzColouredVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzBlockingVolume_Statics;
public:
    AGzBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

