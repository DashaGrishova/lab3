#ifndef PHONE_H_INCLUDED
#define PHONE_H_INCLUDED
#include "device.h"

class phone : public device
{
    string os;
public:
    phone(const string mod, const int num, const string os);

    void print() const override;

    void setOS(const string os);
    string getOS() const;
    using device::operator=;
};

#endif // PHONE_H_INCLUDED
