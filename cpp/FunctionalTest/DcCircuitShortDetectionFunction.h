#ifndef __DcCircuitShortDetectionFunction_H__
#define __DcCircuitShortDetectionFunction_H__

#include "TestItemBase.h"

// 直流输出回路短路检测功能试验

class DcCircuitShortDetectionFunction : public TestItemBase
{
public:
	DcCircuitShortDetectionFunction();
	~DcCircuitShortDetectionFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif