#ifndef __StabilizeVoltAccuracy_H__
#define __StabilizeVoltAccuracy_H__

#include "TestItemBase.h"

// 稳压精度试验

class StabilizeVoltAccuracy : public TestItemBase
{
public:
	StabilizeVoltAccuracy();
	~StabilizeVoltAccuracy();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif