#pragma once
#include "CoreMinimal.h"
#include "ChaosChatData.generated.h"

USTRUCT(BlueprintType)
struct FChaosChatData {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FChaosChatData_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LoggedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString WalletId;
    
    GROUNDZERO_API FChaosChatData();
};

