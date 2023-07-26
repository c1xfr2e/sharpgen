#ifndef __CounterCurrentProtection_H__
#define __CounterCurrentProtection_H__

#include "TestItemBase.h"

// 防逆流功能试验

class CounterCurrentProtection : public TestItemBase
{
public:
	CounterCurrentProtection();
	~CounterCurrentProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif