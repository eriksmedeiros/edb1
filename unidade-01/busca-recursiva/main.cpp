#include <iostream>

using namespace std;

int recursionSearch(int key, int *collection, int  size){
    int inicio = 0, fim = size, meio;

    while(inicio <= fim){
        meio = (inicio+fim)/2;
        
        if(key < collection[meio]) 
            return recursionSearch(key, collection, meio);
        else if(key > collection[meio])
            return recursionSearch(key, &collection[meio+1], size-meio-1);
        else 
            return meio;
    }
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

    int index = recursionSearch(k, &list[0], size);
    
    cout << "Posição: " << index << endl;

    return 0;
}