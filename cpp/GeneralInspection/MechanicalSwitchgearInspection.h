#ifndef __MechanicalSwitchgearInspection_H__
#define __MechanicalSwitchgearInspection_H__

#include "TestItemBase.h"

// 机械开关设备检查

class MechanicalSwitchgearInspection : public TestItemBase
{
public:
	MechanicalSwitchgearInspection();
	~MechanicalSwitchgearInspection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif