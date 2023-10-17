#include "Base.h"
#include "Bus.h"
#include "Truck.h"

int main()
{
    Base base;
    Bus bus(10, 60, 40, 40);
    Truck truck(5.0, 60, 30.0, 30);

    cout << "Before bus and truck arrival: " << endl;
    base.PrintInfo();

    bus.arrive();
    truck.arrive();

    cout << "After bus and truck arrival: " << endl;
    base.PrintInfo();

    cout << "After bus and truck left: " << endl;
    bus.leave();
    truck.leave();
    base.PrintInfo();

    return 0;
}