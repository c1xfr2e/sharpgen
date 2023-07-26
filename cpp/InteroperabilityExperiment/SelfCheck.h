#ifndef __SelfCheck_H__
#define __SelfCheck_H__

#include "TestItemBase.h"

// 自检阶段测试

class SelfCheck : public TestItemBase
{
public:
	SelfCheck();
	~SelfCheck();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif