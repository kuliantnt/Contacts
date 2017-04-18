//===============================================================
//Summary:
//          AccessContacts ¿‡£¨ 
//FileName:
//          AccessContacts.h
//Remarks:
//          ...
//Date:
//          2017/4/18
//Author:
//          ¡≥¡≥(kuliantnt@gmail.com)
//===============================================================
#pragma once
#include "ContactsPtr.h"
#include <unordered_map>
class AccessContacts
{
public:
    AccessContacts();
    AccessContacts(const AccessContacts& src);
    AccessContacts(AccessContacts&& src);
    AccessContacts& operator=(const AccessContacts& rhs);
    AccessContacts& operator=(AccessContacts&& rhs);
    ~AccessContacts();
private:
    std::unordered_map<std::string, ContactsPtr> mMap;
};