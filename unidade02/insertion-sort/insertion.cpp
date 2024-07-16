#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &a){
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector <int> &v){
    for(int i = 1; i < v.size(); i++){
        int j = i;

        while(j > 0 && v[j] < v[j-1]){
            int aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
            j--;
        }

        printArray(v);
    }
}

int main(){

    vector<int> array {51, 39, -1, 21, 21, 43, 23, 40};

    insertionSort(array);
    cout << "Array ordenado: " << endl;
    printArray(array);

    return 0;
}
