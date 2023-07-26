#ifndef __BatteryDualProtectionFunction_H__
#define __BatteryDualProtectionFunction_H__

#include "TestItemBase.h"

// 蓄电池二重保护功能试验

class BatteryDualProtectionFunction : public TestItemBase
{
public:
	BatteryDualProtectionFunction();
	~BatteryDualProtectionFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif