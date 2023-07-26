#ifndef __OutputCurrentShock_H__
#define __OutputCurrentShock_H__

#include "TestItemBase.h"

// 输出冲击电流试验

class OutputCurrentShock : public TestItemBase
{
public:
	OutputCurrentShock();
	~OutputCurrentShock();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif