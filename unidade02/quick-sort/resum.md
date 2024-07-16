Aqui está o texto transformado em marcação:

É importante destacar de antemão que, em seu pior caso, o **Quick Sort** é \(O(n^2)\), enquanto que o **Merge Sort** e o **Heap Sort** garantem \(n \cdot \log n\) para todos os casos. A boa notícia é que há estratégias simples com as quais podemos minimizar as chances de ocorrência do pior caso.

**Quick Sort** é um algoritmo eficiente de ordenação.

O algoritmo baseia a ordenação em sucessivas execuções de particionamento, uma rotina que escolhe um pivot e o posiciona no array de uma maneira em que os elementos menores ou iguais ao pivot estão à sua esquerda e os maiores estão à sua direita.

O algoritmo de particionamento é \(O(n)\).

Há dois algoritmos populares de particionamento: o de **Lomuto** e o de **Hoare**.

O particionamento **Hoare**, embora mais complexo, é na prática mais eficiente que o de **Lomuto**.

No caso médio e no melhor caso, o **Quick Sort** é \(O(n \cdot \log n)\).

No pior caso, o **Quick Sort** é \(O(n^2)\).

O pior caso do **Quick Sort** é raro e é causado por sucessivas péssimas escolhas de pivot quando o array já está ordenado. Para remediar este problema, há estratégias para escolher melhor o elemento que será o pivot do particionamento, entre elas:

- Escolher o pivot aleatoriamente.
- Escolher o pivot como sendo a mediana entre o primeiro, o elemento central e o último elemento do array.

O caso médio é muito mais provável do que o pior e o melhor caso.

Apesar de estar na mesma classe de complexidade do **Merge Sort** e do **Heap Sort**, há experimentos que demonstram que o **Quick Sort** em seu melhor caso e caso médio é por volta de 3x mais eficiente que o **Merge Sort**, porque ele contém constantes menores.

- O **Quick Sort** não é estável.
- O **Quick Sort** é in-place.