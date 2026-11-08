
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Laskee ja tulostaa summan
void calcSum(int a, int b) {
    cout << "Summa (calcSum): " << a + b << endl;
}

// Laskee ja tulostaa osamaaran
void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Error: Jakaja ei saa olla nolla!" << endl;
    }
    else {
        cout << "Osamaara (calcDiv): "
             << fixed << setprecision(2)
             << static_cast<float>(a) / b << endl;
    }
}

// Palauttaa summan
int retSum(int a, int b) {
    return a + b;
}

// Palauttaa osamaaran
float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }

    return static_cast<float>(a) / b;
}

int main() {

    int a = 0;
    int b = 0;
    int result;
    float divResult;

    // Kysytaan kaksi kokonaislukua
    cout << "Anna ensimmainen luku: ";
    cin >> a;

    cout << "Anna toinen luku: ";
    cin >> b;

    // Kutsutaan calc-funktioita
    calcSum(a, b);
    calcDiv(a, b);

    // Kutsutaan retSum-funktiota
    result = retSum(a, b);
    cout << "Summa (retSum): " << result << endl;

    // Kutsutaan retDiv-funktiota try-catch-rakenteella
    try {
        divResult = retDiv(a, b);

        cout << a << "/" << b << " = "
             << fixed << setprecision(2)
             << divResult << endl;
    }
    catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

//Lähteet: Pekka Alaluukkaan opetusaineistot