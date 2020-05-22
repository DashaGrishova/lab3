#ifndef SMARTWATCH_H_INCLUDED
#define SMARTWATCH_H_INCLUDED
#include "device.h"

class SmartWatch : public device
{
    string WorkingHours;
public:
    SmartWatch(const string mod, const int num, const string wh);

    void print() const override;

    void setWorkingHours(const string wh);
    string getWorkingHours() const;
    using device::operator=;
};

#endif // SMARTWATCH_H_INCLUDED
