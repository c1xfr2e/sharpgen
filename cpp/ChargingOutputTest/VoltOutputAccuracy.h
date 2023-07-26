#ifndef __VoltOutputAccuracy_H__
#define __VoltOutputAccuracy_H__

#include "TestItemBase.h"

// 输出电压设定误差试验

class VoltOutputAccuracy : public TestItemBase
{
public:
	VoltOutputAccuracy();
	~VoltOutputAccuracy();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif