#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "SubtitleReceivedSignatureDelegate.h"
#include "SubtlyAdvancedInterface.h"
#include "SubtlyRichTextBlock.generated.h"

UCLASS()
class SUBTLY_API USubtlyRichTextBlock : public URichTextBlock, public ISubtlyAdvancedInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_USubtlyRichTextBlock_Statics;
public:
    UPROPERTY(BlueprintAssignable)
    FSubtitleReceivedSignature OnSubtitleReceived;
    
    USubtlyRichTextBlock();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UpdateSubtitleText(const FText& SubtitleText) override PURE_VIRTUAL(UpdateSubtitleText,);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoUpdateText(bool Enable) override PURE_VIRTUAL(SetAutoUpdateText,);
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoUpdateText() const override PURE_VIRTUAL(GetAutoUpdateText, return false;);
    
};

