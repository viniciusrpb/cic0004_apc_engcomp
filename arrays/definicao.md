# 6.1. Definição

## Representação de Vetores

Um vetor é uma estrutura de dados em que cada elemento estará associado com uma posição, ou índice, como mostra a figura abaixo:

![arrays](images/arrays2.png)

Isso fornece acesso rápido e sequencial dos dados;


## Quando Utilizar Vetores?

- armazenamento sequencial de dados: quando você precisa armazenar elementos do mesmo tipo em uma ordem específica

- Por exemplo:
* Notas de alunos;
* Preços de produtos;

- . Tal armazenamento serve para permitir o acesso e a consulta 
Sequências de caracteres, como palavras ou frases (embora strings em C sejam um caso especial de vetor de caracteres).
2. Acesso Rápido e Aleatório
Vetores permitem acesso rápido e direto a qualquer elemento usando seu índice. Isto é útil em situações onde você precisa acessar elementos aleatoriamente e frequentemente. Exemplos incluem:

Implementação de tabelas de pesquisa onde a chave é um índice.
Manipulação de matrizes e dados de imagem onde cada pixel pode ser acessado por suas coordenadas.
3. Iteração e Processamento de Dados
Quando você precisa processar ou iterar sobre uma coleção de dados de forma eficiente, vetores são ideais. Exemplos incluem:

Calcular a soma ou média de um conjunto de números.
Aplicar transformações a uma lista de dados, como escalamento ou normalização.
4. Implementação de Estruturas de Dados Simples
Vetores podem ser usados como base para implementar estruturas de dados mais complexas, como:

Pilhas (stacks) e filas (queues).
Listas de reprodução (playlists) ou listas de tarefas (task lists).
5. Problemas que Envolvem Conjuntos de Dados Fixos
Quando o tamanho do conjunto de dados é conhecido e fixo durante a execução do programa, vetores são apropriados. Exemplos incluem:

Armazenamento de resultados de exames onde o número de alunos é conhecido previamente.
Implementação de jogos onde o número de níveis ou jogadores é fixo.
6. Algoritmos de Ordenação e Busca
Vetores são frequentemente usados em algoritmos de ordenação (como bubble sort, quicksort) e busca (busca binária) devido à sua estrutura linear e acesso direto a elementos.

7. Manipulação de Dados em Blocos
Quando você precisa manipular grandes blocos de dados de forma eficiente, vetores são úteis. Exemplos incluem:

Processamento de sinais ou dados de sensores onde os dados são coletados em blocos.
Manipulação de dados em buffers para operações de E/S.





## Declaração de Vetores

Para declarar um vetor em C, deve-se especificar o tipo de dado dos elementos e o tamanho **máximo** do vetor. O trecho de código-fonte a seguir exemplifica a declaração de uma variável vetor capaz de armazenar até 10 valores inteiros:

```
int vi[10];
```

O exemplo a seguir mostra a declaração de vetores para outros tipos de dados:

```
double vd[5];
char vc[15];
```

## Inicialização de Vetores

Você pode inicializar um vetor ao declará-lo:

```
int vi[5] = {1, 2, 3, 4, 5};
```


```
int numeros[5] = {1, 2};
```

Você também pode omitir o tamanho do vetor ao inicializá-lo, e o compilador determinará o tamanho automaticamente:

```
int numeros[] = {1, 2, 3, 4, 5};
```

## Acessando Elementros de Vetores

Como falado anteriormente, os elementos do vetor são acessados usando índices, **sempre** começando de 0:

```
int primeiro = numeros[0]; 
numeros[2] = 10;
```

Você pode iterar sobre os elementos de um vetor usando loops, como for:

```
for (int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
}
```
