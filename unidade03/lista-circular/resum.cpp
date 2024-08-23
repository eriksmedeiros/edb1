// Acessar

int acessarInicio(int* lista, int qtd, int off, int tam){
    if(qtd == 0) 
        return -1;

    return lista[(off)%tam];
}

int acessarFim(int* lista, int qtd, int off, int tam){
    if(qtd == 0) 
        return -1;

    return lista[(off+qtd-1)%tam];
}

int acessarMeio(int* lista, int qtd, int off, int tam, int pos){
    if(pos >= qtd || pos < 0) 
        return -1;
    
    return lista[(pos+off)%tam];
}

// Inserir

void inserirInicio(int *ls, int N, int& Q, int& O, int elem){
    if(ls==nullptr || Q==N)     
        return;

    if (O>0)
        O = (O-1)%N; // atualiza o offset
    else
        O = N-1;

    ls[O] = elem; // insere na posição offset
    Q++; // incrementa a qtd de elementos
}

void inserirFim(int *ls, int N, int& Q, int O, int elem){
    if(ls==nullptr || Q==N) 
        return;

    ls[(Q+O)%N] = elem; // insere na última posição
    Q++; // incrementa a qtd de elementos
}

// Remover
void removerInicio(int *ls, int N, int& Q, int& O){
    if(ls==nullptr || Q==0) 
        return;

    Q--;
    O = (O+1)%N;
}

void removerFim(int *ls, int N, int& Q, int O){
    if(ls==nullptr || Q==0) 
        return;
    Q--;
}

