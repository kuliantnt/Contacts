//===============================================================
//Summary:
//          Contacts 类， 
//FileName:
//          Contacts.h
//Remarks:
//          ...
//Date:
//          2017/4/17
//Author:
//          脸脸(kuliantnt@gmail.com)
//===============================================================
#pragma once
#include <string>
#include <iostream>
class Contacts
{
public:
    /************************************************************************/
    /* @brief:构造函数                                                       */
    /************************************************************************/
    Contacts();
    Contacts(const std::string &str);
    Contacts(const Contacts& src);
    Contacts(Contacts&& src);
    Contacts& operator= (const Contacts& rhs);
    Contacts& operator= (Contacts&& rhs);
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
    ~Contacts();
    /************************************************************************/
    /* @brief:compare                                                       */
    /************************************************************************/
    friend bool operator<(const Contacts& lhs, const Contacts& rhs);
    friend bool operator==(const Contacts& lhs, const Contacts& rhs);
private:
    static std::size_t mNumber;
    std::string mDepartment;//部门
    std::string mName;//姓名
    std::string mPosition;//职位
    std::string mPhone;//市话
    std::string mMobile;//手机
    std::string mVitrual;//虚拟网
};

