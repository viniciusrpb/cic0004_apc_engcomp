/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 3302 - Resposta Certa (Ricardo Martins, Instituto Federal do Sul de Minas Gerais)
          https://judge.beecrowd.com/pt/problems/view/3302

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3302.c -o resposta_certa
./resposta_certa
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int N, i = 0, resposta;

    // Leitura da quantidade de perguntas
    scanf("%d", &N);

    // Repeticao de 0 a N
    while (i++ < N) {
        // Leitura da resposta
        scanf("%d", &resposta);
        // Impressao da resposta
        printf("resposta %d: %d\n", i, resposta);
    }
 
    return 0;
}