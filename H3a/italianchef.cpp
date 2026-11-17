
#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef is constructed." << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef is destructed." << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef makes pasta." << endl;
}
