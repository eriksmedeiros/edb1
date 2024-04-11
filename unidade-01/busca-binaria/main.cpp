#include <iostream>

using namespace std;

int binarySearch(int key, int collection[], int size){
    int inicio = 0, fim = size-1, meio;
    
    do{
        meio = (inicio+fim)/2;

        if(key < collection[meio]) 
            fim = meio - 1;
        else if (key > collection[meio])
            inicio = meio + 1;
        else
            return meio;
    } while (inicio <= fim);

    return -1;
}

int main(){
    
    int size, k;

    // ler tamanho
    cin >> size;

    // ler chave de busca
    cin >> k;

    int *list = new int(size);

    for(int i = 0; i < size ; i++) cin >> list[i];

    int index = binarySearch(k, list, size);
    
    cout << "Posição: " << index << endl;

    return 0;
}