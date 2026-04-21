#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GzMapRenderBlacklist.generated.h"

class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FGzMapRenderBlacklist : public FTableRowBase {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FGzMapRenderBlacklist_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UClass* Blueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsBlacklisted;
    
    GROUNDZERO_API FGzMapRenderBlacklist();
};

