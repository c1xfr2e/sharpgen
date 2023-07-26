#ifndef __CutOffPowerSupplyFuncInspection_H__
#define __CutOffPowerSupplyFuncInspection_H__

#include "TestItemBase.h"

// 供电设备断电控制功能检查

class CutOffPowerSupplyFuncInspection : public TestItemBase
{
public:
	CutOffPowerSupplyFuncInspection();
	~CutOffPowerSupplyFuncInspection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif