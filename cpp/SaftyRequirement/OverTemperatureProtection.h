#ifndef __OverTemperatureProtection_H__
#define __OverTemperatureProtection_H__

#include "TestItemBase.h"

// 过温保护试验

class OverTemperatureProtection : public TestItemBase
{
public:
	OverTemperatureProtection();
	~OverTemperatureProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif