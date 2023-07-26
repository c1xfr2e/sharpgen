#ifndef __EmergencyStopFunction_H__
#define __EmergencyStopFunction_H__

#include "TestItemBase.h"

// 急停功能试验

class EmergencyStopFunction : public TestItemBase
{
public:
	EmergencyStopFunction();
	~EmergencyStopFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif