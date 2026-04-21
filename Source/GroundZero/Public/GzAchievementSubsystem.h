#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GzAchievementSubsystem.generated.h"

UCLASS()
class GROUNDZERO_API UGzAchievementSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzAchievementSubsystem_Statics;
public:
    UGzAchievementSubsystem();

};

