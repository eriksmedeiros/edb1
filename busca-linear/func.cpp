#include <iostream>

int buscaLinear(int *V; int size, int elem)
{

    int i = 0;
    for (i; i < size; i++)
    {
        if (elem == V[i])
        {
            return i; // elemento encontrado
        }
    }

    return -1; // elemento não encontrado
}
