#ifndef __OutputCurrentStopRate_H__
#define __OutputCurrentStopRate_H__

#include "TestItemBase.h"

// 输出电流停止速率试验

class OutputCurrentStopRate : public TestItemBase
{
public:
	OutputCurrentStopRate();
	~OutputCurrentStopRate();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif