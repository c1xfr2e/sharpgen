#ifndef __LockerInspection_H__
#define __LockerInspection_H__

#include "TestItemBase.h"

// 锁紧装置检查

class LockerInspection : public TestItemBase
{
public:
	LockerInspection();
	~LockerInspection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif