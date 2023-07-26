#ifndef __ChargingLoadDropCtrl_H__
#define __ChargingLoadDropCtrl_H__

#include "TestItemBase.h"

// 充电负荷突减载控制试验

class ChargingLoadDropCtrl : public TestItemBase
{
public:
	ChargingLoadDropCtrl();
	~ChargingLoadDropCtrl();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif