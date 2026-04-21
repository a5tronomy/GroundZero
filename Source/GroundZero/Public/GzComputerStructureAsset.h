#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ComputerFileConfiguration.h"
#include "ComputerFolderConfiguration.h"
#include "GzComputerStructureAsset.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class GROUNDZERO_API UGzComputerStructureAsset : public UDataAsset {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzComputerStructureAsset_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* LockScreen;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Password;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SecurityQuestionOne;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SecurityQuestionTwo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SecurityQuestionThree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SecurityQuestionAnswerOne;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SecurityQuestionAnswerTwo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SecurityQuestionAnswerThree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* DesktopBackground;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FComputerFileConfiguration> DesktopFiles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FComputerFolderConfiguration> DesktopFolders;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ShutterProgramColumn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ShutterProgramRow;
    
    UGzComputerStructureAsset();

};

