#ifndef __CurrentRippleParameter_H__
#define __CurrentRippleParameter_H__

#include "TestItemBase.h"

// 电流纹波试验

class CurrentRippleParameter : public TestItemBase
{
public:
	CurrentRippleParameter();
	~CurrentRippleParameter();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif