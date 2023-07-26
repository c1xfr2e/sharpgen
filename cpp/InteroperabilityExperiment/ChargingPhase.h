#ifndef __ChargingPhase_H__
#define __ChargingPhase_H__

#include "TestItemBase.h"

// 充电阶段测试

class ChargingPhase : public TestItemBase
{
public:
	ChargingPhase();
	~ChargingPhase();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif