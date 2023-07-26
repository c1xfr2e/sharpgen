#ifndef __BinarySBreak_H__
#define __BinarySBreak_H__

#include "TestItemBase.h"

// 开关S断开测试

class BinarySBreak : public TestItemBase
{
public:
	BinarySBreak();
	~BinarySBreak();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif