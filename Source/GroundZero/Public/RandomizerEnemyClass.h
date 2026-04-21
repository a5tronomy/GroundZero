#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "RandomizerEnemyClass.generated.h"

class AGzEnemyAI;

USTRUCT(BlueprintType)
struct FRandomizerEnemyClass : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FRandomizerEnemyClass_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AGzEnemyAI> EnemyClass;
    
    GROUNDZERO_API FRandomizerEnemyClass();
};

