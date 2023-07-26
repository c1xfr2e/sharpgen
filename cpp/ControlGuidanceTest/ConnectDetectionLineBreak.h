#ifndef __ConnectDetectionLineBreak_H__
#define __ConnectDetectionLineBreak_H__

#include "TestItemBase.h"

// 连接检测信号断开试验

class ConnectDetectionLineBreak : public TestItemBase
{
public:
	ConnectDetectionLineBreak();
	~ConnectDetectionLineBreak();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif