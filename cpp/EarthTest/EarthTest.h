#ifndef __EarthTest_H__
#define __EarthTest_H__

#include "TestItemBase.h"

// 接地试验

class EarthTest : public TestItemBase
{
public:
	EarthTest();
	~EarthTest();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif