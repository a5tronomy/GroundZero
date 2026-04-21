#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GzInteractInterface.h"
#include "GzFuncButton.generated.h"

UCLASS()
class GROUNDZERO_API AGzFuncButton : public AActor, public IGzInteractInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzFuncButton_Statics;
public:
    AGzFuncButton(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

