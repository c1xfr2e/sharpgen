#ifndef __NormalChargingEndding_H__
#define __NormalChargingEndding_H__

#include "TestItemBase.h"

// 正常充电结束测试

class NormalChargingEndding : public TestItemBase
{
public:
	NormalChargingEndding();
	~NormalChargingEndding();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif