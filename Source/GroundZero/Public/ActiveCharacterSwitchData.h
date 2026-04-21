#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPlayerType.h"
#include "ActiveCharacterSwitchData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FActiveCharacterSwitchData : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FActiveCharacterSwitchData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EPlayerType> PlayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AppearanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* CustomWeaponAnimationDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* CustomWeaponDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* CustomInventoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumInventorySlots;
    
    GROUNDZERO_API FActiveCharacterSwitchData();
};

