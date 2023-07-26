#ifndef __CommunicationFunction_H__
#define __CommunicationFunction_H__

#include "TestItemBase.h"

// 通信功能试验

class CommunicationFunction : public TestItemBase
{
public:
	CommunicationFunction();
	~CommunicationFunction();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif