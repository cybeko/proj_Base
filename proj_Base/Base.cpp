#include "Base.h"

int Base::people_on_base = 200;
int Base::vehicles_on_base = 20;
double Base::petrol_on_base = 200;
double Base::goods_on_base = 200;

void Base::PrintInfo()
{
    cout << "\tBase info: " << endl;
    cout << "People on base: " << people_on_base << endl;
    cout << "Vehicles on base: " << vehicles_on_base << endl;
    cout << "Petrol on base: " << petrol_on_base << endl;
    cout << "Goods on base: " << goods_on_base << endl << endl;
}
