#include <iostream>
#include "conv.h"

using namespace std;

int main()
{
    int option;

    cout << "Conversor de temperatura" << endl;
    cout << "(1) Celsius -> Fahrenheit" << endl;
    cout << "(2) Fahrenheit -> Celsius" << endl;
    cout << "Digite sua opção: " << endl;
    cin >> option;

    float temp;
    cout << "Digite a temperatura: " << endl;
    cin >> temp;
    float conv;

    switch (option)
    {
    case 1:
        conv = celToFah(temp);
        cout << temp << "Cº = " << conv << "Fº" << endl;
        break;
    case 2:
        conv = FahTocel(temp);
        cout << temp << "Fº = " << conv << "Cº" << endl;
        break;
    default:
        cout << "Opção inválida" << endl;
    }

    return 0;
}