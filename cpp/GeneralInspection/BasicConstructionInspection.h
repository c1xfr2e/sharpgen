#ifndef __BasicConstructionInspection_H__
#define __BasicConstructionInspection_H__

#include "TestItemBase.h"

// 基本构成检查

class BasicConstructionInspection : public TestItemBase
{
public:
	BasicConstructionInspection();
	~BasicConstructionInspection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif