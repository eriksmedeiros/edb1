#include <iostream>

using namespace std;

int buscaLinear(int *V, int size, int elem)
{

    int contador = 0;

    for (int i = 0; i < size; i++)
    {
        contador++;
        if (elem == V[i])
        {
            return i + 1; // elemento encontrado
        }
    }

    return -1; // elemento não encontrado
}

int main()
{
    int elementos[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o " << i + 1 << "o elemento: ";
        cin >> elementos[i];
    }

    cout << buscaLinear(&elementos[0], 10, 40) << endl;

    return 0;
}