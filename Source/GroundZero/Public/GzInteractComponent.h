#pragma once
#include "CoreMinimal.h"
#include "EMSCompSaveInterface.h"
#include "Components/BoxComponent.h"
#include "OnHeldUsePulseDelegate.h"
#include "OnReleasedHeldUseDelegate.h"
#include "OnSingleInteractDelegate.h"
#include "GzInteractComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GROUNDZERO_API UGzInteractComponent : public UBoxComponent, public IEMSCompSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzInteractComponent_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanInteractUsingHoldPulseCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanInteractHoldingUseKey;
    
    UPROPERTY(BlueprintAssignable)
    FOnSingleInteract OnSingleInteract;
    
    UPROPERTY(BlueprintAssignable)
    FOnReleasedHeldUse OnReleasedHeldUse;
    
    UPROPERTY(BlueprintAssignable)
    FOnHeldUsePulse OnHeldUsePulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InteractPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool InteractDisabled;
    
    UGzInteractComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

