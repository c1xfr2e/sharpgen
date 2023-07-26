#ifndef __ChargingRequestOverBatterySpec_H__
#define __ChargingRequestOverBatterySpec_H__

#include "TestItemBase.h"

// 充电需求大于电池参数试验

class ChargingRequestOverBatterySpec : public TestItemBase
{
public:
	ChargingRequestOverBatterySpec();
	~ChargingRequestOverBatterySpec();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif