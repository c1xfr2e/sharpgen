#ifndef __ContactorStickingProtection_H__
#define __ContactorStickingProtection_H__

#include "TestItemBase.h"

// 接触器粘连试验

class ContactorStickingProtection : public TestItemBase
{
public:
	ContactorStickingProtection();
	~ContactorStickingProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif