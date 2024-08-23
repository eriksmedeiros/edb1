Inserir

InserirInício( lista, valor )

    No nó = CriarNo( valor )
    No cabeça = lista.cabeça

    nó.próximo = cabeça.próximo
    nó.anterior = cabeça

    nó.próximo.anterior = nó
    nó.anterior.próximo = nó

    lista.tamanho = lista.tamanho+1
FIM

InserirFim( lista, valor ):

    No nó = CriarNo( valor )
    No cauda = lista.cauda

    nó.próximo = cauda
    nó.anterior = cauda.anterior

    nó.próximo.anterior = nó
    nó.anterior.próximo = nó

    lista.tamanho = lista.tamanho+1
FIM

Remover

RemoverInício( lista ):

    SE lista está vazia ENTÃO
    RETORNE ERRO-ListaVazia
    FIM_SE

    No aRemover = lista.cabeça.próximo

    aRemover.anterior.próximo = aRemover.próximo
    aRemover.próximo.anterior = aRemover.anterior

    delete aRemover

    lista.tamanho = lista.tamanho-1
FIM

RemoverFim( lista ):

    SE lista está vazia ENTÃO
    RETORNE ERRO-ListaVazia
    FIM_SE

    No aRemover = lista.cauda.anterior

    aRemover.anterior.próximo = aRemover.próximo
    aRemover.próximo.anterior = aRemover.anterior
    delete aRemover
    
    lista.tamanho = lista.tamanho-1
FIM
