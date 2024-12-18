# 1. Operadores

## Incremento

Os operadores de incremento (++) e decremento (--) são usados para aumentar ou diminuir o valor de uma variável em 1 unidade.

Incremento (++): Adiciona 1 ao valor da variável.


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

Decremento (--): Subtrai 1 do valor da variável.

```
int i;

i = 1;
i=i-1;
printf("%d\n",i);
```

2. Tipos de Incremento e Decremento
Os operadores ++ e -- podem ser usados de duas maneiras diferentes:

2.1. Pós-Incremento (i++) e Pós-Decremento (i--)
O operador incrementa/decrementa o valor depois de a variável ser usada na expressão.
O valor original da variável é usado antes da alteração.
Exemplo:
c

int i = 5;
int x = i++;  // x = 5, depois i passa a ser 6
int y = i--;  // y = 6, depois i passa a ser 5
2.2. Pré-Incremento (++i) e Pré-Decremento (--i)
O operador incrementa/decrementa o valor antes de a variável ser usada na expressão.
O valor atualizado da variável é usado imediatamente.
Exemplo:
c
Copy code
int i = 5;
int x = ++i;  // i passa a ser 6, depois x = 6
int y = --i;  // i passa a ser 5, depois y = 5


**Atenção:** incremento apenas vale para operadores de soma e decremento apenas para operador de subtração. Não existe operação similar para operadores de multiplicação e divisão.

## Atribuição Composta

