#ifndef __InputCurrentOvershootProtection_H__
#define __InputCurrentOvershootProtection_H__

#include "TestItemBase.h"

// 输入电流过冲试验

class InputCurrentOvershootProtection : public TestItemBase
{
public:
	InputCurrentOvershootProtection();
	~InputCurrentOvershootProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif