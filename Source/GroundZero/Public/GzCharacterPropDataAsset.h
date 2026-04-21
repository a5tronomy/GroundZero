#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterPropData.h"
#include "GzCharacterPropDataAsset.generated.h"

UCLASS(BlueprintType)
class GROUNDZERO_API UGzCharacterPropDataAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzCharacterPropDataAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCharacterPropData> PropData;
    
    UGzCharacterPropDataAsset();

};

