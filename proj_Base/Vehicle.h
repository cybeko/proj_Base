#pragma once
#include "Base.h"

class Vehicle
{
private:
    double petrol_amount;
    double tank_volume;
public:
    Vehicle(double petrol_amount, double tank_volume);
    double getTankVolume();
    double getPetrolAmount();
    void arrive();
    bool leave();


};

