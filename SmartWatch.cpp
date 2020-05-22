#include "SmartWatch.h"

SmartWatch::SmartWatch(const string mod, const int num, const string wh) : device(mod, num)
{
    setWorkingHours(wh);
}

void SmartWatch::setWorkingHours(const string wh)
{
    this->WorkingHours = wh;
}

string SmartWatch::getWorkingHours() const
{
    return WorkingHours;
}

void SmartWatch::print() const
{
    cout << "Model - " << getModel();
    cout << ", WorkingHours - " << getWorkingHours();
    cout << ", Number - " <<getNumber() << endl;
}
