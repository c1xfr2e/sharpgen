#ifndef __DirectContactProtection_H__
#define __DirectContactProtection_H__

#include "TestItemBase.h"

// 直接接触防护试验

class DirectContactProtection : public TestItemBase
{
public:
	DirectContactProtection();
	~DirectContactProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif