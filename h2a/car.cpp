
#include "Car.h"
#include <iostream>

void Car::setBrand(string b)
{
    brand = b;
}

void Car::setModel(string m)
{
    model = m;
}

void Car::setYearModel(int y)
{
    yearModel = y;
}

void Car::printData()
{
    cout << "Auton merkki: " << brand << endl;
    cout << "Auton malli: " << model << endl;
    cout << "Valmistusvuosi: " << yearModel << endl;
}
