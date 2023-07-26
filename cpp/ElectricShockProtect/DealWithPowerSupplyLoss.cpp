#include "DealWithPowerSupplyLoss.h"

DealWithPowerSupplyLoss::DealWithPowerSupplyLoss() :
    TestItemBase(EC_ELECTRIC_SHOCK_PROTECT, int(ESP_DEAL_WITH_POWER_SUPPLY_LOSS), -1)
{

}

DealWithPowerSupplyLoss::~DealWithPowerSupplyLoss()
{

}