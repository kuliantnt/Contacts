#include "AccessContacts.h"



AccessContacts::AccessContacts()
{
}

AccessContacts::AccessContacts(const AccessContacts & src)
{
    mMap = src.mMap;
}

AccessContacts::AccessContacts(AccessContacts && src)
{
    mMap = std::move(src.mMap);
}

AccessContacts & AccessContacts::operator=(const AccessContacts & rhs)
{
    if (&rhs == this)
        return *this;
    mMap = rhs.mMap;
    return *this;
}

AccessContacts & AccessContacts::operator=(AccessContacts && rhs)
{
    mMap = std::move(rhs.mMap);
}


AccessContacts::~AccessContacts()
{
}
