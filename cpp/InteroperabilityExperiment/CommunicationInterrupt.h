#ifndef __CommunicationInterrupt_H__
#define __CommunicationInterrupt_H__

#include "TestItemBase.h"

// 通讯中断测试

class CommunicationInterrupt : public TestItemBase
{
public:
	CommunicationInterrupt();
	~CommunicationInterrupt();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif