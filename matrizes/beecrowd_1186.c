/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Matrizes
Objetivo: Solução do problema beecrowd 1186 - Abaixo da Diagonal Secundária (Neilor Tonin)
          https://judge.beecrowd.com/pt/problems/view/1186

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1186.c -o diagonal_secundaria
./diagonal_secundaria
*/

#include <stdio.h>

#define TAMANHO 12 // O tamanho nao muda, entao podemos defini-lo dessa forma

int main() {
    char operacao;
    double matriz[TAMANHO][TAMANHO], soma = 0.0, media = 0.0;
    int i, j, qnt_elementos_somados = 0;

    // Leitura da operacao
    scanf("%c", &operacao);

    // Leitura de elementos da matriz
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Calcular a soma da diagonal inferior
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            // Note que a soma dos indexes i e j eh 11 se um numero pertencer a diagonal da matriz
            if (i + j > 11) {
                soma += matriz[i][j];
                qnt_elementos_somados++;
            }
        }
    }

    if (operacao == 'S') { // Se for soma
        printf("%.1lf\n", soma);
    } else if (operacao == 'M') { // Se for media
        media = soma / qnt_elementos_somados;
        printf("%.1lf\n", media);
    }

    return 0;
}
