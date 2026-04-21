#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "MapSegmentDataAsset.generated.h"

class UGzMapWidget;
class UTexture2D;

UCLASS(BlueprintType)
class GROUNDZERO_API UMapSegmentDataAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UMapSegmentDataAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* MapSegment;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString MapSegmentName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGzMapWidget> MapWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ActorTagToTrackPosition;
    
    UMapSegmentDataAsset();

};

