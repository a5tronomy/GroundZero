#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSActorSaveInterface.h"
#include "Engine/TextureDefines.h"
#include "Engine/TextureDefines.h"
#include "Engine/TriggerBox.h"
#include "Templates/SubclassOf.h"
#include "GzMapSegmentEntity.generated.h"

class AActor;
class AGzMapSegmentEntity;
class ATriggerVolume;
class UGzMapWidget;
class UTexture2D;

UCLASS()
class GROUNDZERO_API AGzMapSegmentEntity : public ATriggerBox, public IEMSActorSaveInterface {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_AGzMapSegmentEntity_Statics;
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString MapSegmentName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString MapSegmentDirectory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGzMapWidget> MapWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATriggerVolume* CustomSegmentVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool Disabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 Priority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MapRotationAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<AGzMapSegmentEntity>> LinkedCompletableSegments;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<AGzMapSegmentEntity>> RequiredOtherSegmentsToBeCompleted;
    
    AGzMapSegmentEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings);
    
    UFUNCTION(BlueprintCallable)
    void RenderMapSegment(const TEnumAsByte<TextureCompressionSettings> CompressionSettings, const TEnumAsByte<TextureMipGenSettings> MipSettings);
    
    UFUNCTION(BlueprintPure)
    bool PointOverlapsThisVolume(const FVector Point) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateMapSegmentAsset(UTexture2D* Texture);
    
    UFUNCTION(BlueprintPure)
    bool ActorOverlapsThisVolume(const AActor* Actor) const;
    

    // Fix for true pure virtual functions not being implemented
};

