#include "GatlingHotShellsBonusUpgrade.h"
#include "Templates/SubclassOf.h"

UGatlingHotShellsBonusUpgrade::UGatlingHotShellsBonusUpgrade() {
    this->DamageClass = NULL;
    this->ConversionPercentage = 0.50f;
    this->DamageIsAdded = false;
    this->TemperatureRequired = 50.00f;
}

FUpgradeValues UGatlingHotShellsBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UDamageClass* NewDamageClass) {
    return FUpgradeValues{};
}


