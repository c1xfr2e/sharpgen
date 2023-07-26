#ifndef __InsulationResistance_H__
#define __InsulationResistance_H__

#include "TestItemBase.h"

// 绝缘电阻试验

class InsulationResistance : public TestItemBase
{
public:
	InsulationResistance();
	~InsulationResistance();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif