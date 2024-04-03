# 3. Variáveis, Expressões e Instruções

## 3.1. Variáveis

Seguem as 

- char

- int

- unsigned int

- float

- double

- unsigned long int


### Tabela resumo

Tipo     | Tamanho na Memória  | Valor Mínimo | Valor Máximo | Descrição |
--------- | ------------------ | ------------ | ------------ | --------- |
char      |  1 byte            | 0            | 255          | Armazena um caractere (ver a tabela ASCII) |
int            |  4 bytes           | -2 x 10^{-9} | 2 x 10^9     | Armazena um valor inteiro normal  |
unsigned int   |  4 bytes           | 0 | 4 x 10^9     | Armazena um valor inteiro normal sem sinal  |
float     |  4 bytes           | -2 x 10^{-9} | 2 x 10^9     | Para valores reais de precisão simples |
long int  |  8 bytes           | -4 x 10^{-18} | 4 x 10^{18}  | Para valores inteiros longos |
unsigned long int  |  8 bytes           | 0 | 10^{19}  | Para valores inteiros longos sem sinal |
double    |  8 bytes           | 0 | 10^{19} | Para valores reais com precisão dupla


```
#include<stdio.h>

int main(){
    char c1,c2;

    c1 = '4';
    c2 = 'a';

    printf("Caractere c1 = %c\n",c1);
    printf("Segundo caractere eh %c\n",c2);

    c2 = c1;  // variavel c2 recebe o valor da variavel c1

    printf("Agora c2 = %c\n",c2);

    //printf("Codigo Ascii de %c eh %d\n",c2,c2);

    return 0;
}
```

## 3.2. Expressões





### Atribuição

Atribui o valor ```5``` à variável inteira ```a```:

```
int a;

a = 5;
```

Atribui o valor que está na variável inteira ```b``` à variável inteira ```a```:

```
int a,b;

a = 3;
b = 9;

a = b;
```

### Operadores Matemáticos

#### Soma 

Classicamente, é descrita na seguinte forma: "resultado" = "operando 1" + "operando 2"

Na Linguagem C, colocamos alguns exemplos de como realizar somas:

**Exemplo (1):** Somar uma constante a uma variável e armazenar o resultado em outra variável:

```
int a,b,soma;

a = 3;
b = 5;

soma = a+4;
```

**Exemplo (2):** Somar duas variáveis distintas e armazenar o resultado em outra variável:

```
int a,b,soma;

a = 3;
b = 5;

soma = a+b;
```

**Exemplo (3):** Somar um valor constante a uma variável e armazenar o resultado nela mesma:

```
int a;

a = 3;

a = a+3;   /* a+=3; */
```

**Exemplo (4):** Aumentar **exatamente** em uma unidade o valor de uma variável inteira **(só funciona com variáveis inteiras)**:

```
int a;

a = 3;

a++;
```

