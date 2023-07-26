#ifndef __PrepareChargeFunction_H__
#define __PrepareChargeFunction_H__

#include "TestItemBase.h"

// 预充电功能试验

class PrepareChargeFunction : public TestItemBase
{
public:
	PrepareChargeFunction();
	~PrepareChargeFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif