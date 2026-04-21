#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GzMapArea.generated.h"

class ATriggerVolume;
class UDataTable;
class UGzMapWidget;

UCLASS()
class GROUNDZERO_API AGzMapArea : public ATriggerBox {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMapArea_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGzMapWidget* MapWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* MapSegmentsDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATriggerVolume* CustomMapAreaVolume;
    
    AGzMapArea(const FObjectInitializer& ObjectInitializer);

};

