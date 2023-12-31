#include "ActorTrackingWidget.h"
#include "Templates/SubclassOf.h"

UActorTrackingWidget::UActorTrackingWidget() {
    this->WorldHeightOffset = 0.00f;
    this->ScaleBy = 2000.00f;
    this->WidgetZOrder = -10;
    this->bTrackCenterOfMass = false;
    this->bHideWhenPlayerNearby = true;
    this->bHideWhenPlayerFarAway = false;
    this->LastTargetDistanceUpdate = -100.00f;
}

void UActorTrackingWidget::SetTargetComponent(USceneComponent* Component) {
}

void UActorTrackingWidget::SetTarget(AActor* Actor) {
}





AActor* UActorTrackingWidget::GetTarget() const {
    return NULL;
}

FVector2D UActorTrackingWidget::GetRenderTranslation() const {
    return FVector2D{};
}

bool UActorTrackingWidget::FindScreenPosition(APlayerController* PlayerController, FVector WorldLocation, FMargin Margin, FVector& ScreenCord, float& Angle) {
    return false;
}

UActorTrackingWidget* UActorTrackingWidget::CreateTrackingWidget(APlayerController* PlayerController, TSubclassOf<UActorTrackingWidget> WidgetType, USceneComponent* NewTargetComponent) {
    return NULL;
}


