#include "device.h"

device::device()
{
    model = "none";
    number = 0;
}

device::device(device &two):device(two.model, two.number){}

device::device(const string mod, const int num) : device()
{
    setModel(mod);
    setNumber(num);
}

string device::getModel() const
{
    return model;
}

int device::getNumber() const
{
    return number;
}

void device::setModel(const string mod)
{
    this->model = mod;
}

bool device::setNumber(const int num)
{
    if(number < 0)
        return false;
    this->number = num;
    return true;
}

device&device::operator=(const device &a)
{
    this->model = "none";
    this->number = 0;
    setModel(a.model);
    setNumber(a.number);
    return *this;
}
