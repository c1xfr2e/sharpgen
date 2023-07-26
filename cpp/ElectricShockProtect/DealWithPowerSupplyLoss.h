#ifndef __DealWithPowerSupplyLoss_H__
#define __DealWithPowerSupplyLoss_H__

#include "TestItemBase.h"

// 动力电源输入失电试验

class DealWithPowerSupplyLoss : public TestItemBase
{
public:
	DealWithPowerSupplyLoss();
	~DealWithPowerSupplyLoss();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif