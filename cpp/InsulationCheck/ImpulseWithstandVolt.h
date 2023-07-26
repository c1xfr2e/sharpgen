#ifndef __ImpulseWithstandVolt_H__
#define __ImpulseWithstandVolt_H__

#include "TestItemBase.h"

// 冲击耐压试验

class ImpulseWithstandVolt : public TestItemBase
{
public:
	ImpulseWithstandVolt();
	~ImpulseWithstandVolt();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif