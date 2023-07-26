#ifndef __OpenDoorProtection_H__
#define __OpenDoorProtection_H__

#include "TestItemBase.h"

// 开门保护试验

class OpenDoorProtection : public TestItemBase
{
public:
	OpenDoorProtection();
	~OpenDoorProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif