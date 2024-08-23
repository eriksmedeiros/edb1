// Criar
int lista[20] // Alocação estática

int tamanho = 20;
int* lista = new int[tamanho]; // Alocação dinâmica

// Destruir
void destruirLista(int*& lista){
    if(lista != nullptr) 
        delete[] lista;
    lista = nullptr;
}

// Acessar
int acessarInicio(int* lista, int qtd){
    if (qtd == 0) 
        return -1;
    
    return lista[0];
}

int acessarFim(int* lista, int qtd){
    if (qtd == 0)
        return -1;
    
    return lista[qtd-1];
}

int acessarPos(int* lista, int qtd, int pos){
    if (pos >= qtd || pos < 0)
        return -1;
    
    return lista[pos];
}

// Inserir
void inserirInicio(int* lista, int N, int& Q, int valor, int pos){
    if(lista == nullptr || Q==N)
        return;
    
    for (int i = Q; i > 0; i--)
        lista[i] = lista[i+1];

    lista[0] = valor;    
    Q++;
}

void inserirFim(int* lista, int N, int& Q, int valor, int pos){
    if(lista == nullptr || Q == N) 
        return;

    lista[Q] = valor;
    Q++;
}

void inserirPos(int* lista, int N, int& Q, int valor, int pos){
    if(lista == nullptr || Q==N || pos >= Q) 
        return;

    for(int i=Q; i>pos; i--) 
        lista[i] = lista[i-1];
    
    lista[pos] = valor;
    Q++;
}

void removerInicio(int* lista, int& Q){
    if(lista==nullptr || Q==0) 
        return;
    
    for(int i=0; i<(Q-1); i++) 
        lista[i] = lista[i+1];
    
    Q--;
}

void removerFim(int* lista, int& Q){
    if(lista == nullptr || Q==0) 
        return;
    Q--;
}

void removerPos(int* lista, int& Q, int pos){
    if(lista==nullptr || Q==0 || pos < Q) 
        return;
    
    for(int i=pos; i<(Q-1); i++) 
        lista[i] = lista[i+1];
    
    Q--;
}