#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &a){
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &v){
    for(int i = 0; i < v.size() - 1; i++){

        for(int j = 0; j < v.size() - i - 1; j++){

            if(v[j] > v[j+1]){

                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }

        printArray(v);
    }
}

int main(){

    vector<int> array {51, 39, -1, 21, 21, 43, 23, 40};

    bubbleSort(array);
    cout << "Array ordenado: " << endl;
    printArray(array);

    return 0;
}