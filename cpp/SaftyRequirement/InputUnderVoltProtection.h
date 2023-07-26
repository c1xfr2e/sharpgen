#ifndef __InputUnderVoltProtection_H__
#define __InputUnderVoltProtection_H__

#include "TestItemBase.h"

// 输入欠压保护试验

class InputUnderVoltProtection : public TestItemBase
{
public:
	InputUnderVoltProtection();
	~InputUnderVoltProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif