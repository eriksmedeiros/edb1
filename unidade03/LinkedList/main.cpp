#include <iostream>

using namespace std;

class Node
{
public:
    char data;
    Node* next;

    Node(char data)
    {
        this->data = data;
        this->next = nullptr;
    }
    ~Node() {}
};

class LinkedList
{
    Node* head;
    int size;

public:
    LinkedList()
    {
        this->head = nullptr;
        this->size = 0;
    }

    ~LinkedList() {}

    void addLast(char value)
    {
        Node* iter = this->head; // Inicializa um Iterador

        while(iter->next != nullptr) // Loop para encontrar o último nó da lista
        {
            iter = iter->next;
        }

        Node* newNode = new Node(value); // Cria um novo nó
        newNode->next = iter->next; // Atribui nullptr para a 'calda' do novo nó
        iter->next = newNode; // O novo nó é ligado a Lista
 
        this->size += 1; // Incrementa 1 no tamanho da Lista;
    }

    void addFirst(char value)
    {
        Node* aux = this->head; // Inicializa um Auxiliar
        Node* newNode = new Node(value); // Cria um novo nó
        newNode->next = aux; // O Novo nó é ligado a Lista
        this->head = newNode; // A 'Cabeça' passa a ser o Novo nó

        this->size += 1; // Incrementa 1 no tamanho da Lista;
    }

    void add(char value, int index)
    {
        Node* newNode = new Node(value); // Cria um novo nó

        if (index == 0) {
            this->addFirst(value);
        } else if (index == size - 1){
            this->addLast(value);
        } else {

            Node* aux = this->head; // Inicializa um Auxiliar

            for (int i = 0; i < index - 1; i++) // Ao término do loop, aux estará apontando para  
                aux = aux->next;                // o nó que será o anterior do novo nó.

            newNode->next = aux->next; // O Novo nó é ligado ao próximo
            aux->next = newNode; // O elemento anterior é ligado ao Novo Nó

            this->size += 1; // Incrementa 1 no tamanho da Lista;
        }
    }

    void removeLast() {
        Node* ult = this->head; 
        Node* pen = nullptr; 

        while(ult->next != nullptr) // loop para percorrer a lista até o final
        {
            pen = ult; // pen será o penultimo nó
            ult = ult->next; // ult será o último nó
        }

        pen->next = ult->next; // o ponteiro 'next' do penultimo nó é alterado para 'nullptr'
        this->size--; // diminui em 1 o tamanho da lista
        delete ult; // o último nó é deletado da memória
    }

    void removeFirst(){
        Node* headOld = this->head; // nó 'cabeça' velho
        Node* headNew = headOld->next; // novo nó 'cabeça' 

        this->head = headNew; // altera a 'cabeça' da lista
        delete headOld; // apaga da memória o antigo nó
 
        this->size--; // diminui em 1 o tamanho da lista
    }

    void remove(int index) {
        if (index == 0) this->removeFirst(); return;
        if (index == size - 1) this->removeLast(); return;

        Node* aux = this->head;
        for (int i = 0; i < index - 1; i++) // Um loop for é usado para mover o ponteiro aux até o nó anterior ao índice especificado.
            aux = aux->next;

        Node* nodeToRemove = aux->next; // ponteiro que armazena o nó a ser removido 
        aux->next = nodeToRemove->next; // pula o nó a ser removido e apontar para o próximo nó 
        delete nodeToRemove; // o nó armazenado em nodeToRemove é deletado da memória
        this->size--; // diminui em 1 o tamanho da lista
    }

};

void menu(){
    cout << "Menu de Operações com LinkedList" << endl;
    cout << "1. Inserir um elemento" << endl;
    cout << "2. Remover um elemento" << endl;
    cout << "3. Acessar um elemento" << endl;
    cout << "4. Imprmir Lista" << endl;
    cout << "5. Exit" << endl;
}

int main(){

    int choice, value;

    while (true)
    {
        menu();
        cout << "Escolha uma opção: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            break;
        
        default:
            break;
        }



    }
    
}