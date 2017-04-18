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
#include "Contacts.h"
#include <unordered_map>
class AccessContacts
{
public:
    AccessContacts();
    ~AccessContacts();
private:
    std::unordered_map<std::string, AccessContacts*> mMap;
};

