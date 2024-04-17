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

**IMPORTANTE:** coloque indentação (a famosa tecla TAB) dentro 

## Estrutura If-Else aninhada

Em algumas situações, temos que elaborar um algoritmo em que apenas um dentre diversos blocos de código devem ser executados sob determinadas condições.

Por exemplo, suponha um programa que determina a menção final (de acordo com a Universidade de Brasília) de um discente a partir de sua média final. Considere que a média final é fornecida por um número real com um dígito de precisão na parte fracionária. A Tabela a seguir descreve como é feito o cálculo da menção a partir da média final:

Média Final (MF) | Menção Final |
---------------  | ------- |
0.0 <= MF <= 2.9 | II      |
3.0 <= MF <= 4.9 | MI      |
5.0 <= MF <= 6.9 | MM      |
7.0 <= MF <= 8.9 | MS      |
9.0 <= MF <= 10.0 | SS     |

Observe que temos vários intervalos a serem considerados e que cada intervalo está associado a uma menção. Isso significa que temos que tratar 

```
#include <stdio.h>

int main() {
    double media_final,frequencia;

    scanf("%lf %lf", &media_final);

    if(frequencia >= 0.75){

        if (media_final >= 9.00) {
            printf("SS\n");
        } else {
            if (nota >= 7.00) {
                printf("MS\n");
            } else {
                if (nota >= 5.00) {
                    printf("MM\n");
                } else {
                    if (nota >= 3.00) {
                         printf("MI\n");
                    } else {
                         printf("II\n");
                    }
    } else {
        printf("SR\n");
    }

    return 0;
}
```



```
#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    if (nota >= 0 && nota <= 100) {
        if (nota >= 90) {
            printf("A\n");
        } else if (nota >= 80) {
            printf("B\n");
        } else if (nota >= 70) {
            printf("C\n");
        } else if (nota >= 60) {
            printf("D\n");
        } else {
            printf("F\n");
        }
    } else {
        printf("Nota inválida\n");
    }

    return 0;
}
```
