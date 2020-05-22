#ifndef TABLET_H_INCLUDED
#define TABLET_H_INCLUDED
#include "device.h"

class tablet : public device
{
    string screen;
public:
    tablet(const string mod, const int num, const string scr);

    void print() const override;

    void setScreen(const string scr);
    string getScreen() const;
    using device::operator=;
};

#endif // TABLET_H_INCLUDED
