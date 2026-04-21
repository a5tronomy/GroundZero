#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GzRenderSubsystem.generated.h"

class UTextureRenderTarget2D;

UCLASS()
class GROUNDZERO_API UGzRenderSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
	friend struct Z_Construct_UClass_UGzRenderSubsystem_Statics;
public:
    UPROPERTY()
    TSoftObjectPtr<UTextureRenderTarget2D> RenderColorTarget;
    
    UPROPERTY()
    TSoftObjectPtr<UTextureRenderTarget2D> RenderDepthTarget;
    
    UPROPERTY()
    TSoftObjectPtr<UTextureRenderTarget2D> RenderFlashlightTarget;
    
    UPROPERTY()
    TSoftObjectPtr<UTextureRenderTarget2D> MainMenuTarget;
    
    UPROPERTY()
    TSoftObjectPtr<UTextureRenderTarget2D> MenuCharacterTarget;
    
    UPROPERTY()
    TSoftObjectPtr<UTextureRenderTarget2D> MenuMirrorTarget;
    
    UPROPERTY()
    TSoftObjectPtr<UTextureRenderTarget2D> MenuInspectTarget;
    
    UPROPERTY()
    int32 DefaultRenderColorTargetRes;
    
    UPROPERTY()
    int32 DefaultRenderDepthTargetRes;
    
    UPROPERTY()
    int32 DefaultFlashlightTargetRes;
    
    UPROPERTY()
    int32 DefaultMainMenuTargetTargetResX;
    
    UPROPERTY()
    int32 DefaultMainMenuTargetTargetResY;
    
    UPROPERTY()
    int32 DefaultMenuCharacterTargetRes;
    
    UPROPERTY()
    int32 DefaultMenuMirrorTargetRes;
    
    UPROPERTY()
    int32 DefaultMenuInspectTargetRes;
    
    UGzRenderSubsystem();

};

