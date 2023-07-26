#ifndef __StabilizeCurrentAccuracy_H__
#define __StabilizeCurrentAccuracy_H__

#include "TestItemBase.h"

// 稳流精度试验

class StabilizeCurrentAccuracy : public TestItemBase
{
public:
	StabilizeCurrentAccuracy();
	~StabilizeCurrentAccuracy();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif