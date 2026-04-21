#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "MalformationCustomKeyBinding.generated.h"

USTRUCT(BlueprintType)
struct FMalformationCustomKeyBinding {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FMalformationCustomKeyBinding_Statics;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FInputActionKeyMapping KeyMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FInputAxisKeyMapping AxisKeyMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName AxisActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FKey Key;
    
    GROUNDZERO_API FMalformationCustomKeyBinding();
};

