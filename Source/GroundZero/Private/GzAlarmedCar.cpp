#include "GzAlarmedCar.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AGzAlarmedCar::AGzAlarmedCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRoot"));
    this->MeshRoot = (USceneComponent*)RootComponent;
    this->CarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarMesh"));
    this->AlarmCanBeTriggeredMultipleTimes = false;
    this->AlarmLengthInSeconds = 8.00f;
    this->MaterialAlarmOn = NULL;
    this->MaterialAlarmOff = NULL;
    this->AlarmHasBeenTriggered = false;
    this->CarMesh->SetupAttachment(RootComponent);
}

void AGzAlarmedCar::StopAlarm() {
}

void AGzAlarmedCar::StartCarAlarm() {
}

void AGzAlarmedCar::FlashAlarm() {
}


