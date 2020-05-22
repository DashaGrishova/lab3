#include "laptop.h"

laptop::laptop(const string mod, const int num, const string cpu) : device(mod, num)
{
    setCPU(cpu);
}

void laptop::setCPU(const string cpu)
{
    this->cpu = cpu;
}

string laptop::getCPU() const
{
    return cpu;
}

void laptop::print() const
{
    cout << "Model - " << getModel();
    cout << ", CPU - " << getCPU();
    cout << ", Number - " <<getNumber() << endl;
}
