#ifndef __MeasureParamUpdateRate_H__
#define __MeasureParamUpdateRate_H__

#include "TestItemBase.h"

// 测量值更新时间试验

class MeasureParamUpdateRate : public TestItemBase
{
public:
	MeasureParamUpdateRate();
	~MeasureParamUpdateRate();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif