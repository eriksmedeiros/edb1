#include <iostream>
using namespace std;

void printArray(int *v, int size){

    for(int i = 0; i < size; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void merge(int *aux, int *v, int left, int middle, int right, int size){
    int i, j, k;
    i = left;
    j = middle+1;
    k = left;

    while(i <= middle && j <= right){
        if(v[i] < v[j]){
            aux[k] = v[i];
            i++;
        } else{
            aux[k] = v[j];
            j++;
        }
        k++;
    }

    while(i <= middle){
        aux[k] = v[i];
        i++;
        k++;
    }

    while(j <= right){
        aux[k] = v[j];
        j++;
        k++;
    }

    // copia os elementos do auxiliar para o vetor principal
    for(int p = left; p <= right; p++){
        v[p] = aux[p];
    }    

    printArray(v, size);
}

void mergeSort(int *aux, int *v, int left, int right, int size){
    
    if(left < right){
        int middle = (left+right) / 2;
        mergeSort(aux, v, left, middle, size);
        mergeSort(aux, v, middle + 1, right, size);
        merge(aux, v, left, middle, right, size);
    }
}

int main(){
    int v[] = {31, -1, 4, 45, 22, 73, 1, 19, 87, 52, 66, 40, 3, 71, 22, 12};
    int size = sizeof(v) / sizeof(v[0]);
    int aux[size];

    printArray(v, size);

    mergeSort(aux, v, 0, size-1, size);
    
    return 0;
}