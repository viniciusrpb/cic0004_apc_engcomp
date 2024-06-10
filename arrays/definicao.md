# 6.1. Definição


Declaração de Vetores
Para declarar um vetor em C, você precisa especificar o tipo de dado dos elementos e o tamanho do vetor. Por exemplo:

c
Copy code
int numeros[10]; // Declara um vetor de 10 inteiros
Isso cria um vetor chamado numeros que pode armazenar 10 valores inteiros.

Inicialização de Vetores
Você pode inicializar um vetor ao declará-lo:

c
Copy code
int numeros[5] = {1, 2, 3, 4, 5}; // Inicializa com valores 1, 2, 3, 4 e 5
Se você fornecer menos valores do que o tamanho do vetor, os elementos restantes serão inicializados como zero:

c
Copy code
int numeros[5] = {1, 2}; // Inicializa com 1, 2, 0, 0, 0
Você também pode omitir o tamanho do vetor ao inicializá-lo, e o compilador determinará o tamanho automaticamente:

c
Copy code
int numeros[] = {1, 2, 3, 4, 5}; // Tamanho será 5
Acesso a Elementos de Vetores
Os elementos do vetor são acessados usando índices, começando de 0:

c
Copy code
int primeiro = numeros[0]; // Acessa o primeiro elemento
numeros[2] = 10; // Define o terceiro elemento como 10
Iteração sobre Vetores
Você pode iterar sobre os elementos de um vetor usando loops, como for:

c
Copy code
for (int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
}
Vetores Multidimensionais
C também suporta vetores multidimensionais, como matrizes:

c
Copy code
int matriz[3][4]; // Declara uma matriz 3x4
Inicialização de vetores multidimensionais pode ser feita de forma análoga:

c
Copy code
int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
Operações Comuns com Vetores
Encontrar o Tamanho de um Vetor
Em C, não há uma função embutida para encontrar o tamanho de um vetor. No entanto, você pode calcular o tamanho de um vetor conhecido em tempo de compilação usando sizeof:

c
Copy code
int tamanho = sizeof(numeros) / sizeof(numeros[0]);
Copiar Vetores
Copiar elementos de um vetor para outro pode ser feito com um loop:

c
Copy code
int destino[5];
for (int i = 0; i < 5; i++) {
    destino[i] = numeros[i];
}
Buscar em Vetores
Para buscar um elemento específico em um vetor, você pode usar um loop:

c
Copy code
int buscar = 3;
int encontrado = -1;
for (int i = 0; i < 5; i++) {
    if (numeros[i] == buscar) {
        encontrado = i;
        break;
    }
}
Ordenar Vetores
Para ordenar um vetor, você pode usar algoritmos de ordenação como bubble sort, quicksort, ou a função qsort da biblioteca padrão:

c
Copy code
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

qsort(numeros, 5, sizeof(int), comparar);
Exemplo Completo
Aqui está um exemplo completo que demonstra várias operações com vetores:

c
Copy code
#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int numeros[] = {5, 3, 4, 1, 2};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // Imprime o vetor original
    printf("Vetor original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Ordena o vetor
    qsort(numeros, tamanho, sizeof(int), comparar);

    // Imprime o vetor ordenado
    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Busca um elemento no vetor
    int buscar = 3;
    int encontrado = -1;
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] == buscar) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1) {
        printf("Elemento %d encontrado na posição %d\n", buscar, encontrado);
    } else {
        printf("Elemento %d não encontrado\n", buscar);
    }

    return 0;
}
Este exemplo cobre a declaração, inicialização, acesso, iteração, ordenação e busca em um vetor.
