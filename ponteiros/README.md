# Ponteiros

Um ponteiro é uma variável que armazena o endereço de memória de outra variável. Em vez de conter um valor (inteiro, real ou caractere), um ponteiro aponta para o endereço de uma variável "normal" que armazena outro valor. Isso é extremamente útil em várias situações, como no gerenciamento dinâmico de memória, na manipulação de arrays (vetores, strings e matrizes), em passagem por referência em funções e na implementação de estruturas de dados complexas como listas ligadas.

## Endereços de Variáveis

Lembre-se que uma variável é uma abstração de uma posição de memória. Para obter o endereço de memória de uma variável, deve-se utilizar o operador ```&```. Para imprimir um endereço de memória em notação hexadecimal, deve-se utilizar o especificador ```%p``` na função ```printf``` como se segue:

```
#include<stdio.h>

int main(){

    int n;

    n = 3;

    printf("Endereco de n: %p\n",&n);
    printf("Valor de n: %d\n",n);

    return 0;
}
```

A cada execução do programa acima, o endereço da variável ```n``` será diferente. Se tivermos mais variáveis, veja como fica os endereços das seguintes variáveis no código-fonte abaixo:

```
#include<stdio.h>

int main(){

    int n = 3;
    char c = '1';
    double d = 4.934;

    printf("Endereco de n: %p\n",&n);
    printf("Endereco de c: %p\n",&c);
    printf("Endereco de d: %p\n",&d);

    return 0;
}
```

Você consegue identificar alguma relação entre os endereços impressos?


## Declaração

Para declarar um ponteiro (ou variável ponteiro), deve-se utilizar o operador * antes do nome da variável. Por exemplo:

```
tipo *nome_variavel;
```

em que ```tipo``` é ```int```, ```float```, ```double```, ```char```, ```long long int``` e até mesmo ```void```.  Assim, quando-se tem:

```
int *pa;
```

tem-se um ponteiro para inteiro, pois esse ponteiro armazena o endereço de memória de uma variável inteira. Da mesma maneira, na declaração abaixo, temos um ponteiro para double:

```
double *pd;
```

que armazena o endereço de uma variável real de precisão dupla.

## Atribuição de Endereços

Para fazer um ponteiro apontar para uma variável, deve-se utilizar o operador ```&``` para obter o endereço dessa variável. Por exemplo:

```
int num = 5;
int *p;

p = &num;  // p aponta para num
```

Assim, o ponteiro ```p``` contém o endereço de memória da variável ```num```. 

## Acessando Indireto de Valor

Para acessar o valor armazenado no endereço de memória apontado por um ponteiro, deve-se utilizar o operador indireto ```*```:

```
Copy code
int num = 10;
int *ptr = &num;

printf("Valor de num: %d\n", num);        // Imprime 10
printf("Valor apontado por ptr: %d\n", *ptr); // Também imprime 10


Aqui, *ptr retorna o valor de num.

Ponteiros e Arrays
Em C, o nome de um array é um ponteiro para o primeiro elemento do array. Por exemplo:

c
Copy code
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;

printf("Primeiro elemento: %d\n", *ptr); // Imprime 1
Você pode usar aritmética de ponteiros para acessar outros elementos do array:

c
Copy code
printf("Segundo elemento: %d\n", *(ptr + 1)); // Imprime 2
Ponteiros e Alocação Dinâmica de Memória
Os ponteiros são essenciais para a alocação dinâmica de memória em C. Funções como malloc, calloc, realloc e free são usadas para gerenciar memória em tempo de execução.

c
Copy code
int *ptr;
ptr = (int *)malloc(5 * sizeof(int)); // Aloca memória para 5 inteiros

if (ptr == NULL) {
    printf("Falha na alocação de memória\n");
    return 1;
}

// Usando a memória alocada
for (int i = 0; i < 5; i++) {
    ptr[i] = i + 1;
}

for (int i = 0; i < 5; i++) {
    printf("%d ", ptr[i]);
}

// Liberando a memória alocada
free(ptr);
Ponteiros para Ponteiros
Em C, você pode ter ponteiros que apontam para outros ponteiros. Isso é útil para criar arrays de ponteiros ou manipular strings de forma mais flexível.

c
Copy code
int num = 10;
int *ptr = &num;
int **pptr = &ptr;

printf("Valor de num: %d\n", num);
printf("Valor apontado por ptr: %d\n", *ptr);
printf("Valor apontado por pptr: %d\n", **pptr);
Conclusão
Ponteiros são uma parte poderosa e essencial da linguagem C, permitindo um controle mais granular da memória e a criação de estruturas de dados complexas. No entanto, é importante usá-los com cuidado para evitar erros comuns, como a desreferência de ponteiros nulos ou o uso de ponteiros não inicializados.

## Definição

## Operador &

```
#include<stdio.h>

int main(){

    int n;
    char c;
    int *p;  // ponteiro para inteiro
    char *pc; // ponteiro para char

    scanf("%d",&n);

    printf("Endereco de n: %p\n",&n);
    printf("Endereco de c: %p\n",&c);
    printf("Endereco de *p: %p\n",&p);
    printf("Endereco de *pc: %p\n",&pc);

    return 0;
}
```

## Operador Indireto (*)

```
#include<stdio.h>

int main(){

    int n;
    int *p;  // ponteiro para inteiro

    n = 3;

    p = &n;  // p aponta para n
             // p armazena o endereco de n

    printf("Endereco de n: %p\n",&n);
    printf("Valor de n: %d\n",n);
    printf("Endereco armazenado em p: %p\n",p);
    printf("Acesso indireto a n: %d\n",*p);

    *p = 7;

    printf("2) Valor de n: %d\n",n);

    return 0;
}
```

## Aritmética de Ponteiros



## Ponteiros e Vetores

```
#include<stdio.h>
#define MAX_N 10
int main(){

    int i,n;
    int v[MAX_N];

    printf("Endereco de v: %p\n",v);
    printf("Endereco de v (com &): %p\n",&v);

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("v[%d] no endereco %p\n",i,v+i);
        scanf("%d",v+i);
    }

    for(i = 0; i < n; i++){
        printf("%d ",*(v+i)); //v[i]
    }
    printf("\n");

    return 0;
}
```

