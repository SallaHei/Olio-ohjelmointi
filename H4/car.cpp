
#include "Car.h"
#include <iostream>

Car::Car() {
    brand = "";
    model = "";
}

Car::Car(string b, string m) {
    brand = b;
    model = m;
}

void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

string Car::getModel() {
    return model;
}

void Car::setModel(string m) {
    model = m;
}

string Car::getBrand() {
    return brand;
}

void Car::setBrand(string b) {
    brand = b;
}

void Car::printDetails() {
    cout << "Car details:" << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;

    cout << "Engine details:" << endl;
    cout << "Horsepower: " << objEngine.getHorsepower() << endl;
    cout << "Displacement: " << objEngine.getDisplacement() << " L" << endl;

    cout << "Wheel details:" << endl;

    cout << "Wheel 1: " << objWheel1.getSize() << " inch, "
         << objWheel1.getType() << endl;

    cout << "Wheel 2: " << objWheel2.getSize() << " inch, "
         << objWheel2.getType() << endl;

    cout << "Wheel 3: " << objWheel3.getSize() << " inch, "
         << objWheel3.getType() << endl;

    cout << "Wheel 4: " << objWheel4.getSize() << " inch, "
         << objWheel4.getType() << endl;
}
