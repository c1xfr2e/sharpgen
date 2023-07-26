#ifndef __ChargingControlFunction_H__
#define __ChargingControlFunction_H__

#include "TestItemBase.h"

// 充电控制功能试验

class ChargingControlFunction : public TestItemBase
{
public:
	ChargingControlFunction();
	~ChargingControlFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif