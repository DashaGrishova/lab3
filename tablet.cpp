#include "tablet.h"

tablet::tablet(const string mod, const int num, const string scr) : device(mod, num)
{
    setScreen(scr);
}

void tablet::setScreen(const string scr)
{
    this->screen = scr;
}

string tablet::getScreen() const
{
    return screen;
}

void tablet::print() const
{
    cout << "Model - " << getModel();
    cout << ", Screen - " << getScreen();
    cout << ", Number - " <<getNumber() << endl;
}
