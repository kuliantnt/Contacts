//===============================================================
//Summary:
//          ContactsPtrPtr 类， 
//FileName:
//          ContactsPtrPtr.h
//Remarks:
//          ...
//Date:
//          2017/4/18
//Author:
//          脸脸(kuliantnt@gmail.com)
//===============================================================
#pragma once
#include "Contacts.h"
class ContactsPtr
{
public:
    /************************************************************************/
    /* @brief:构造函数                                                       */
    /************************************************************************/
    ContactsPtr();
    ContactsPtr(const std::string& str);
    ContactsPtr(const ContactsPtr& src);
    ContactsPtr(ContactsPtr&& src);
    ContactsPtr& operator= (const ContactsPtr& rhs);
    ContactsPtr& operator= (ContactsPtr&& rhs);
    /************************************************************************/
    /* @brief:get&set                                                       */
    /************************************************************************/
    std::size_t getNumber();
    std::string getDepartment();
    std::string getName();
    std::string getPosition();
    std::string getPhone();
    std::string getMobile();
    std::string getVitrual();
    void print();
    ~ContactsPtr();
    /************************************************************************/
    /* @brief:compare                                                       */
    /************************************************************************/
    friend bool operator<(const ContactsPtr& lhs, const ContactsPtr& rhs);
    friend bool operator==(const ContactsPtr& lhs, const ContactsPtr& rhs);;
private:
    Contacts* pContats;
};

