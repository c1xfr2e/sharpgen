#ifndef __VoltRippleFactor_H__
#define __VoltRippleFactor_H__

#include "TestItemBase.h"

// 电压纹波因数试验

class VoltRippleFactor : public TestItemBase
{
public:
	VoltRippleFactor();
	~VoltRippleFactor();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif