#include "Vehicle.h"

Vehicle::Vehicle(double petrol_amount, double tank_volume) : petrol_amount(petrol_amount), tank_volume(tank_volume) {}

double Vehicle::getTankVolume()
{
    return tank_volume;
}

double Vehicle::getPetrolAmount()
{
    return petrol_amount;
}

void Vehicle::arrive()
{
    Base::vehicles_on_base++;
}

bool Vehicle::leave()
{
    if (petrol_amount >= tank_volume)
    {
        petrol_amount = tank_volume;
        Base::vehicles_on_base--;
        return true;
    }
    else
    {
        return false;
    }
}
