#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EDifficultyMode.h"
#include "GzDifficultyModifierInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGzDifficultyModifierInterface : public UInterface {
    GENERATED_BODY()
};

class GROUNDZERO_API IGzDifficultyModifierInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnCheckDifficulty(EDifficultyMode CurrentDifficulty);
    virtual void OnCheckDifficulty_Implementation(EDifficultyMode CurrentDifficulty) {}
    
};

