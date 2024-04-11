#include <iostream>

using namespace std;

int orderedSearch(int key, int collection[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (key == collection[i])
        {
            return i; // elemento encontrado
        }
        else if (key < collection[i])
        {
            
            return -1;
        }
    }

    return -1; // elemento não encontrado
}

int main()
{
    
    // vetor de inteiros alocados estaticamente
    int list[] = {2, 6, 8, 10, 12, 14};
    
    int k;

    // ler chave de busca
    cin >> k;
    
    // calcula tamanho do vetor
    // tam do espaço de memoria ocupada pelo vetor / tamanho do espaço de memoria ocupada pelo primeiro elemento
    int size = sizeof(list) / sizeof(list[0]);

    int index = orderedSearch(k, list, size);

    cout << "Posição: " << index << endl;

    return 0;
}