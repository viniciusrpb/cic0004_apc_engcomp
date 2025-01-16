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

```
x = 5
i = 6
```

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

```
x = 5
i = 4
```

pois na operação ```x = i--;```, a ordem das operações é:

1) ```x``` recebe o valor de ```i```, ou seja, ```x = i``` => ```x = 5```
2) Executa-se então ```i=i-1```. Logo ```i = 5 - 1 = 4```.


### Pré-Incremento (++i) e Pré-Decremento (--i)

Por sua vez, no Pré-Incremento e no Pré-Decremento, o operador incrementa/decrementa o valor da variávle correspondente antes de ela seja utilizada na expressão. Isso significa que o valor atualizado da variável é utilizado imediatamente na expressão/operação correspondente.

No trecho de código-fonte a seguir:

```
int i,x,y;

i = 5;
x = ++i;

printf("x = %d\n",x);
printf("i = %d\n",i);
```

A saída é:

```
x = 6
i = 6
```

pois na operação ```x = ++i;```, a ordem das operações é:

1) Executa-se ```i=i+1```. Logo ```i = 5 + 1 = 6```
2) Em seguida, ```x``` recebe o valor de ```i```, ou seja, ```x = i``` => ```x = 6```. 


O mesmo vale para o pré-decremento. Recomenda-se fazer alguns exercícios abaixo para fixação do conteúdo.

## Atribuição Composta

| Operador | Significado              | Equivalente em expressão  |
|----------|--------------------------|---------------------------|
| `+=`     | Soma e atribui           | `x += y` → `x = x + y`    |
| `-=`     | Subtrai e atribui        | `x -= y` → `x = x - y`    |
| `*=`     | Multiplica e atribui     | `x *= y` → `x = x * y`    |
| `/=`     | Divide e atribui         | `x /= y` → `x = x / y`    |
| `%=`     | Calcula o módulo e atribui | `x %= y` → `x = x % y` |


## Exercícios

O que o código-fonte abaixo gera como saída?

```
#include<stdio.h>

int main(){

    int i;
    
    i = 3;
    if(i++ > 3){
        printf("A\n");
    }
    else{
        printf("B\n");
    }
    return 0;
}
```

e esse código-fonte aqui?
**Resposta**: ```B```.

```
#include<stdio.h>

int main(){

    int i;
    
    i = 3;
    if(++i > 3){
        printf("A\n");
    }
    else{
        printf("B\n");
    }
    return 0;
}
```

**Resposta**: ```A```.


