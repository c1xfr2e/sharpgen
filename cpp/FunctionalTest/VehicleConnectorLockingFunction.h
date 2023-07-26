#ifndef __VehicleConnectorLockingFunction_H__
#define __VehicleConnectorLockingFunction_H__

#include "TestItemBase.h"

// 车辆插头锁止功能试验

class VehicleConnectorLockingFunction : public TestItemBase
{
public:
	VehicleConnectorLockingFunction();
	~VehicleConnectorLockingFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif