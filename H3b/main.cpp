
#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    cout << "--- Animal ---" << endl;

    Animal animal;
    animal.callOut();

    cout << endl;

    cout << "--- Dog ---" << endl;

    Dog dog;
    dog.callOut();

    cout << endl;

    cout << endl;
    cout << "--- Polymorfismi ---" << endl;

    Animal* animalPointer = new Dog();

    animalPointer->callOut();

    delete animalPointer;

    return 0;
}
