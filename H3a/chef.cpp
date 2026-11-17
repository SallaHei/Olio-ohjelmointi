
#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef(string name)
{
    this->name = name;
    cout << "Chef " << name << " is constructed." << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " is destructed." << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad." << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup." << endl;
}
