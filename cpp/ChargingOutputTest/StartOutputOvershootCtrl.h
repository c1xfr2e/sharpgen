#ifndef __StartOutputOvershootCtrl_H__
#define __StartOutputOvershootCtrl_H__

#include "TestItemBase.h"

// 启动输出过冲试验

class StartOutputOvershootCtrl : public TestItemBase
{
public:
	StartOutputOvershootCtrl();
	~StartOutputOvershootCtrl();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif