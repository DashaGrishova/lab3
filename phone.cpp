#include "phone.h"

phone::phone(const string mod, const int num, const string os) : device(mod, num)
{
    setOS(os);
}

void phone::setOS(const string os)
{
    this->os = os;
}

string phone::getOS() const
{
    return os;
}

void phone::print() const
{
    cout << "Model - " << getModel();
    cout << ", OS - " << getOS();
    cout << ", Number - " <<getNumber() << endl;
}
