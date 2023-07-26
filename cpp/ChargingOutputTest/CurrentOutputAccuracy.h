#ifndef __CurrentOutputAccuracy_H__
#define __CurrentOutputAccuracy_H__

#include "TestItemBase.h"

// 输出电流设定误差试验

class CurrentOutputAccuracy : public TestItemBase
{
public:
	CurrentOutputAccuracy();
	~CurrentOutputAccuracy();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif