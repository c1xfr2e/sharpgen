#ifndef __GuideCtrlVoltInteractive_H__
#define __GuideCtrlVoltInteractive_H__

#include "TestItemBase.h"

// 控制导引电压限值测试

class GuideCtrlVoltInteractive : public TestItemBase
{
public:
	GuideCtrlVoltInteractive();
	~GuideCtrlVoltInteractive();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif