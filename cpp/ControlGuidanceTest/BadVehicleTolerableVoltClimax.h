#ifndef __BadVehicleTolerableVoltClimax_H__
#define __BadVehicleTolerableVoltClimax_H__

#include "TestItemBase.h"

// 车辆最高允许充电总电压不匹配试验

class BadVehicleTolerableVoltClimax : public TestItemBase
{
public:
	BadVehicleTolerableVoltClimax();
	~BadVehicleTolerableVoltClimax();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif