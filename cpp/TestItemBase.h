#ifndef __PONOVO_TEST_ITEM_BASE_2022_H__
#define __PONOVO_TEST_ITEM_BASE_2022_H__
#include "DataDefine.h"
#include "TestId.h"
#include <QVector>
#include <QString>

class TestItemBase
{
private:
    TestId             m_testId;
    bool               m_result;
    bool               m_bSelect;
    EnumCheckStage     m_stage;


public:
    TestItemBase();
    TestItemBase( EnumCatalog catalog, int id, int subId  );

    void setTestId( EnumCatalog catalog, int id, int subId );
    void setTestId( const TestId& id );
    const TestId& getTestId() const;

    void setCheckStage( EnumCheckStage stage );
    EnumCheckStage getCheckStage(  ) const;

    void setSelect( bool bSel );
    bool IsSelect( ) const;

    void setResult( bool bRet );
    bool getResult( ) const;



    virtual void ClearResult( ) = 0;
    virtual void CalcResult( ) = 0;
    virtual void InitBookMarkers( ) = 0;

    virtual bool Load( ) = 0;
    virtual bool Save( ) = 0;

    virtual int SetTestSetting( ) = 0;
    virtual int StartTest( ) = 0;

};

#endif
