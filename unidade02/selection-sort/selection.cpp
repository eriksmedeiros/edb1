#include <iostream>

using namespace std;

void printArray(int vetor[], int tam){
    for(int i = 0; i < tam; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void selectionSort(int array[], int n){
    int minIdx;
    for(int i = 0; i < n; i++){
        printArray(array, n);

        minIdx = i;

        for(int j = i + 1; j < n; j++){
            if(array[j] < array[minIdx]) 
                minIdx = j;
        }

        int aux = array[i];
        array[i] = array[minIdx];
        array[minIdx] = aux;    
    }
}

int main(){

    int vetor[] = {51, 39, -1, 21, 21, 43, 23, 40};
    int tam = sizeof(vetor) / sizeof(vetor[0]);

    selectionSort(vetor, tam);
    cout << "Array ordenado: " << endl;
    printArray(vetor, tam);

    return 0;
}
