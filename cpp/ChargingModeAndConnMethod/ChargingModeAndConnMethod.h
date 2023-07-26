#ifndef __ChargingModeAndConnMethod_H__
#define __ChargingModeAndConnMethod_H__

#include "TestItemBase.h"

// 充电模式和连接方式检查

class ChargingModeAndConnMethod : public TestItemBase
{
public:
	ChargingModeAndConnMethod();
	~ChargingModeAndConnMethod();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif