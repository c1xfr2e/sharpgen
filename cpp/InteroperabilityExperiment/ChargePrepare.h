#ifndef __ChargePrepare_H__
#define __ChargePrepare_H__

#include "TestItemBase.h"

// 充电准备就绪测试

class ChargePrepare : public TestItemBase
{
public:
	ChargePrepare();
	~ChargePrepare();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif