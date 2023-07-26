#ifndef __ConnectionDevCheck_H__
#define __ConnectionDevCheck_H__

#include "TestItemBase.h"

// 充电连接装置检查

class ConnectionDevCheck : public TestItemBase
{
public:
	ConnectionDevCheck();
	~ConnectionDevCheck();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif