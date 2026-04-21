#pragma once
#include "CoreMinimal.h"
#include "EMSActorSaveInterface.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzRenderInterface.h"
#include "GzDocument.generated.h"

class UGzWristGadgetDataAsset;

UCLASS()
class GROUNDZERO_API AGzDocument : public AActor, public IGzRenderInterface, public IEMSActorSaveInterface, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzDocument_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzWristGadgetDataAsset* ObjectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDocumentLocked;
    
    AGzDocument(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

