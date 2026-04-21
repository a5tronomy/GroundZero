#include "GzMapWidget.h"

UGzMapWidget::UGzMapWidget() : UUserWidget(FObjectInitializer::Get()) {
    SetIsFocusable(true);
    this->ParentMapArea = NULL;
}


