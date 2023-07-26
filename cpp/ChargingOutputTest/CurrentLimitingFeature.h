#ifndef __CurrentLimitingFeature_H__
#define __CurrentLimitingFeature_H__

#include "TestItemBase.h"

// 限流特性试验

class CurrentLimitingFeature : public TestItemBase
{
public:
	CurrentLimitingFeature();
	~CurrentLimitingFeature();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif