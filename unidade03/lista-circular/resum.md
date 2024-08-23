### Definição
Tipo de "Lista" onde cada elemento aponta para o seu sucessor e o último elemento aponta par ao primeiro da "Lista".

Usa um ponteiro especial para o primeiro elemento da lista.

Não existe uma indicação de final de lista.

#### Vantagens
- Melhor utilização dos recursos de memória;
- Não é necessário movimentar os elementos nas operações de inserção e remoção;
- Possibilidade de percorrer a lista diversas vezes;
- Não precisamos considerar casos especiais de inclusão e remoção de elementos.

#### Desvantagens
- Acesso indireto aos elementos;
- Necessidade de percorrer a lista para acessar um elemento.
- Não possui final definido.

#### Quando utilizar
- Não há necessidade de garantir um espaço mínimo para a execução do aplicativo;
- Inserção/remoção em lista ordenada são as operações mais frequentes;
- Quando a necessidade de voltar ao primeiro item da lista depois de percorrê-la.
