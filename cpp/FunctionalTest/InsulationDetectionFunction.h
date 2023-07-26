#ifndef __InsulationDetectionFunction_H__
#define __InsulationDetectionFunction_H__

#include "TestItemBase.h"

// 绝缘检测功能试验

class InsulationDetectionFunction : public TestItemBase
{
public:
	InsulationDetectionFunction();
	~InsulationDetectionFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif