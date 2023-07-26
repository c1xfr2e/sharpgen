#ifndef __CableManagementAndStorageCheck_H__
#define __CableManagementAndStorageCheck_H__

#include "TestItemBase.h"

// 电缆管理及贮存检查

class CableManagementAndStorageCheck : public TestItemBase
{
public:
	CableManagementAndStorageCheck();
	~CableManagementAndStorageCheck();

    virtual void ClearResult();
    virtual void CalcResult();
    virtual void InitBookMarkers();

    virtual bool Load();
    virtual bool Save();

    virtual int SetTestSetting();
    virtual int StartTest();
};

#endif