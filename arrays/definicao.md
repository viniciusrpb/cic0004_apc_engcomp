# 6.1. Definição

## Representação de Vetores

Um vetor é uma estrutura de dados em que cada elemento estará associado com uma posição, ou índice, como mostra a figura abaixo:

![arrays](images/arrays2.png)

Com essa estrutura de dados, é possível ter acesso rápido e sequencial dos dados.

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
```
#include<stdio.h>

int main(){
    int i,n;
    int vi[5]; // armazena no max. 5 valores inteiros

    n = 5;

    vi[0] = 3;
    vi[1] = 5;
    vi[2] = 0;
    vi[3] = -2;
    vi[4] = 7;

    // for para iterar sobre cada posicao do vetor
    for(i = 0; i < n; i++){
        printf("vi[%d] = %d\n",i,vi[i]);
    }
    printf("\n");

    return 0;
}
```


```
#include<stdio.h>

int main(){
    int i,n;

    n = 5;
    // inicializar um vetor
    // colocando os inteiros logo na declaracao
    int arr[5] = {3,5,0,-2,7};

    // for para iterar sobre cada posicao do vetor
    for(i = 0; i < n; i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("\n");

    return 0;
}
```

```
#include<stdio.h>
#define MAX_N 1000

int main(){
    int i,n;

    int arr[MAX_N];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    // for para iterar sobre cada posicao do vetor
    for(i = 0; i < n; i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("\n");

    return 0;
}
```





