## Merge Sort

Uma característica importante é que sua eficiência é \(n \cdot \log n\) para o melhor, pior e para o caso médio. Ou seja, ele não é somente \(\Omega(n \cdot \log n)\), mas é \(\Theta(n \cdot \log n)\). Isso nos dá uma garantia de que, independente da disposição dos dados em um array, a ordenação será eficiente.

**Merge** é a rotina que combina dois arrays ordenados em um outro também ordenado diversas vezes.

O algoritmo de Merge é \(O(n)\).

Na prática, não queremos ficar criando arrays separados para uni-los. Isso custa memória e processamento, pois a cada array criado temos que transferir os elementos do array original para ele. O que fazemos então é organizar os dados no array a ser ordenado de forma que uma parte dele esteja ordenada e outra também. Assim, no Merge Sort não fazemos o merge de dois arrays, mas fazemos o merge de duas partes ordenadas de um mesmo array. Veja o vídeo abaixo com essa explicação bem detalhada.

O Merge Sort possui duas chamadas recursivas, cada uma reduzindo o problema (tamanho do array) na metade. Ou seja, \(2 \cdot T(n/2)\). Além disso, há também uma chamada ao método Merge, que sabemos ser \(O(n)\). Portanto, a relação de recorrência é:

\[T(n) = 2 \cdot T(N/2) + N\]

Quando resolvida, nos fornece um custo total \(n \cdot \log n\).

O Merge Sort nos garante eficiência \(n \cdot \log n\) para todos os casos.

- O Merge Sort não é in-place.
- O Merge Sort é estável.

Apesar de estar na mesma classe de complexidade do Quick Sort, o Merge Sort tende a ser, na prática, um pouco menos eficiente do que o Quick Sort, pois suas constantes são maiores. Contudo, a seu favor, o Merge Sort garante \(n \cdot \log n\) para qualquer caso, enquanto o Quick Sort pode ter ordenação \(n^2\) no pior caso, embora raro.