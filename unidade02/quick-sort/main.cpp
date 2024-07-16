#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int *v, int size){
    for(int i = 0; i < size; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int pickPivotIndex(int *v, int left, int right){
    int mid = (left+right) / 2;

    int sorted[] = {v[left], v[mid], v[right]};
    sort(sorted, sorted + 3);
    
    if (sorted[1] == v[left]) return left;
    else if (sorted[1] == v[mid]) return mid;
    else return right;
}

int partition(int *v, int left, int right){
    int pivot = v[pickPivotIndex(v, left, right)];
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

void quickSort(int *v, int left, int right, int size){
    int pivot;
    printArray(v, size);
    if(left < right){
        pivot = partition(v, left, right);
        quickSort(v, left, pivot-1, size);
        quickSort(v, pivot+1, right, size);
    }
}

int main(){
    int v[] = {3,8,7,10,0,23,2,1,77,7};
    int size = sizeof(v) / sizeof(v[0]); 

    quickSort(v, 0, size-1, size);
    cout << "Array ordenado: " << endl;
    printArray(v, size);

    return 0;
}