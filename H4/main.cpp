
#include <iostream>
#include <windows.h>
#include "Car.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Car myCar("Toyota", "Corolla");

    myCar.setEngine();
    myCar.setWheels();

    myCar.printDetails();

    return 0;
}
