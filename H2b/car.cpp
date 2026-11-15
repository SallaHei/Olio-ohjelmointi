
#include "Car.h"
#include <iostream>

Car::Car(string b, string m, int y)
{
    brand = b;
    model = m;
    yearModel = y;
}

void Car::printData()
{
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosimalli: " << yearModel << endl;
}
