#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EWristGadgetDocumentType.h"
#include "WristGadgetAudio.h"
#include "WristGadgetImage.h"
#include "WristGadgetText.h"
#include "GzWristGadgetDataAsset.generated.h"

UCLASS(BlueprintType)
class GROUNDZERO_API UGzWristGadgetDataAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzWristGadgetDataAsset_Statics;
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EWristGadgetDocumentType> DocumentType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText MetaData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FWristGadgetText> Texts;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FWristGadgetImage> Images;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FWristGadgetAudio> Audio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText TextAfterArchive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 UniqueID;
    
public:
    UGzWristGadgetDataAsset();

};

