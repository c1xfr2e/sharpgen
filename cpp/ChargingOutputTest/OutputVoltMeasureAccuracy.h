#ifndef __OutputVoltMeasureAccuracy_H__
#define __OutputVoltMeasureAccuracy_H__

#include "TestItemBase.h"

// 输出电压测量误差试验

class OutputVoltMeasureAccuracy : public TestItemBase
{
public:
	OutputVoltMeasureAccuracy();
	~OutputVoltMeasureAccuracy();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif