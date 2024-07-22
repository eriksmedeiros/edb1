### Definição
Conjunto de elementos organizados em uma sequência, i.e.,
com relação de precedência.

- Elementos são armazenados em um
bloco de dados de maneira
contínua;
- Todos os dados devem ter o mesmo
tipo;
- Implementação com base em array.

Em uma lista podemos realizar as seguintes operações básicas:
- Criar
- Acessar (inicio, posição aleatória, fim)
- Inserir (inicio, posição aleatória, fim)
- Remover (inicio, posição aleatória, fim)
- Destruir

Essas operações dependem do tipo de alocação de memória usada
- Estática: 
    - Tamanho definido em tempo de compilação;
    - Exige a definição do número máximo de elementos da "Lista". 
- Dinâmica: tamanho definido em tempo de execução:
    - Tamanho definido em tempo de execução;
    - A lista cresce à medida que novos elementos são adicionados e diminui à medida que elementos são removidos;

#### Vantagens
- Acesso rápido e direto aos elementos (índice);
- Tempo constante para acessar um elemento;
- Facilidade em modificar informações;

#### Desvantagens
- Definição prévia do tamanho do array;
- Dificuldade para inserir e remover um elemento entre outros dois: é necessário deslocar os elementos;

#### Quando utilizar
- Listas pequenas;
- Inserção/remoção apenas no final;
- Tamanho máximo bem definido;
- A busca é a operação mais frequente.
