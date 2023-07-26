#include "DataDefine.h"

class ExperimentBase
{
public:
	ExperimentBase();
	~ExperimentBase();

private:
	int 		m_id;
	EnumCatalog m_catalogId;
	EnumCatalog m_subCatalogId;
};