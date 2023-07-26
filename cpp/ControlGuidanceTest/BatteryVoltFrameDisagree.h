#ifndef __BatteryVoltFrameDisagree_H__
#define __BatteryVoltFrameDisagree_H__

#include "TestItemBase.h"

// 蓄电池电压与通信报文不符试验

class BatteryVoltFrameDisagree : public TestItemBase
{
public:
	BatteryVoltFrameDisagree();
	~BatteryVoltFrameDisagree();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif