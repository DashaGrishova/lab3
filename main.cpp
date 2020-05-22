#include "device.h"
#include "phone.h"
#include "laptop.h"
#include "tablet.h"
#include "SmartWatch.h"

int main()
{
    phone a("Samsung", 1123, "Android");
    phone b("Honor", 1134, "Android");
    phone c("Xiaomi", 1145, "Android");
    laptop d("Lenovo", 1235, "Intel");
    laptop e("Xiaomi", 1246, "Intel");
    laptop f("Acer", 1257, "Intel");
    tablet g("Samsung", 1469, "2160");
    tablet h("Honor", 1459, "1920");
    tablet i("Xiaomi", 1449, "1920");
    SmartWatch j("Apple", 1654, "45 days");
    SmartWatch k("Samsung", 1643, "7 days");
    SmartWatch l("Xiaomi", 1632, "14 days");

    cout << "Select an action:" << endl;
    cout << "1) Display database" << endl;
    cout << "2) Add new object" << endl;

    device *obj;
    int sel1, sel2, num;
    string mod, oth;
    cin >> sel1;
    if (sel1 == 1)
    {
        a.print(); b.print(); c.print();
        d.print(); e.print(); f.print();
        g.print(); h.print(); i.print();
        j.print(); k.print(); l.print();
    }
    if (sel1 == 2)
    {
        cout << "Choose a device: 1)Phone, 2)Laptop, 3)Tablet, 4)SmartWatch" << endl;
        cin >> sel2;
        cout << "|Enter information|:" << endl;
        cout << "Model - ";
        cin >> mod;
        cout << "Number - ";
        cin >> num;
        cout << "Other - ";
        cin >> oth;
        switch(sel2)
        {
            case 1:
                obj = new phone(mod, num, oth);
                break;
            case 2:
                obj = new laptop(mod, num, oth);
                break;
            case 3:
                obj = new tablet(mod, num, oth);
                break;
            case 4:
                obj = new SmartWatch(mod, num, oth);
                break;
        }
        if (obj)
            obj->print();
    }
    if ((sel1 != 1)&&(sel1 != 2))
        cout << "Error" << endl;
    return 0;
}
