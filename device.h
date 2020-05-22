#ifndef DEVICE_H_INCLUDED
#define DEVICE_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class device
{
private:
    string model;
    int number;
protected:
    device(const string mod, const int num);
public:
    device();
    device(device &one);

    void setModel(const string mod);
    bool setNumber(const int num);
    string getModel() const;
    int getNumber() const;

    device&operator=(const device &a);

    virtual void print() const = 0;
};

#endif // DEVICE_H_INCLUDED
