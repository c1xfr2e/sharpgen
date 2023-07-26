#ifndef __InputFunction_H__
#define __InputFunction_H__

#include "TestItemBase.h"

// 输入功能试验

class InputFunction : public TestItemBase
{
public:
	InputFunction();
	~InputFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif