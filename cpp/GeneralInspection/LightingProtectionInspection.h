#ifndef __LightingProtectionInspection_H__
#define __LightingProtectionInspection_H__

#include "TestItemBase.h"

// 防雷措施检查

class LightingProtectionInspection : public TestItemBase
{
public:
	LightingProtectionInspection();
	~LightingProtectionInspection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif