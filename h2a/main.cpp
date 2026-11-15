
#include <iostream>
#include "Car.h"
#include "Rectangle.h"
#include <memory>
#include "Student.h"

using namespace std;

int main()
{
    // Luodaan Car-olio pinomuistiin
    Car car;

    // Asetetaan auton tiedot
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);

    // Tulostetaan auton tiedot
    car.printData();


    // Luodaan Rectangle-olio kekomuistiin
    Rectangle* rectangle = new Rectangle;

    // Asetetaan suorakulmion mitat
    rectangle->setWidth(5.0);
    rectangle->setHeight(3.0);

    // Tulostetaan pinta-ala ja ympärysmitta
    cout << endl;
    cout << "--- SUORAKULMIO ---" << endl;

    cout << "Pinta-ala: "
         << rectangle->getArea() << endl;

    cout << "Ympärysmitta: "
         << rectangle->getCircum() << endl;

    // Tuhoetaan olio
    delete rectangle;


    // Luodaan Student-olio smart pointerilla
    unique_ptr<Student> student =
        make_unique<Student>();

    // Asetetaan opiskelijan tiedot
    student->setName("Matti Meikalainen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    // Tulostetaan opiskelijan tiedot
    cout << endl;
    cout << "--- OPISKELIJA ---" << endl;

    cout << "Nimi: "
         << student->getName() << endl;

    cout << "Opiskelijanumero: "
         << student->getStudentNumber() << endl;

    cout << "Keskiarvo: "
         << student->getAverage() << endl;


    return 0;
}
