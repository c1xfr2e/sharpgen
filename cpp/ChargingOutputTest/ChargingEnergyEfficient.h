#ifndef __ChargingEnergyEfficient_H__
#define __ChargingEnergyEfficient_H__

#include "TestItemBase.h"

// 效率试验

class ChargingEnergyEfficient : public TestItemBase
{
public:
	ChargingEnergyEfficient();
	~ChargingEnergyEfficient();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif