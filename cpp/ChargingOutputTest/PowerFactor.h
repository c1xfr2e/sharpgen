#ifndef __PowerFactor_H__
#define __PowerFactor_H__

#include "TestItemBase.h"

// 功率因数试验

class PowerFactor : public TestItemBase
{
public:
	PowerFactor();
	~PowerFactor();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif