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
    std::string getDepartment();
    std::string getName();
    std::string getPosition();
    std::string getPhone();
    std::string getMobile();
    std::string getVitrual();
    void print();
    ~Contacts();
private:
    std::string mDepartment;//����
    std::string mName;//����
    std::string mPosition;//ְλ
    std::string mPhone;//�л�
    std::string mMobile;//�ֻ�
    std::string mVitrual;//������
};
