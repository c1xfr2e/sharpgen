#ifndef __OutputVoltOverVehiclePermit_H__
#define __OutputVoltOverVehiclePermit_H__

#include "TestItemBase.h"

// 输出电压超过车辆允许值测试

class OutputVoltOverVehiclePermit : public TestItemBase
{
public:
	OutputVoltOverVehiclePermit();
	~OutputVoltOverVehiclePermit();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif