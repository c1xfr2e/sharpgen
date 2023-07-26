#ifndef __EmergencyStopProtection_H__
#define __EmergencyStopProtection_H__

#include "TestItemBase.h"

// 启动急停装置试验

class EmergencyStopProtection : public TestItemBase
{
public:
	EmergencyStopProtection();
	~EmergencyStopProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif