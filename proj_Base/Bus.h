#pragma once
#include "Vehicle.h"

class Bus : public Vehicle {
private:
    int people_count;
    int max_people;

public:
    Bus(int people, int max_people, double petrol, double max_petrol);
    int getPeopleCount();

    int getMaxPeople();

    void arrive();

    void leave();
};

