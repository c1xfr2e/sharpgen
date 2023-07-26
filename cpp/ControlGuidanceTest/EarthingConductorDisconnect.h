#ifndef __EarthingConductorDisconnect_H__
#define __EarthingConductorDisconnect_H__

#include "TestItemBase.h"

// 保护接地连续性试验

class EarthingConductorDisconnect : public TestItemBase
{
public:
	EarthingConductorDisconnect();
	~EarthingConductorDisconnect();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif