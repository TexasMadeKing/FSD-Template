#include "StatusDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

UStatusDamageBonusUpgrade::UStatusDamageBonusUpgrade() {
    this->Bonus = 3.00f;
    this->DamageClass = NULL;
}

FUpgradeValues UStatusDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> StatusEffect) {
    return FUpgradeValues{};
}


