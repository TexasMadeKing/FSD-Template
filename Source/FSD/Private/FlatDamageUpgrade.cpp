#include "FlatDamageUpgrade.h"
#include "Templates/SubclassOf.h"

UFlatDamageUpgrade::UFlatDamageUpgrade() {
    this->Damage = 0.00f;
    this->DamageClass = NULL;
    this->RequiredClass = NULL;
    this->MergeWithOtherFlatDamageUpgrades = true;
    this->Condition = NULL;
}

FUpgradeValues UFlatDamageUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UDamageClass* NewDamageClass) {
    return FUpgradeValues{};
}


