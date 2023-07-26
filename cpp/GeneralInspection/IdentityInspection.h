#ifndef __IdentityInspection_H__
#define __IdentityInspection_H__

#include "TestItemBase.h"

// 标志检查

class IdentityInspection : public TestItemBase
{
public:
	IdentityInspection();
	~IdentityInspection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif