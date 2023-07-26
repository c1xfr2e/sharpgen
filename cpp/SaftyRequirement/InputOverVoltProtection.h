#ifndef __InputOverVoltProtection_H__
#define __InputOverVoltProtection_H__

#include "TestItemBase.h"

// 输入过压保护试验

class InputOverVoltProtection : public TestItemBase
{
public:
	InputOverVoltProtection();
	~InputOverVoltProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif