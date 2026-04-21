#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "GzMapWidget.generated.h"

class AGzMapArea;

UCLASS(EditInlineNew)
class GROUNDZERO_API UGzMapWidget : public UUserWidget {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzMapWidget_Statics;
public:
    UPROPERTY(BlueprintReadOnly)
    AGzMapArea* ParentMapArea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D MemeAdditionalItemOffset;
    
    UGzMapWidget();

};

