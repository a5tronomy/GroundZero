#pragma once
#include "CoreMinimal.h"
#include "CutsceneCameraMesh.generated.h"

USTRUCT(BlueprintType)
struct FCutsceneCameraMesh {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCutsceneCameraMesh_Statics;
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString BoneName;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float CameraCutTime;
    
    GROUNDZERO_API FCutsceneCameraMesh();
};

