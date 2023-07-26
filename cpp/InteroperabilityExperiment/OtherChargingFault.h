#ifndef __OtherChargingFault_H__
#define __OtherChargingFault_H__

#include "TestItemBase.h"

// 其他充电故障测试

class OtherChargingFault : public TestItemBase
{
public:
	OtherChargingFault();
	~OtherChargingFault();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif