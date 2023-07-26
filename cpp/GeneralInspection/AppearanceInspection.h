#ifndef __AppearanceInspection_H__
#define __AppearanceInspection_H__

#include "TestItemBase.h"

// 外观检查

class AppearanceInspection : public TestItemBase
{
public:
	AppearanceInspection();
	~AppearanceInspection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif