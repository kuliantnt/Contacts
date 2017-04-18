#include "Contacts.h"
#include <sstream>



Contacts::Contacts()
{
}

Contacts::Contacts(const std::string & str)
{
    std::stringstream ss(str);
    std::string temp;
    if (getline(ss, temp, ',')) 
    {
        mDepartment = temp;
    }
    if (getline(ss, temp, ','))
    {
        mName = temp;
    }
    if(getline(ss, temp, ','))
    {
        mPosition = temp;
    }
    if (getline(ss, temp, ','))
    {
        mPhone = temp;
    }
    if (getline(ss, temp, ',')) 
    {
        mMobile = temp;
    }
    if (getline(ss, temp))
    {
        mVitrual = temp;
    }

}

Contacts::Contacts(const Contacts & src)
{
    mDepartment = src.mDepartment;
    mName = src.mName;
    mPosition = src.mPosition;
    mPhone = src.mPhone;
    mMobile = src.mMobile;
    mVitrual = src.mVitrual;
}

Contacts::Contacts(Contacts && src)
{
    using std::move;
    mDepartment = move(src.mDepartment);
    mName = move(src.mName);
    mPosition = move(src.mPosition);
    mPhone = move(src.mPhone);
    mMobile = move(src.mMobile);
    mVitrual = move(src.mVitrual);
}

Contacts & Contacts::operator=(const Contacts & rhs)
{
    if (&rhs == this)
        return *this;
    mDepartment = rhs.mDepartment;
    mName = rhs.mName;
    mPosition = rhs.mPosition;
    mPhone = rhs.mPhone;
    mMobile = rhs.mMobile;
    mVitrual = rhs.mVitrual;
    return *this;
}

Contacts & Contacts::operator=(Contacts && rhs)
{
    using std::move;
    mDepartment = move(rhs.mDepartment);
    mName = move(rhs.mName);
    mPosition = move(rhs.mPosition);
    mPhone = move(rhs.mPhone);
    mMobile = move(rhs.mMobile);
    mVitrual = move(rhs.mVitrual);
    return *this;
}

std::string Contacts::getDepartment() {
    return mDepartment;
}

 std::string Contacts::getName() {
    return mName;
}

 std::string Contacts::getPosition()
 {
     return mPosition;
 }

 //std::string Contacts::getOffice()
 //{
 //    return mOffice;
 //}

 std::string Contacts::getPhone()
 {
     return mPhone;
 }

 //std::string Contacts::getSystemNumber()
 //{
 //    return mSystemNumber;
 //}

 //std::string Contacts::getHomeNumber()
 //{
 //    return mHomeNumber;
 //}

 std::string Contacts::getMobile()
 {
     return mMobile;
 }

 std::string Contacts::getVitrual()
 {
     return mVitrual;
 }

 void Contacts::print()
 {
     std::cout << "����:" << mDepartment << std::endl
         << "����:" << mName << std::endl
         << "ְ��:" << mPosition << std::endl
         //<< "�칫��:" << mOffice << std::endl
         << "�л�:" << mPhone << std::endl
         //<< "ϵͳ��:" << mSystemNumber << std::endl
         //<< "լ��:" << mHomeNumber << std::endl
         << "�ֻ�:" << mMobile << std::endl
         << "������:" << mVitrual << std::endl;
 }


Contacts::~Contacts()
{
}
