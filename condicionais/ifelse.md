# 4.2. Estrutura If-Else

A estrutura if-else permite controlar o fluxo mais básicas e fundamentais, isto é, a execução de diferentes blocos de comandos, expressões e instruções caso uma condição descrita por uma comparação seja verdadeira ou não.

```
if(COMPARACAO){
  /* comandos executados caso COMPARACAO retorne um valor verdadeiro */
}else{
 /* comandos executados caso COMPARACAO retorne um valor falso */
}
```

```COMPARACAO``` é uma expressão que permite avaliar uma condição. Exemplos de comparação podem ser encontrados [aqui](comparacao.md). Se ```COMPARACAO``` for verdadeira, **apenas** o bloco de código dentro do ```if``` (também chamado de **escopo** do ```if```) é executado. Caso contrário, **apenas** o bloco de código dentro do ```else``` é executado.

Vale lembrar que o bloco **else** é opcional, significando que se a condição do ```if``` for falsa e não houver um bloco ```else```, o programa segue o seu fluxo natural, executando a linha de código após o bloco if-else.

**IMPORTANTE:** coloque indentação (a famosa tecla TAB) dentro dos comandos associados a cada bloco.

## Otimizando Estruturas If-Else

No início, é comum colocar várias condicionais If como se segue:

```
int a;

scanf("%d",&a);

if(a % 2 == 0){
    printf("Numero par\n");
}

if(a % 2 != 0){
    printf("Numero impar\n");
}
```

Observe que no caso específico acima, se um número inteiro ```a``` é par, não há como ele ser ímpar. Mas no trecho de código-fonte acima, a comparação do segundo comando ```if``` é **desnecessariamente** executada quando o número ```a``` for par. Como a definição de número par ou ímpar é mutuamente exclusiva, você pode usar o bloco ```else``` como se segue:

```
int a;

scanf("%d",&a);

if(a % 2 == 0){
    printf("Numero par\n");
}else{
    printf("Numero impar\n");
}
```

## Estrutura If-Else aninhada

Em algumas situações, temos que elaborar um algoritmo em que apenas um, dentre diversos blocos de código, deve ser executado ao satisfazer determinada condição.

Por exemplo, suponha um programa que determina a menção final (de acordo com a Universidade de Brasília) de um discente a partir de sua média final. Considere que a média final é fornecida por um número real com um dígito de precisão na parte fracionária. A Tabela a seguir descreve como é feito o cálculo da menção a partir da média final:

Média Final (MF) | Menção Final |
---------------  | ------- |
0.0 <= MF <= 2.9 | II      |
3.0 <= MF <= 4.9 | MI      |
5.0 <= MF <= 6.9 | MM      |
7.0 <= MF <= 8.9 | MS      |
9.0 <= MF <= 10.0 | SS     |

Observe que temos vários intervalos a serem considerados e que cada intervalo está associado a uma menção. Isso significa que temos que elaborar um bloco de código específico para cada intervalo da tabela. Como resultado, temos que colocar blocos ```if-else``` dentro de outros blocos ```if-else```, caracterizando o bloco **if-else aninhado**.

```
#include <stdio.h>

int main() {
    double media_final;

    scanf("%lf", &media_final);

    if (media_final >= 0.0 && media_final <= 2.9) {
        printf("II\n");
    } else {
        if (media_final >= 3.0 && media_final <= 4.9) {
            printf("MI\n");
        } else {
            if (media_final >= 5.0 && media_final <= 6.9) {
                printf("MM\n");
            } else {
                if (media_final >= 7.0 && media_final <= 8.9) {
                    printf("MS\n");
                } else {
                    printf("SS\n");
                }
            }
        }
    }

    return 0;
}
```

Uma versão com comparações reduzidas é apresentada a seguir:

```
#include <stdio.h>

int main() {
    double media_final;

    scanf("%lf", &media_final);

    if (media_final >= 9.00) {
        printf("SS\n");
    } else {
        if (media_final >= 7.00) {
            printf("MS\n");
        } else {
            if (media_final >= 5.00) {
                printf("MM\n");
            } else {
                if (media_final >= 3.00) {
                    printf("MI\n");
                } else {
                    printf("II\n");
                }
            }
        }
    }

    return 0;
}
```

Uma versão do código acima utilizando uma simplificação conhecida como ```else-if``` em estruturas condicionais ```if-else``` aninhadas é apresentada a seguir:

```
#include <stdio.h>

int main() {
    double media_final;

    scanf("%lf", &media_final);

    if (media_final >= 9.00) {
        printf("SS\n");
    } else if (media_final >= 7.00) {
        printf("MS\n");
    } else if (media_final >= 5.00) {
        printf("MM\n");
    } else if (media_final >= 3.00) {
        printf("MI\n");
    } else {
        printf("II\n");
    }

    return 0;
}
```

**DESAFIO:** Como exercício, altere algum dos últimos três códigos-fontes para incluir o caso em que o discente recebe a menção SR, isto é, quando a frequência do discente em relação ao total de aulas ministradas é menor do que 75%. Repare que independemente da média final do discente, se não houve cumprimento da frequẽncia mínima de 75%, o discente é reprovado por faltas, independentemente da sua média final. Considere que a frequência é lida juntamente com a media final (separada por espaço em branco) como um número real contendo um único dígito de precisão na parte fracionária.
