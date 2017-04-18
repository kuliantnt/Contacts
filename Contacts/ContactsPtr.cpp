#include "ContactsPtr.h"



ContactsPtr::ContactsPtr()
{
    pContats = nullptr;
}

ContactsPtr::ContactsPtr(const std::string & str)
{
    pContats = new Contacts(str);
}

ContactsPtr::ContactsPtr(const ContactsPtr & src) : pContats(src.pContats)
{
}

ContactsPtr::ContactsPtr(ContactsPtr && src)
{
    using std::move;
    pContats = move(src.pContats);
}

ContactsPtr & ContactsPtr::operator=(const ContactsPtr & rhs)
{
    if (&rhs == this)
        return *this;
    delete pContats;
    pContats = rhs.pContats;
    return *this;
}

ContactsPtr & ContactsPtr::operator=(ContactsPtr && rhs)
{
    delete pContats;
    pContats = rhs.pContats;
    return *this;
}

std::size_t ContactsPtr::getNumber() {
    return pContats->getNumber();
}

std::string ContactsPtr::getDepartment() {
    return pContats->getDepartment();
}

std::string ContactsPtr::getName()
{
    return pContats->getName();
}

std::string ContactsPtr::getPosition()
{
    return pContats->getPosition();
}


std::string ContactsPtr::getPhone()
{
    return pContats ->getPhone();
}


std::string ContactsPtr::getMobile()
{
    return pContats->getMobile();
}

std::string ContactsPtr::getVitrual()
{
    return pContats->getVitrual();
}

void ContactsPtr::print()
{
    pContats->print();
}

ContactsPtr::~ContactsPtr()
{
    delete pContats;
    pContats = nullptr;
}

bool operator<(const ContactsPtr & lhs, const ContactsPtr & rhs)
{
    return *lhs.pContats < *rhs.pContats;
}

bool operator==(const ContactsPtr & lhs, const ContactsPtr & rhs)
{
    return *lhs.pContats == *rhs.pContats;
}
