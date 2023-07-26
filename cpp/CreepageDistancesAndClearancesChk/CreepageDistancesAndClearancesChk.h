#ifndef __CreepageDistancesAndClearancesChk_H__
#define __CreepageDistancesAndClearancesChk_H__

#include "TestItemBase.h"

// 电气间隔和爬电距离试验

class CreepageDistancesAndClearancesChk : public TestItemBase
{
public:
	CreepageDistancesAndClearancesChk();
	~CreepageDistancesAndClearancesChk();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif