#ifndef __MaximumConstantPower_H__
#define __MaximumConstantPower_H__

#include "TestItemBase.h"

// 最大恒功率输出试验

class MaximumConstantPower : public TestItemBase
{
public:
	MaximumConstantPower();
	~MaximumConstantPower();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif