#ifndef __OutputShortProtection_H__
#define __OutputShortProtection_H__

#include "TestItemBase.h"

// 输出短路保护试验

class OutputShortProtection : public TestItemBase
{
public:
	OutputShortProtection();
	~OutputShortProtection();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif