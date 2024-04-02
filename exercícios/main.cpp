#include <iostream>
#include "include/order.hpp"
#include "include/search.hpp"

using namespace std;

int main()
{
    int find;
    int sequence[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1 << "o elemento: ";
        cin >> sequence[i];
    }

    if (orderCheck(sequence))
    {
        cout << "Lista ordenada de maneira crescente!" << endl;
        cout << "Qual número quer encontrar a posição: ";
        cin >> find;
        cout << "Posição " << search(find, sequence) << "º" << endl;
    }
    else
    {
        cout << "Lista desordenada ou decrescente!" << endl;
    }

    return 0;
}