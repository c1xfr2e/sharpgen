#include "DirectContactProtection.h"

DirectContactProtection::DirectContactProtection() :
    TestItemBase(EC_ELECTRIC_SHOCK_PROTECT, int(ESP_DIRECT_CONTACT_PROTECTION), -1)
{

}

DirectContactProtection::~DirectContactProtection()
{

}