#ifndef __VoltLimitingFeature_H__
#define __VoltLimitingFeature_H__

#include "TestItemBase.h"

// 限压特性试验

class VoltLimitingFeature : public TestItemBase
{
public:
	VoltLimitingFeature();
	~VoltLimitingFeature();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif