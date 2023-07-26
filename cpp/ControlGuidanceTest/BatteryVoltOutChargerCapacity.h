#ifndef __BatteryVoltOutChargerCapacity_H__
#define __BatteryVoltOutChargerCapacity_H__

#include "TestItemBase.h"

// 蓄电池电压超过充电机范围试验

class BatteryVoltOutChargerCapacity : public TestItemBase
{
public:
	BatteryVoltOutChargerCapacity();
	~BatteryVoltOutChargerCapacity();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif