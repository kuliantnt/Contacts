//===============================================================
//Summary:
//          Contacts �࣬ 
//FileName:
//          Contacts.h
//Remarks:
//          ...
//Date:
//          2017/4/17
//Author:
//          ����(kuliantnt@gmail.com)
//===============================================================
#pragma once
#include <string>
#include <iostream>
class Contacts
{
public:
    /************************************************************************/
    /* @brief:���캯��                                                       */
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
    std::string mDepartment;//����
    std::string mName;//����
    std::string mPosition;//ְλ
    std::string mPhone;//�л�
    std::string mMobile;//�ֻ�
    std::string mVitrual;//������
};

