# 6.1. Definição

## Representação de Vetores



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
