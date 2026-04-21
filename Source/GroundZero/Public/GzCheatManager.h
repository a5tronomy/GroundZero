#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GzCheatManager.generated.h"

UCLASS()
class GROUNDZERO_API UGzCheatManager : public UCheatManager {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzCheatManager_Statics;
public:
    UGzCheatManager();

private:
    UFUNCTION(Exec)
    void Notarget() const;
    
    UFUNCTION(Exec)
    void EnableFullBright();
    
    UFUNCTION(Exec)
    void Buddha() const;
    
};

