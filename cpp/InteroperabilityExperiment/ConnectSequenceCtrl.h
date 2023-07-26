#ifndef __ConnectSequenceCtrl_H__
#define __ConnectSequenceCtrl_H__

#include "TestItemBase.h"

// 充电连接控制时序测试

class ConnectSequenceCtrl : public TestItemBase
{
public:
	ConnectSequenceCtrl();
	~ConnectSequenceCtrl();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif