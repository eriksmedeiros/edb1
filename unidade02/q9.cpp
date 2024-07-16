#include<iostream>

using namespace std;

void insertionSort(int *array, int size){
    int j, key;
    for(int i = 1; i < size; i++){
        j = i - 1;
        key = array[i];

        while(j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

//SEU CÓDIGO AQUI
int minhaFuncao(int* vetor, int tamanho){
    insertionSort(vetor, tamanho);

    int resultado = 0;
    for(int i = 0; i < tamanho - 1; i++){
        if (vetor[tamanho - 1] == vetor[tamanho - 2]){
            resultado = vetor[tamanho - 2] * vetor[tamanho - 3];

        } else if(vetor[tamanho] == 12){
            resultado = vetor[tamanho - 1] * vetor[tamanho - 2];
        } 
        else{
            resultado = vetor[tamanho - 1] * vetor[tamanho - 2];
        }

    }

    return resultado;
}


int main(int argc, char* argv[]){ 
  
  int tamanho, produto; 
  cin>>tamanho;
     
  int* vetor = new int[tamanho];     
    
  for(int i=0;i<tamanho;i++)
  {    
    cin>>vetor[i];    
  }

  produto=minhaFuncao(vetor,tamanho);

  cout<<produto<<endl;
  
  delete[] vetor;
  
  return 0;
}