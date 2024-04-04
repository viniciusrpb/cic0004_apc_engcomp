# 3. Variáveis e Expressões

## 3.3. Entrada e Saída de Dados

Todas as operações de leitura e escrita de dados se baseiam na Entrada e Saída Padrão (*Standard Input/Output*), isto é, a leitura ocorre por dispositivos conhecidos como teclado ou arquivos (com auxílio do Sistema Operacional) e a escrita ocorre na tela do computador ou em arquivos.

### Especificadores dos Tipos de Dados

Nas funções ```printf``` e ```scanf``` utilizaremos os seguintes especificadores de conversão para cada um dos tipos de dados estudados:

Tipo               | Especificador  | 
-----------------  | -----------    |
char               |  %c            |
int                |  %d            |
unsigned int       |  %ud           |
long int           |  %ld           |
long unsigned int  |  %lud          |


### scanf() Leitura de Dados

A função ```scanf()``` analisa a entrada de acordo com o formato (descrito entre aspas duplas) especificado pelo programador. Este formato pode conter os especificadores de conversão para a leitura de dados, os quais são armazenados nas variáveis indicadas pelos argumentos de endereço que aparecem após o formato, separados por vírgula. A função está implementada na biblioteca *stdio (Standard Input/Output)* logo é necessário incluir o comando ```#include <stdio.h>``` logo no início do código-fonte.

Por definição, a função ```scanf()``` apresenta o seguinte formato:

```
scanf("sentenca formatada", ...);
```

em que *"sentenca formatada"* é o formato da sentença como uma sequência de caracteres a ser lida da entrada e "..." são as variáveis separadas por vírgula que recebem dados que estão dentro da sentença e são convertidos de acordo com os especificadores na tabela acima. Por exemplo, no trecho de código-fonte a seguir:

```
int a;
scanf("%d",&a);
```

ocorre a leitura exata de um número inteiro. Já no exemplo abaixo, a entrada é lida conforme o formato *horas:minutos:segundos*, isto é, três valores inteiros separados por dois pontos são lidos e armazenados nas respectivas varíaveis inteiras, respeitando suas ordens:

```
int horas, minutos, segundos;
scanf("%d:%d:%d",&horas,&minutos,&segundos);
```

**IMPORTANTE:** Cada argumento de ponteiro deve ser de um tipo apropriado para o valor retornado pela especificação de conversão correspondente.

O ```&``` é um operador que retorna o endereço de uma variável na memória e para os tipos de dados apresentados acima, **sua presença é obrigatória** antes das variáveis. A função ```scanf()``` faz a leitura da entrada, converte os dados na sentença para as variáveis conforme as especificações nela contidas e os coloca nas porções de memória indicadas pelos endereços dessas variáveis. 

Apenas a título de curiosidade, o código-fonte abaixo mostra como funciona o operador ```&```. Veja como esse operador retorna o endereço da variável, e como o endereço da variável muda a cada execução feita no programa associado a esse código-fonte. O endereço de memória é impresso em notação hexadecimal devido ao uso do especificador de formato ```%p```.

```
#include<stdio.h>

int main(){
    char var_char;

    var_char = 'f';

    printf("Valor armazenado em var_char = %c\n",var_char);
    printf("Endereco na memoria de var_char = %p\n",&var_char);

    return 0;
}
```

A seguir, são apresentados exemplos de leitura de dados utilizando a função ```scanf()``` para os diferentes tipos de dados:

```
#include<stdio.h>

int main(){
    char var_char;

    scanf("%c",&var_char);

    return 0;
}
```

```
#include<stdio.h>

int main(){
    int var_int;

    scanf("%d",&var_int);

    return 0;
}
```

```
#include<stdio.h>

int main(){
    long int var_li;

    scanf("%ld",&var_li);

    return 0;
}
```

Lendo um valor real de uma variável do tipo ```float```:

```
#include<stdio.h>

int main(){
    float var_f;

    scanf("%f",&var_f);

    return 0;
}
```

Lendo um valor real de uma variável do tipo ```double```:

```
#include<stdio.h>

int main(){
    double var_db;

    scanf("%lf",&var_db);

    return 0;
}
```



### printf() Escrita de Dados

```
#include<stdio.h>

int main(){
    int var_int;

    printf("Digite um numero inteiro: ");
    scanf("%d",&var_int);

    printf("Valor inteiro informado: %d\n",var_int);

    return 0;
}
```

** CURIOSIDADE **

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
