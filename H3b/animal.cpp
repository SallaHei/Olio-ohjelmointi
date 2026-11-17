
#include "animal.h"
#include <iostream>

using namespace std;

Animal::Animal()
{
    cout << "Animal constructor" << endl;
}

Animal::~Animal()
{
    cout << "Animal destructor" << endl;
}

void Animal::callOut()
{
    cout << "Elain aantelee." << endl;
}
