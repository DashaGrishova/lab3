#ifndef LAPTOP_H_INCLUDED
#define LAPTOP_H_INCLUDED
#include "device.h"

class laptop : public device
{
    string cpu;
public:
    laptop(const string mod, const int num, const string cpu);

    void print() const override;

    void setCPU(const string cpu);
    string getCPU() const;
    using device::operator=;
};

#endif // LAPTOP_H_INCLUDED
