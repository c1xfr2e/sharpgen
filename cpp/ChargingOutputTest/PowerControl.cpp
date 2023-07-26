#include "PowerControl.h"

PowerControl::PowerControl() :
    TestItemBase(EC_CHARGING_OUTPUT_TEST, int(COT_POWER_CONTROL), -1)
{

}

PowerControl::~PowerControl()
{

}