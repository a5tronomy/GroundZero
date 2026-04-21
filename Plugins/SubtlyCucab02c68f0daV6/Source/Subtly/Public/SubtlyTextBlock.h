#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "SubtitleReceivedSignatureDelegate.h"
#include "SubtlyAdvancedInterface.h"
#include "SubtlyTextBlock.generated.h"

UCLASS()
class SUBTLY_API USubtlyTextBlock : public UTextBlock, public ISubtlyAdvancedInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_USubtlyTextBlock_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FSubtitleReceivedSignature OnSubtitleReceived;
    
    USubtlyTextBlock();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UpdateSubtitleText(const FText& SubtitleText) override PURE_VIRTUAL(UpdateSubtitleText,);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoUpdateText(bool Enable) override PURE_VIRTUAL(SetAutoUpdateText,);
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoUpdateText() const override PURE_VIRTUAL(GetAutoUpdateText, return false;);
    
};

