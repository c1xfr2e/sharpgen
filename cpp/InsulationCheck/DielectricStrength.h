#ifndef __DielectricStrength_H__
#define __DielectricStrength_H__

#include "TestItemBase.h"

// 介电强度试验

class DielectricStrength : public TestItemBase
{
public:
	DielectricStrength();
	~DielectricStrength();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif