#ifndef __AntiTheftMeasureInspection_H__
#define __AntiTheftMeasureInspection_H__

#include "TestItemBase.h"

// 防盗措施检查

class AntiTheftMeasureInspection : public TestItemBase
{
public:
	AntiTheftMeasureInspection();
	~AntiTheftMeasureInspection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif