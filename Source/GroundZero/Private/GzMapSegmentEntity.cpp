#include "GzMapSegmentEntity.h"

AGzMapSegmentEntity::AGzMapSegmentEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapWidget = NULL;
    this->CustomSegmentVolume = NULL;
    this->Disabled = false;
    this->Priority = 0;
    this->MapRotationAngle = 0.00f;
}

UTexture2D* AGzMapSegmentEntity::RenderTargetCreateStaticTexture2DEditorOnly(TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings) {
    return NULL;
}

void AGzMapSegmentEntity::RenderMapSegment(const TEnumAsByte<TextureCompressionSettings> CompressionSettings, const TEnumAsByte<TextureMipGenSettings> MipSettings) {
}

bool AGzMapSegmentEntity::PointOverlapsThisVolume(const FVector Point) const {
    return false;
}

void AGzMapSegmentEntity::CreateMapSegmentAsset(UTexture2D* Texture) {
}

bool AGzMapSegmentEntity::ActorOverlapsThisVolume(const AActor* Actor) const {
    return false;
}


