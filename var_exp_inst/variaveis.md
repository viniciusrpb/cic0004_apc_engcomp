# 3.1. Variáveis e Tipos de Dados

## O que é uma variável?

Definição: Uma variável é definida como uma abstração para uma posição (endereço) de memória. É bem melhor para os programadores se referirem a um endereço de memória por nome de sua preferência do que por endereços diretos de memória. 

Imagina se tivéssemos que nos referir diretamente aos endereços de memória para armazenar dados como mostra o código-fonte **inválido** (sim, o código-fonte abaixo está errado!) abaixo:

```
#include<stdio.h>

int main(){

    0x7fff9779d954 = 2;

    return 0;
}
```

Repare que isso já ocorreu nos computadores antigos (veja [aqui sobre os computadores com arquitetura de memória explícita](https://pt.wikipedia.org/wiki/IBM_System/360)), mas hoje em dia isso é impensável considerando as linguagem de alto nível (a Linguagem C), em que temos programas de computadores mais complexos do que antigamente. Atualmente, os compiladores em conjunto com o sistema operacional assumem a responsabilidade de alocar o espaço de memória para as variáveis declaradas no programa.

## Como nomear uma variável?

Os nomes das variáveis podem ter vários caracteres, em que apenas os 31 primeiros caracteres são considerados. As regras são as seguintes para nomear uma variável:

- o primeiro caractere tem que ser uma letra ou sublinhado ```_```;
- o restante do nome da variável pode conter letras, dígitos e sublinhados;
- palavras reservadas da linguagem C não podem ser utilizadas como nome de variáveis, como ```int```, ```while```, ```return```, ```main``` etc;
- existe distinção entre letras maiúsculas e minúsculas na linguagem C. Logo as variáveis com os nomes "flag", "Flag" e "FLAG" são diferentes;
- **dica:** coloque nome para as variáveis de acordo com seu papel ou funcionamento dentro do código-fonte.

## Tipos de Dados

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

O que o código-fonte acima imprime na tela? Como vemos, a = 10<sup>9</sup> e b = 10<sup>9</sup>, logo espera-se que p = 10<sup>18</sup>. Peraí... veja que 10<sup>18</sup> **NÃO PODE** ser representado por uma variável inteira, pois 10<sup>18</sup> é bem maior do que o valor máximo aproximado 2<sup>9</sup> que uma variável do tipo ```int``` suporta. Bom, precisamos de um tipo de dados que armazene mais informações.... (veja na parte de modificadores).

### float

Permite representar um número real com até 7 dígitos de precisão, considerando todos os dígitos das partes inteira e fracionária (real, de fato) desse número. Uma variável do tipo ```float``` tem capacidade de armazenamento de 4 bytes. 

**DEFINIÇÃO:** A precisão se refere aos dígitos que informam o valor do número, isto é, excluindo zeros à esquerda e zeros à direita após a parte decimal. Por exemplo, o número ```712,3546``` tem sete dígitos de precisão, em que 3 deles estão na parte inteira e 4 na parte fracionária. Quanto mais dígitos de precisão um número tem, mais detalhes podem ser efetivamente representados.

No código-fonte abaixo, declaramos a variável ```var_f``` como sendo do tipo ```float``` e atribuímos o valor ```712.3546``` a ela.

```
#include<stdio.h>

int main(){
    float var_f;

    var_f = 712.3546;

    return 0;
}
```

### double

Permite representar um número real com até 15 dígitos de precisão, o que é aproximadamente o dobro de um valor real no tipo ```float```. Isso se deve ao fato da variável possuir capacidade de armazenamento de 8 bytes.

No código-fonte abaixo, a variável ```var_db``` é declarada como sendo do tipo ```double``` e recebe um valor real com muitos dígitos, mas que são suficientes para serem armazenados:

```
#include<stdio.h>

int main(){
    double var_db;

    var_db = 123561.0238495334;

    return 0;
}
```

**Observação importante:** evite o uso de variáveis do tipo *float* devido a sua baixa precisão que podem ocasionar cálculos imprecisos na parte fracionária. Ademais, nem todo valor real pode ser representado por variáveis *float*, como mostra o exemplo

```
#include<stdio.h>

int main(){
    float f;

    f = 561.0238495334;

    return 0;
}
```

## Modificadores

Os modificadores são utilizados para variações dos tipos de dados nativamente existentes na linguagem C.

### long (ou long long)

Comumente utilizado em conjunto com o tipo ```long int```, gerando-se o tipo ```long int``` ou ```long long int```. Esse tipo permite representar um valor inteiro (negativo, zero ou positivo) em uma variável que ocupa 8 bytes na memória, indicando maior capacidade de guardar informações do que a variável ```int``` tradicional. Com 8 bytes, o valor inteiro a ser armazenado pode estar contido no intervalo aproximado *[-9 x 10<sup>18</sup>, 9 x 10<sup>18</sup>]*. O código-fonte seguinte mostra a declaração de uma variável do tipo ```long int```, chamada ```var_li``` recebendo o valor constante ```5000000000000000000```:

```
#include<stdio.h>

int main(){
    long int var_li;

    var_li = 5000000000000000000;

    return 0;
}
```

Em alguns outros códigos-fontes e materiais, vocês podem encontrar o tipo ```long long int```. Esse tipo foi desenvolvido visando diferenciar as variáveis ```long``` das arquiteturas 32 bits e 64 bits de computadores, que coexistiam entre os anos de 2000 até 2010. Vale lembrar que nos computadores de arquitetura 32 bits, a variável ```long int``` utilizava 4 bytes e a variável ```int``` utilizava 2 bytes! Como os computadores atuais possuem arquitetura 64 bits, tanto ```long long int``` e ```long int``` irão utilizar 8 bytes para armazenar um inteiro "maior" na memória.

O código-fonte abaixo ilustra a declaração de uma variável do tipo ```long long int``` e a atribuição de um valor inteiro grande para ela:

```
#include<stdio.h>

int main(){
    long long int var_lli;

    var_lli = 5000000000000000000;

    return 0;
}
```
### unsigned

Ao incluir o modificador ```unsigned``` antes das declarações de variáveis do tipo ```int```, pode-se trabalhar com valores inteiros sem sinal, ou seja, apenas inteiros não-negativos. Nesse caso, não é possível se trabalhar com números negativos. Entretanto, como a capacidade de armazenamento nas variáveis ```unsigned``` não é aumentada, o tamanho da faixa de valores positivos com que se pode trabalhar é dobrada.

O código-fonte abaixo mostra a declaração de duas variáveis inteiras sem sinal para os tipos ```int``` e ```long```:

```
#include<stdio.h>

int main(){
    unsigned int a;
    unsigned long long int b;

    a = 5;
    b = a+1;

    return 0;
}
```


## Tabelas resumo

Tipo                    | Tamanho na Memória  | Valor Mínimo           | Valor Máximo                         | Descrição                                         |
----------------------- | ------------------  | ---------------------- | ------------------------------------ | ------------------------------------------------- |
char                    |  1 byte             | 0                      | 255                                  | Armazena um caractere (ver a tabela ASCII)        |
int                     |  4 bytes            | -2 x 10<sup>-9</sup>   | 2 x 10<sup>9</sup>                   | Armazena um valor inteiro normal com sinal        |
unsigned int            |  4 bytes            | 0                      | 4 x 10<sup>9</sup>                   | Armazena um valor inteiro normal sem sinal        |
long long int           |  8 bytes            | -9 x 10<sup>18</sup>   | 9 x 10<sup>18</sup>                  | Armazena um valor inteiro grande com sinal        |
unsigned long long int  |  8 bytes            | 0                      | 10<sup>19</sup>                      | Armazena um valor inteiro grande sem sinal        |          


Tipo              | Tamanho na Memória  | Dígitos de Precisão (Partes Inteira + Fracionária)             |
----------------- | ------------------  | -------------------------------------------------------------- |
float             |  4 bytes            | 7                                                              |
double            |  8 bytes            | 15                                                             |
    
