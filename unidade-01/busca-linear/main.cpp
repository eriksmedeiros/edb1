#include <iostream>

using namespace std;

int linearSearch(int key, int collection[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (key == collection[i])
        {
            return i; // elemento encontrado
        }
    }


    return -1; // elemento não encontrado
}

int main()
{
    int size, k;

    // ler tamanho da lista
    cin >> size;

    // ler chave de busca
    cin >> k;

    // aloca dinamicamente uma caleção de inteiros 
    // com tamanho e elementos definidos pelo usuário
    int *list = new int [size];

    for(int i = 0; i < size; i++){
        cin >> list[i];
    }

    int index = linearSearch(k, list, size);

    cout << "Posição: " << index << endl;

    return 0;
}