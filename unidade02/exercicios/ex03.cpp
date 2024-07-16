/*Considere um array de números inteiros não-negativos. Faça um
programa que escolhe os três elementos desse array que
constróem um triângulo de máximo perímetro.*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool verificaTriangulo(int n1, int n2, int n3){
    return (n1 + n2 > n3) && (n1 + n3 > n2) && (n2 + n3 > n1);
}

int main(){
    vector<int> v {0, 40, 10, 70, 50, 60};

    sort(v.begin(), v.end());

    int maxPerimeter = 0;
    vector<int> result(3);

    for (int i = v.size() - 1; i >= 2; i--){
        if(verificaTriangulo(v[i], v[i-1], v[i-2])){
            int perimeter = v[i] + v[i-1] + v[i-2];
            if(perimeter > maxPerimeter){
                maxPerimeter = perimeter;
                result[0] = v[i];
                result[1] = v[i-1];
                result[2] = v[i-2];
            }
        }
    }

    if(maxPerimeter > 0){
        cout << "Os três elementos que formam um triângulo de máximo perímetro são: ";
        for(int i = 0; i < 3; i++){
            cout << result[i] << " ";
        }
        cout << endl;
        cout << "O perímetro máximo é: " << maxPerimeter << endl;
    } else {
        cout << "Não é possível formar um triângulo com os elementos fornecidos." << endl;
    }

    return 0;
}
