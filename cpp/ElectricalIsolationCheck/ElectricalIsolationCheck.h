#ifndef __ElectricalIsolationCheck_H__
#define __ElectricalIsolationCheck_H__

#include "TestItemBase.h"

// 电气隔离检查

class ElectricalIsolationCheck : public TestItemBase
{
public:
	ElectricalIsolationCheck();
	~ElectricalIsolationCheck();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif