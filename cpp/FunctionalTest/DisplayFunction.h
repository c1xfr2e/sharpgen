#ifndef __DisplayFunction_H__
#define __DisplayFunction_H__

#include "TestItemBase.h"

// 显示功能试验

class DisplayFunction : public TestItemBase
{
public:
	DisplayFunction();
	~DisplayFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif