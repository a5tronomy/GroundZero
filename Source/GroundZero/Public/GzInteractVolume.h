#pragma once
#include "CoreMinimal.h"
#include "GzTriggerVolume.h"
#include "InteractVolumeOnSingleInteractDelegate.h"
#include "GzInteractVolume.generated.h"

UCLASS()
class GROUNDZERO_API AGzInteractVolume : public AGzTriggerVolume {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzInteractVolume_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool VolumeEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool OnceOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableTouch;
    
    UPROPERTY(BlueprintAssignable)
    FInteractVolumeOnSingleInteract OnSingleInteract;
    
public:
    AGzInteractVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled);
    
};

