#include "Bus.h"

Bus::Bus(int people, int max_people, double petrol, double max_petrol) : Vehicle(petrol, max_petrol), people_count(people), max_people(max_people) {}

int Bus::getPeopleCount()
{
	return people_count;

}

int Bus::getMaxPeople()
{
	return max_people;
}

void Bus::arrive()
{
	Vehicle::arrive();
	Base::people_on_base += people_count;
}

void Bus::leave()
{
    if (Vehicle::leave())
    {
        Base::people_on_base -= people_count;
    }
    else
    {
        cout << "Couldn't leave the base" << endl;
    }
}

