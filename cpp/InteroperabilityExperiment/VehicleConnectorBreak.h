#ifndef __VehicleConnectorBreak_H__
#define __VehicleConnectorBreak_H__

#include "TestItemBase.h"

// 车辆接口断开测试

class VehicleConnectorBreak : public TestItemBase
{
public:
	VehicleConnectorBreak();
	~VehicleConnectorBreak();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif