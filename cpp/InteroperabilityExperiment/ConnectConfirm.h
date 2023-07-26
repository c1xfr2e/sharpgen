#ifndef __ConnectConfirm_H__
#define __ConnectConfirm_H__

#include "TestItemBase.h"

// 连接确认测试

class ConnectConfirm : public TestItemBase
{
public:
	ConnectConfirm();
	~ConnectConfirm();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif