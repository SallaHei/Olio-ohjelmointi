
#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

int main()
{
    // Luodaan vektori pinoon
    vector<Car> carList;

    // Lisätään kolme autoa vektoriin
    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("Volvo", "V60", 2022));
    carList.push_back(Car("BMW", "320", 2023));

    // Tulostetaan listan toinen alkio
    cout << "--- LISTAN TOINEN AUTO ---" << endl;
    carList[1].printData();

    // Tulostetaan kaikkien autojen tiedot
    cout << endl;
    cout << "--- KAIKKI AUTOT ---" << endl;

    for (int i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
        cout << endl;
    }

    return 0;
}
