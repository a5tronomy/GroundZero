#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "GzMobilePhone.generated.h"

class UGzWristGadgetDataAsset;

UCLASS()
class GROUNDZERO_API AGzMobilePhone : public AActor, public IGzRenderInterface, public IEMSActorSaveInterface, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMobilePhone_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzWristGadgetDataAsset* ObjectDataAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString TextMessageContents;
    
    AGzMobilePhone(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

