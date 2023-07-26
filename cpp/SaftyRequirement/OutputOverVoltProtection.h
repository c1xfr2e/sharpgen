#ifndef __OutputOverVoltProtection_H__
#define __OutputOverVoltProtection_H__

#include "TestItemBase.h"

// 输出过压保护试验

class OutputOverVoltProtection : public TestItemBase
{
public:
	OutputOverVoltProtection();
	~OutputOverVoltProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif