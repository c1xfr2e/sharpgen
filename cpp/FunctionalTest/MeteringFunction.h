#ifndef __MeteringFunction_H__
#define __MeteringFunction_H__

#include "TestItemBase.h"

// 计量功能试验

class MeteringFunction : public TestItemBase
{
public:
	MeteringFunction();
	~MeteringFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif