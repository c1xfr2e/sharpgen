#ifndef __OutputCurMeasureAccuracy_H__
#define __OutputCurMeasureAccuracy_H__

#include "TestItemBase.h"

// 输出电流测量误差试验

class OutputCurMeasureAccuracy : public TestItemBase
{
public:
	OutputCurMeasureAccuracy();
	~OutputCurMeasureAccuracy();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif