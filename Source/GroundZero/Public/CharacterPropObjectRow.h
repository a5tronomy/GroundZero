#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterPropObjectRow.generated.h"

class UGzCharacterPropDataAsset;

USTRUCT(BlueprintType)
struct FCharacterPropObjectRow : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCharacterPropObjectRow_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzCharacterPropDataAsset* Data;
    
    GROUNDZERO_API FCharacterPropObjectRow();
};

