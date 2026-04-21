#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterAppearanceCostumeRow.generated.h"

class UGzPlayerAppearanceDataAsset;

USTRUCT(BlueprintType)
struct FCharacterAppearanceCostumeRow : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCharacterAppearanceCostumeRow_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGzPlayerAppearanceDataAsset* Data;
    
    GROUNDZERO_API FCharacterAppearanceCostumeRow();
};

