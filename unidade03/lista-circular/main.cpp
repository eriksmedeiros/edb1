#include <iostream>
#include <queue>

using namespace std;

char* createList(int size){
    return new char[size];
}

void destroyList(char*& list){
    if(list != nullptr) 
        delete[] list;
    list = nullptr;
}

char accessList(char* list, int amount, int off, int size, int pos){
    if(pos >= amount || pos < 0) return -1;

    return list[(pos + off) % size]; 
}

char accessLeft(char* list, int amount, int off, int size){
    if(amount == 0) return -1;
    
    return list[off % size];
}

char accessRight(char* list, int amount, int off, int size){
    if(amount == 0) return -1;

    return list[(off + amount - 1) % size];
}


int main(){

    char* list = createList(10);

    cout << "***** LISTA ENCADEADA CIRCULAR *****" << endl;
    cout << "1 - Inserir novo elementos " << endl;
    cout << "2 - Acessar elementos " << endl;
    cout << "3 - Remover elemento " << endl;
    cout << "4 - Listar todos os elementos " << endl;
    cout << "0 - Sair " << endl;

    int escolha;

    switch (escolha)
    {
    case 
        break;
    
    default:
        break;
    }

    return 0;
}