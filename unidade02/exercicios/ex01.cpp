/* Dado um vetor com números inteiros entre 0 e 9,
encontre os dois números cuja soma é máxima.
Esses números devem ser formados utilizando-se
todos os elementos do vetor, e a diferença no
número de dígitos não deve ser superior a 1.*/

#include <iostream>
#include <vector>
using namespace std;

void searchNumber(int *v, int size){
    vector<int> n1, n2;
    
    for(int i = size - 1; i >= 0; i--){
            if(i%2==0){
                n2.push_back(v[i]);
            } else{
                n1.push_back(v[i]);
            }
    }

    for(int i = 0; i < n1.size(); i++){
        cout << n1[i];
    }
    cout << " e ";

    for(int i = 0; i < n2.size(); i++){
        cout << n2[i];
    }
    cout << endl;
}

int partition(int *v, int left, int right){
    int pivot = v[left];
    int i = left;

    for(int j = left + 1; j <= right; j++){
        if(v[j] <= pivot){
            i++;
            swap(v[i], v[j]);
        }
    }

    swap(v[left], v[i]);

    return i;
}

void quickSort(int *v, int left, int right){
    int pivot;
    if(left < right){
        pivot = partition(v, left, right);
        quickSort(v, left, pivot-1);
        quickSort(v, pivot+1, right);
    }
}

int main(){
    int v[] = {8, 1, 4, 5, 0, 3};
    int size = sizeof(v) / sizeof(v[0]);

    quickSort(v, 0, size-1);

    searchNumber(v, size);

    return 0;
}