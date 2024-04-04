# 3. Variáveis, Expressões e Instruções

## 3.1. Variáveis

Definição: Uma variável é definida como uma abstração para uma posição (endereço) de memória. É bem melhor para os programadores se referirem a um endereço de memória por nome de sua preferência do que por endereços diretos de memória. 

Imagina se tivéssemos que nos referir diretamente aos endereços de memória para armazenar dados como mostra o código-fonte **inválido** (sim, o código-fonte abaixo está errado!) abaixo:

```
#include<stdio.h>

int main(){

    0x7fff9779d954 = 2;

    return 0;
}
```

Seria um **caos** completo. Teríamos que verificar se o endereço de memória está disponível e encontrar outros endereços alternativos em caso afirmativo. Isso ocorre porque o endereço de memória de cada variável muda a cada execução de um programa. 

## 3.2 Tipos de Dados

### char

Permite representar um caractere utilizando-se 1 byte na memória. Geralmente, é comum utilizarmos os caracteres definidos pelo padrão ASCII como mostra a [Tabela ASCII](https://www.ime.usp.br/~kellyrb/mac2166_2015/tabela_ascii.html).

O código-fonte abaixo exemplifica como uma variável do tipo ```char```, de nome ```var_char```, é declarada e um valor constante lhe é atribuído. As constantes ```char``` são sempre apresentadas entre aspas simples, como mostra o caractere ```'e'``` no código-fonte abaixo:

```
#include<stdio.h>

int main(){
    char var_char;

    var_char = 'e';

    return 0;
}
```

### int

Permite representar um valor inteiro (negativo, zero ou positivo) em uma variável que ocupa 4 bytes na memória. Com isso, essa variável armazena exatamente valores entre o intervalo *[-32.768,32.767O]*, o que é aproximadamente *[-2 x 10<sup>-9</sup>,2 x 10<sup>9</sup>]*. O código-fonte seguinte mostra a declaração de uma variável do tipo ```int```, chamada ```var_int```, e o valor constante ```16``` lhe é atribuído:

```
#include<stdio.h>

int main(){
    int var_int;

    var_int = 16;

    return 0;
}
```

Podemos utilizar o modificador **unsigned** 

Atenção, cuidado com o **overflow** que podem ocorrer em variáveis do tipo ```int``` após operações de leitura de dados ou aritméticas. Veja o exemplo abaixo:

```
#include<stdio.h>

int main(){
    int a,b,p;

    a = 1000000000;
    b = 2000000000;

    p = a*b; /* opa! overflow bem aqui */

    printf("%d\n",p);

    return 0;
}
```

O que o código-fonte acima imprime na tela? Como vemos, ```a = 10<sup>9</sup>``` e ```b = 10<sup>9</sup>```, logo espera-se que ```p = 10<sup>18</sup>```. Peraí... veja que ```10<sup>18</sup>``` **NÃO PODE** ser representado por uma variável inteira, pois ```10<sup>18</sup>``` é bem maior do que o valor máximo aproximado ```2<sup>9</sup>``` que uma variável do tipo ```int``` suporta. Bom, precisamos de um tipo de dados que armazene mais informações.... (veja a seguir).

### long int

Permite representar um valor inteiro (negativo, zero ou positivo) em uma variável que ocupa 4 bytes na memória. Com isso, essa variável armazena exatamente valores entre o intervalo *[-32.768,32.767O]*, o que é aproximadamente *[-2 x 10<sup>-9</sup>,2 x 10<sup>9</sup>]*. O código-fonte seguinte mostra a declaração de uma variável do tipo ```int```, chamada ```var_int```, e o valor constante ```16``` lhe é atribuído:

```
#include<stdio.h>

int main(){
    int var_int;

    var_int = 16;

    return 0;
}
```

### float

Permite representar um número real com até 7 dígitos de precisão, considerando a parte inteira e a parte fracionária. **A precisão se refere aos dígitos que informam o valor do número, isto é, excluindo zeros à esquerda e zeros à direita após a parte decimal**. Uma variável do tipo float tem capacidade de armazenamento de 4 bytes. 

    Por exemplo, o número ```712,3546``` tem sete dígitos de precisão, em que 3 deles estão na parte inteira e 4 na parte fracionária. Quanto mais dígitos de precisão um número tem, mais detalhes ele pode representar com precisão.

- double: permite representar um número real com até 15 dígitos de precisão, o que é aproximadamente o dobro de um valor real no tipo ```float```. Isso se deve ao fato da variável possuir capacidade de armazenamento de 8 bytes.

**Observação importante:** evite o uso de variáveis do tipo *float* devido a sua baixa precisão que podem ocasionar em erros de cálculos. Ademais, nem todo valor real pode ser representado por variáveis *float*:

```
#include<stdio.h>

int main(){
    float f;

    f = 561.0238495334;

    printf("%.7f\n",f);
    return 0;
}
```


### Tabelas resumo

Tipo               | Tamanho na Memória  | Valor Mínimo           | Valor Máximo                         | Descrição                                         |
-----------------  | ------------------  | ---------------------- | ------------------------------------ | ------------------------------------------------- |
char               |  1 byte             | 0                      | 255                                  | Armazena um caractere (ver a tabela ASCII)        |
int                |  4 bytes            | -2 x 10<sup>-9</sup>   | 2 x 10<sup>9</sup>                   | Armazena um valor inteiro normal com sinal        |
unsigned int       |  4 bytes            | 0                      | 4 x 10<sup>9</sup>                   | Armazena um valor inteiro normal sem sinal        |
long int           |  8 bytes            | -4 x 10<sup>18</sup>   | 4 x 10<sup>18</sup>                  | Armazena um valor inteiro grande com sinal        |
unsigned long int  |  8 bytes            | 0                      | 10<sup>19</sup>                      | Armazena um valor inteiro grande sem sinal        |          


Tipo              | Tamanho na Memória  | Dígitos de Precisão (Partes Inteira + Fracionária)             |
----------------- | ------------------  | -------------------------------------------------------------- |
float             |  4 bytes            | 7                                                              |
double            |  8 bytes            | 15                                                             |
    


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

