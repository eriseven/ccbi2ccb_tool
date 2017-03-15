#ifndef __CCLONGLONG_H__
#define __CCLONGLONG_H__

#include "CCObject.h"

NS_CC_BEGIN

/**
 * @addtogroup data_structures
 * @{
 */

class CC_DLL CCLongLong : public CCObject
{
public:
    CCLongLong(long long v)
        : m_nValue(v) {}
    long long getValue() const {return m_nValue;}

    static CCLongLong* create(long long v)
    {
        CCLongLong* pRet = new CCLongLong(v);
        pRet->autorelease();
        return pRet;
    }
	
	virtual CCObject* copyWithZone(CCZone* pZone){
		CCAssert(pZone == NULL, "CCString should not be inherited.");
		CCLongLong* pLongLong = new CCLongLong(getValue());
		return pLongLong;
	}
private:
    long long m_nValue;
};

// end of data_structure group
/// @}

NS_CC_END

#endif /* __CCLONGLONG_H__ */
