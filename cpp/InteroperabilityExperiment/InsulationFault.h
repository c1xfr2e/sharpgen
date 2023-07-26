#ifndef __InsulationFault_H__
#define __InsulationFault_H__

#include "TestItemBase.h"

// 绝缘故障测试

class InsulationFault : public TestItemBase
{
public:
	InsulationFault();
	~InsulationFault();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif