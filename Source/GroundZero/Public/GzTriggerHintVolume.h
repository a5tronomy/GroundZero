#pragma once
#include "CoreMinimal.h"
#include "GzTriggerVolume.h"
#include "GzTriggerHintVolume.generated.h"

UCLASS()
class GROUNDZERO_API AGzTriggerHintVolume : public AGzTriggerVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzTriggerHintVolume_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString HintName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OnlyOnGamepad;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OnlyOnKeyboard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OnlyInTankControls;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OnlyInModernControls;
    
    AGzTriggerHintVolume(const FObjectInitializer& ObjectInitializer);

};

