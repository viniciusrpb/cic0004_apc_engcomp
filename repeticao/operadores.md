# 1. Operadores de Incremento e Decremento

**Atenção:** incremento apenas vale para operadores de soma e decremento apenas para operador de subtração. Não existe operação similar para operadores de multiplicação e divisão.

## Incremento

O operador de incremento (++) são usados para aumentar o valor de uma variável em 1 unidade. Isso significa que:

```i = i + 1```

é uma operação equivalente a ```i++```.

Veja no código-fonte abaixo:

```
int i;

i = 1;
i=i+1;
printf("%d\n",i);
```

Podemos reescrever assim:

```
int i;

i = 1;
i++;
printf("%d\n",i);
```

ou então assim:

```
int i;

i = 1;
i++;
printf("%d\n",i);
```

## Decremento

Já o operador decremento (--) subtrai o valor da variável em uma unidade. Portanto,

```i = i - 1```

é uma operação equivalente a ```i--```.

## Tipos de Incremento e Decremento

Os operadores ++ e -- podem ser usados de duas maneiras diferentes:

### Pós-Incremento (i++) e Pós-Decremento (i--)

O operador incrementa ou decrementa o valor que está na variável associada depois desta variável ter sido utilizada na expressão ou operação correspondente. Com isso, o valor original da variável é usado antes da alteração:

No trecho de código-fonte a seguir:

```
int i,x,y;

i = 5;
x = i++;

printf("x = %d\n",x);
printf("i = %d\n",i);
```

A saída é:

 ```x = 5
 i = 6```

pois na operação ```x = i++;```, a ordem das operações é:

1) ```x``` recebe o valor de ```i```, ou seja, ```x = i``` => ```x = 5```
2) Executa-se então ```i=i+1```. Logo ```i = 5 + 1 = 6```.

Já no exemplo adiante:

```
int i,x,y;

i = 5;
x = i--;

printf("x = %d\n",x);
printf("i = %d\n",i);
```

A saída é:

 ```x = 5
 i = 4```.

pois na operação ```x = i--;```, a ordem das operações é:

1) ```x``` recebe o valor de ```i```, ou seja, ```x = i``` => ```x = 5```
2) Executa-se então ```i=i-1```. Logo ```i = 5 - 1 = 4```.

### Pré-Incremento (++i) e Pré-Decremento (--i)

O operador incrementa/decrementa o valor antes de a variável ser usada na expressão.
O valor atualizado da variável é usado imediatamente.

```
int i = 5;
int x = ++i;  // i passa a ser 6, depois x = 6
int y = --i;  // i passa a ser 5, depois y = 5
```

## Atribuição Composta

## Exercícios




