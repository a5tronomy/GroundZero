#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GzAppearanceCostumesDataTable.generated.h"

UCLASS()
class GROUNDZERO_API UGzAppearanceCostumesDataTable : public UDataTable {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAppearanceCostumesDataTable_Statics;
public:
    UGzAppearanceCostumesDataTable();

};

