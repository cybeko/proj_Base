#include "Truck.h"

Truck::Truck(double load, double max_load, double petrol, double max_petrol) : Vehicle(petrol, max_petrol), load(load), max_load(max_load) {}

double Truck::getCurrentLoad()
{
    return load;

}

double Truck::getMaxLoad()
{
    return max_load;
}

void Truck::arrive()
{
    Vehicle::arrive();
    Base::goods_on_base += load;
}

void Truck::leave()
{
    if (Vehicle::leave())
    {
        Base::goods_on_base -= load;

    }
    else
    {
        cout << "Couldn't leave the base" << endl;
    }
}

