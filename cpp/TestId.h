#ifndef __PONOVO_TEST_ID_2022_H__
#define __PONOVO_TEST_ID_2022_H__
#include "DataDefine.h"

class TestId
{
private:
    EnumCatalog m_catalog;
    int         m_id;
    int         m_subId;

public:
    TestId();
    TestId( EnumCatalog catalog, int id, int subId );

    void setTestId( EnumCatalog catalog, int id, int subId );

    EnumCatalog getCatalog() const;
    int getId() const;
    int getSubId() const;
    bool IsValid() const;

    bool operator ==(const TestId& right ) const;
    bool operator <(const TestId& right  ) const;
    bool operator >(const TestId& right  ) const;

    static bool compare( const TestId& left, const TestId& right );
};

#endif
