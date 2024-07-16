/*Um anagrama é uma palavra ou frase formada pela reorganização
das letras de uma palavra ou frase diferente, usando todas as letras
originais exatamente uma vez. Exemplo de anagramas: Amor e
Roma; Carro e Corra. Faça um programa que recebe duas strings e
determina se elas são anagramas.*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string p1 = {"amor"}, p2 = {"roma"};

    if(p1.size() != p2.size()) {
        cout << "Não é um anagrama!" << endl;
        return 0;
    }

    sort(p1.begin(), p1.end());
    sort(p2.begin(), p2.end());

    for (int i = 0; i < p1.size(); i++){
        if(p1[i] == p2[i]){
            continue;
        } else{
            cout << "Não é um anagrama!" << endl;
            return 0;
        }
    }

    cout << "As palavras são anagramas!" << endl;
    return 0;
}


