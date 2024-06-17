/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 3076 - Exercício de História
          https://judge.beecrowd.com/pt/problems/view/3076

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3076.c -o historia
./historia
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int ano, seculo;

    // Leitura do ano ate EOF
    while (scanf("%d", &ano) != EOF) {
        // o século 1: entre 1 e 100
        // o século 2: entre 101 e 200
        // o século 3: entre 201 e 300
        //
        // ou seja, se o ano for 200, devemos achar 2
        //          se o ano for 201, devemos achar 3
        // para isso, basta subtrair 1 do ano,
        //            pegar o valor da centena e
        //            adicionar 1.

        // Calcula o seculo
        seculo = (ano - 1) / 100 + 1;

        printf("%d\n", seculo);
    }

    return 0;
}
