#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GradeScoreThresholdRow.generated.h"

USTRUCT(BlueprintType)
struct FGradeScoreThresholdRow : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGradeScoreThresholdRow_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeScoreWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageScoreWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimesSavedScoreWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTimespan> TimeThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> DamageThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> TimesSavedThresholds;
    
    GROUNDZERO_API FGradeScoreThresholdRow();
};

