#include <iostream>

struct No {
    int conteudo;
    No* proximo;
    No* anterior;

    No(int valor) : conteudo(valor), proximo(nullptr), anterior(nullptr) {}
};

class Lista {
private:
    No* cabeca;
    No* cauda;
    int tamanho;

public:
    Lista() {
        cabeca = new No(0);  
        cauda = new No(0);   
        cabeca->proximo = cauda;
        cauda->anterior = cabeca;
        cabeca->anterior = nullptr;
        cauda->proximo = nullptr;
        tamanho = 0;
    }

    ~Lista() {
        while (tamanho > 0) {
            removerInicio();
        }
        delete cabeca;
        delete cauda;
    }

    bool estaVazia() {
        return tamanho == 0;
    }

    void inserirInicio(int valor) {
        No* no = new No(valor);
        no->proximo = cabeca->proximo;
        no->anterior = cabeca;
        cabeca->proximo->anterior = no;
        cabeca->proximo = no;
        tamanho++;
    }

    void inserirFim(int valor) {
        No* no = new No(valor);
        no->proximo = cauda;
        no->anterior = cauda->anterior;
        cauda->anterior->proximo = no;
        cauda->anterior = no;
        tamanho++;
    }

    void removerInicio() {
        if (estaVazia()) {
            std::cerr << "Erro: Lista Vazia!" << std::endl;
            return;
        }
        No* aRemover = cabeca->proximo;
        cabeca->proximo = aRemover->proximo;
        aRemover->proximo->anterior = cabeca;
        delete aRemover;
        tamanho--;
    }

    void removerFim() {
        if (estaVazia()) {
            std::cerr << "Erro: Lista Vazia!" << std::endl;
            return;
        }
        No* aRemover = cauda->anterior;
        aRemover->anterior->proximo = cauda;
        cauda->anterior = aRemover->anterior;
        delete aRemover;
        tamanho--;
    }

    void exibir() {
        No* atual = cabeca->proximo;
        while (atual != cauda) {
            std::cout << atual->conteudo << " ";
            atual = atual->proximo;
        }
        std::cout << std::endl;
    }

    int getTamanho() {
        return tamanho;
    }
};

int main() {
    Lista lista;

    lista.inserirInicio(10);
    lista.inserirInicio(5);
    lista.inserirFim(20);
    lista.inserirFim(30);

    std::cout << "Lista: ";
    lista.exibir();  

    lista.removerInicio();
    std::cout << "Lista após remover o início: ";
    lista.exibir();  

    lista.removerFim();
    std::cout << "Lista após remover o fim: ";
    lista.exibir();  

    return 0;
}
