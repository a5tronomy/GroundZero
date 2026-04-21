#pragma once
#include "CoreMinimal.h"
#include "CcTVRoomCamera.generated.h"

class AGzPreRenderedCamera;
class UGzWristGadgetDataAsset;

USTRUCT(BlueprintType)
struct FCcTVRoomCamera {
    GENERATED_BODY()
	friend struct Z_Construct_UScriptStruct_FCcTVRoomCamera_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<AGzPreRenderedCamera> Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FName> UseMessage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UGzWristGadgetDataAsset*> ArchiveDocumentAfterReading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool HasInspected;
    
    GROUNDZERO_API FCcTVRoomCamera();
};

