#ifndef __PowerControl_H__
#define __PowerControl_H__

#include "TestItemBase.h"

// 功率控制试验

class PowerControl : public TestItemBase
{
public:
	PowerControl();
	~PowerControl();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif