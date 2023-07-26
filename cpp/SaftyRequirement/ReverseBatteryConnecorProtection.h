#ifndef __ReverseBatteryConnecorProtection_H__
#define __ReverseBatteryConnecorProtection_H__

#include "TestItemBase.h"

// 蓄电池反接试验

class ReverseBatteryConnecorProtection : public TestItemBase
{
public:
	ReverseBatteryConnecorProtection();
	~ReverseBatteryConnecorProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif