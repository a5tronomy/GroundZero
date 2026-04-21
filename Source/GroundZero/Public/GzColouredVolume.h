#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "GzColouredVolume.generated.h"

UCLASS()
class GROUNDZERO_API AGzColouredVolume : public AVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzColouredVolume_Statics;
public:
    UPROPERTY(EditAnywhere)
    FColor CustomBrushColour;
    
    AGzColouredVolume(const FObjectInitializer& ObjectInitializer);

};

