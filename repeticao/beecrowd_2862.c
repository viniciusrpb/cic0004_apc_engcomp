/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 2862 - Inseto!
          https://judge.beecrowd.com/pt/problems/view/2862

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2862.c -o inseto
./inseto
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int num_entradas, energia = 0;

    // Leitura da quantidade de entradas
    scanf("%d", &num_entradas);

    // Calculo da soma dos valores impares
    while (num_entradas-- > 0) { // Antes de rodar a comparacao do while, o X sera reduzido de 1
        // Leitura do valor de energia
        scanf("%d", &energia);
        // Impressao da saida
        if (energia > 8000) {
            printf("Mais de 8000!\n");
        } else {
            printf("Inseto!\n");
        }
    }

    return 0;
}