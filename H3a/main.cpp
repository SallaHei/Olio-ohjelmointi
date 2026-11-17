
#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef("Gordon Ramsay");

    chef.makeSalad();
    chef.makeSoup();

    cout << endl;

    ItalianChef italianChef("Anthony Bourdain");

    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    cout << italianChef.getName() << endl;

    return 0;
}
