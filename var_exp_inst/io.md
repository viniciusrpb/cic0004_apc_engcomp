# 3. Algoritmos Computacionais Sequenciais

## 3.3. Entrada e Saída de Dados

Todas as operações de leitura e escrita de dados se baseiam na Entrada e Saída Padrão (*Standard Input/Output*), isto é, a leitura ocorre por dispositivos conhecidos como teclado ou arquivos (com auxílio do Sistema Operacional) e a escrita ocorre na tela do computador ou em arquivos.

### Especificadores dos Tipos de Dados

Nas funções ```printf``` e ```scanf``` utilizaremos os seguintes especificadores de conversão para cada um dos tipos de dados estudados:

Tipo                    | Especificador  | 
----------------------- | -----------    |
char                    |  %c            |
int                     |  %d            |
unsigned int            |  %ud           |
long long int           |  %lld          |
long long unsigned int  |  %llud         |


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

ocorre a leitura exata de um número inteiro.

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

Vamos aprender agora a realizar leituras utilizando o scanf de algumas entradas mais difíceis. Algumas considerações sobre a função **scanf**:

- ela ignora automaticamente caracteres de espaço em branco (como espaços, quebras de linha ou tabulações) antes de iniciar a leitura;
- é projetada para interpretar entradas formatadas de acordo com o padrão especificado, o que permite lidar com entradas bem estruturadas. Assim, o **scanf** verifica automaticamente se o formato da entrada é o esperado e falha se houver inconsistências;

#### Exemplo 1

Suponha que queiramos ler separadamente a parte inteira e a parte fracionária de um número real de acordo com o exemplo abaixo:

```
56.7812
```

Vamos declarar uma variável para parte inteira e outra para a parte fracionária:

```
int pInt,pFrac;
scanf("%d.%d",&pInt,&pFrac);
```

Como o scanf é capaz de realizar a leitura de texto literal, a variável ```pInt``` receberá o valor *56* enquanto que o variável ```pFrac``` receberá o valor *7812*. Para que tudo funcione corretamente, todas as entradas têm que seguir exatamente essa estrutura. 

#### Exemplo 2

Suponha que entrada deva ser lida de acordo o formato *horas:minutos:segundos*, isto é, três valores inteiros separados por dois pontos são lidos e armazenados nas respectivas varíaveis inteiras, respeitando suas ordens. Segue um exemplo:

```
12:45:37
```

Podemos elaborar o seguinte trecho de código-fonte para realizar

```
int horas, minutos, segundos;
scanf("%d:%d:%d",&horas,&minutos,&segundos);
```

#### Exemplo 3

Suponha agora que temos que ler a entrada que representa uma data na primeira linha e a hora na segunda linha de acordo com o seguinte exemplo:

```
Data: 12/03/1986
Hora: 15:55
```

em que deve-se ler o dia, o mês, o ano, as horas e os minutos em **cinco variáveis inteiras distintas**.

Podemos elaborar o seguinte trecho de código-fonte para realizar a leitura das variáveis:

```
int dia, mes, ano, horas, minutos;
scanf("Data: %d/%d/%d\n",&dia,&mes,&ano);
scanf("Hora: %d:%d",&horas,&minutos);
```

Quando texto literal no formato (como Data: ou Hora:), o **scanf** espera que o mesmo texto apareça exatamente na entrada. Por exemplo, o trecho "Data: %d/%d/%d\n" exige que a entrada comece com a palavra "Data:", seguida por três números inteiros separados por /. Esse comportamento é usado para garantir que o formato da entrada corresponda ao esperado.

Observe que o caractere ```\n``` (quebra de linha) é necessário, pois estamos realizando a leitura alternada entre caracteres não-numéricos (```Data:```, ```/```, ```:```, ```Hora:```) e os números inteiros de nosso interesse. A quebra de linha instrui o scanf a avançar corretamente para o próximo trecho da entrada.

Como resultado, temos que para o exemplo acima, ```dia = 12```, ```mes = 03```, ```ano = 1986```, ```horas = 15``` e ```minutos = 55```. 

### printf() Escrita de Dados

A função **printf** é uma das mais importantes da linguagem C e é usada para imprimir dados formatados na saída padrão (geralmente o terminal). Faz parte da biblioteca padrão do C (stdio.h) e permite exibir texto, números e outros valores com grande flexibilidade.

1. Protótipo da Função
A assinatura básica de printf é:

c
Copy code
int printf(const char *format, ...);
format: Uma string de formato que especifica como os argumentos serão exibidos.
...: Uma lista de argumentos variáveis, cujos valores serão formatados e exibidos conforme o especificado na string de formato.

3. A String de Formato
A string de formato (format) é uma cadeia de caracteres que pode incluir:

Texto Literal:

Qualquer texto que aparecer na string será exibido literalmente na saída.
Exemplo:
c
Copy code
printf("Hello, World!\n");
Saída:
Copy code
Hello, World!
Especificadores de Formato:

Representam os valores que serão substituídos pelos argumentos fornecidos.
Sempre começam com % e podem incluir modificadores adicionais.
Exemplos:
%d → Inteiro decimal.
%f → Ponto flutuante.
%c → Caractere.
%s → String.
%x → Inteiro em hexadecimal.
%p → Ponteiro (endereço de memória).

5. Modificadores no Especificador de Formato
Os especificadores podem ser complementados por modificadores para ajustar a saída:

Largura Mínima:

Garante que o valor tenha uma largura mínima, preenchendo com espaços à esquerda, se necessário.
Exemplo:
c
Copy code
printf("%5d", 42);
Saída:
Copy code
   42
Precisão:

Controla o número de casas decimais para números de ponto flutuante ou o número máximo de caracteres de uma string.
Exemplo:
c
Copy code
printf("%.2f", 3.14159);
Saída:
Copy code
3.14
Alinhamento à Esquerda:

Usa o caractere - para alinhar o valor à esquerda.
Exemplo:
c
Copy code
printf("%-5d", 42);
Saída:
Copy code
42   
Preenchimento com Zeros:

Usa o caractere 0 para preencher os espaços vazios com zeros.
Exemplo:
c
Copy code
printf("%05d", 42);
Saída:
Copy code
00042

| **Especificador** | **Descrição**                                      | **Exemplo**                       |
|--------------------|--------------------------------------------------|-----------------------------------|
| `%d`              | Inteiro decimal (com sinal).                     | `printf("%d", 42);` → `42`       |
| `%u`              | Inteiro decimal sem sinal.                       | `printf("%u", 42);` → `42`       |
| `%f`              | Número de ponto flutuante (notação decimal).     | `printf("%.2f", 3.14);` → `3.14` |
| `%e`              | Número de ponto flutuante (notação científica).  | `printf("%e", 3.14);` → `3.140000e+00` |
| `%s`              | Cadeia de caracteres (string).                   | `printf("%s", "C");` → `C`       |
| `%c`              | Caractere.                                       | `printf("%c", 'A');` → `A`       |
| `%x` / `%X`       | Inteiro em hexadecimal (minúsculo/maiúsculo).    | `printf("%x", 255);` → `ff`      |
| `%p`              | Endereço de ponteiro (em hexadecimal).           | `printf("%p", ptr);`             |
| `%%`              | Imprime um caractere `%`.                        | `printf("%%");` → `%`            |


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
